import Mathlib

/-
# Problem Description

Throughout, fix a prime `q`. All "digit" and "carry" conditions below are taken in
base `q`.

## Definition 1 (Base-`q` digits).
Every nonnegative integer `x` has a unique base-`q` representation
`x = ∑_{e ≥ 0} x_e q^e`, with `0 ≤ x_e ≤ q-1` and `x_e = 0` for all sufficiently
large `e`. We call `x_e` the `e`-th base-`q` digit of `x`.

## Definition 2 (Carry-free addition).
A finite list of nonnegative integers `x_1, …, x_r` *adds without carries in base `q`*
if, at every digit position `e ≥ 0`, the digits sum to at most `q-1`:
`∑_{i=1}^r (x_i)_e ≤ q-1` for every `e ≥ 0`.

## Definition 3 (The set `T_{d,k-1}`).
For integers `d ≥ 1` and `k > 0`, `T_{d,k-1}` is the set of `d`-tuples
`(m_1, …, m_d)` of integers satisfying:
  1. `m_i > 0` for all `i`;
  2. `(q-1) ∣ m_i` for all `i`;
  3. the list `(k-1, m_1, …, m_d)` adds without carries in base `q`.

## Definition 4 (The functions `s_d`).
For `d ≥ 1` and `k > 0`,
`s_d(k) = d*k + min_{(m_1,…,m_d) ∈ T_{d,k-1}} (m_1 + 2 m_2 + ⋯ + d m_d)`.
`T_{d,k-1}` is always nonempty so the minimum exists.

## Main Statement (Theorem).
Fix a prime `q` and integers `d > 1` and `k > 0`. Let `J` be the set of integers
`j ≥ 0` with `(q-1) ∣ j` and `q ∤ C(s_1(k) + j - 1, k-1)`. For `j ∈ J` set
`F(j) = s_{d-1}(s_1(k) + j) + s_1(k) + j`. Then `F` attains its minimum over `J`
uniquely at `j = 0`: `F(0) < F(j)` for every `j ∈ J` with `j > 0`.

## Notes
- Here `n = s_1(k) + j - 1 ≥ k-1 ≥ 0` and `r = k-1 ≥ 0`, so all binomial
  coefficients are ordinary binomials of nonnegative integers.
- `0 ∈ J` (a nontrivial fact), so the uniqueness of the minimizer is meaningful;
  this admissibility is recorded as a separate statement `main_zero_mem`.
- We use `ℕ` and 1-indexing of digit positions via list indices starting at 0;
  the weight on `m_i` is `i`, encoded as `(i.val + 1)` for `i : Fin d`.
-/

/-- The `e`-th base-`q` digit of `x` (returns `0` for positions beyond the
representation, matching the convention `x_e = 0` for large `e`). -/
def qdigit (q x e : ℕ) : ℕ := (Nat.digits q x).getD e 0

/-- A finite list of nonnegative integers `xs` *adds without carries in base `q`*
if at every digit position `e` the base-`q` digits sum to at most `q - 1`. This is
exactly the carry-free condition of Definition 2. -/
def AddNoCarry (q : ℕ) (xs : List ℕ) : Prop :=
  ∀ e : ℕ, (xs.map (fun x => qdigit q x e)).sum ≤ q - 1

/-- The set `T_{d,k1}` of `d`-tuples (encoded as `m : Fin d → ℕ`) such that each
`m i` is positive, divisible by `q - 1`, and the list `(k1, m_0, …, m_{d-1})` adds
without carries in base `q`. Here `k1` plays the role of `k - 1`. -/
def TSet (q d k1 : ℕ) : Set (Fin d → ℕ) :=
  {m | (∀ i, 0 < m i) ∧ (∀ i, (q - 1) ∣ m i) ∧
        AddNoCarry q (k1 :: (List.ofFn m))}

/-- The function `s_d(k) = d*k + min over `T_{d,k-1}` of `∑ (i+1) * m i`.
The minimum over the nonempty set of objective values is realised as the infimum
(`sInf`) of that set of naturals. -/
noncomputable def s (q d k : ℕ) : ℕ :=
  d * k + sInf {v : ℕ | ∃ m ∈ TSet q d (k - 1), v = ∑ i : Fin d, (i.val + 1) * m i}

/-- The objective `F(j) = s_{d-1}(s_1(k) + j) + s_1(k) + j`. -/
noncomputable def F (q d k j : ℕ) : ℕ :=
  s q (d - 1) (s q 1 k + j) + s q 1 k + j

/-- The admissible set `J`: nonnegative integers `j` with `(q-1) ∣ j` and
`q ∤ C(s_1(k) + j - 1, k - 1)`. -/
def Jset (q k : ℕ) : Set ℕ :=
  {j | (q - 1) ∣ j ∧ ¬ (q ∣ Nat.choose (s q 1 k + j - 1) (k - 1))}

-- Main Statement(s)

/-- `0` is admissible: `0 ∈ J`. This is the nontrivial admissibility fact noted in
`problem.md`, which makes the uniqueness-of-minimizer statement meaningful. -/
theorem main_zero_mem (q : ℕ) (hq : q.Prime) (d k : ℕ) (hd : 1 < d) (hk : 0 < k) :
    (0 : ℕ) ∈ Jset q k := by
  sorry

/-- `F` attains its minimum over `J` uniquely at `j = 0`: for every admissible
`j ∈ J` with `j > 0` we have `F(0) < F(j)`. -/
theorem main (q : ℕ) (hq : q.Prime) (d k : ℕ) (hd : 1 < d) (hk : 0 < k) :
    ∀ j ∈ Jset q k, 0 < j → F q d k 0 < F q d k j := by
  sorry
