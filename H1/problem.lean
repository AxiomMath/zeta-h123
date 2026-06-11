import Mathlib

/-
# Problem Description

Throughout, fix a prime `q` and nonnegative integers `d ≥ 0` and `k ≥ 0`.

## Definition 1 (The coefficient `b(i,d)`).
For each integer `i` with `0 ≤ i ≤ d`, define
  `b(i,d) := -((q^(d+1) - q^(i+1))/(q-1) + i * q^i)`.
Here `(q^(d+1) - q^(i+1))/(q-1) = q^(i+1) + q^(i+2) + ... + q^d` is an integer,
so `b(i,d) ∈ ℤ`, and `b(i,d) ≤ 0` with equality only when `i = d = 0`.

## Definition 2 (Carry-free addition in base `q`).
Let `x_0, ..., x_d` be nonnegative integers, written in base `q` as
`x_i = ∑_n a_{i,n} q^n` with `0 ≤ a_{i,n} ≤ q-1`. The addition
`x_0 + ... + x_d` has no carries in base `q` (is carry-free) if for every digit
position `n ≥ 0`, `∑_{i=0}^d a_{i,n} ≤ q-1`.

## Definition 3 (Admissible tuple).
A `(d+1)`-tuple `(k_0, ..., k_d)` of nonnegative integers is admissible (for the
given `q`, `d`, `k`) if:
1. (Representation) `k = ∑_{i=0}^d k_i q^i`;
2. (Carry-free) the addition `k_0 + ... + k_d` has no carries in base `q`.

## Definition 4 (Objective function).
For an admissible tuple, `F(k_0, ..., k_d) := b(0,d) + ∑_{i=0}^d k_i b(i,d)`.

## Main Statement (Unique maximizer).
Let `q` be prime and `d, k ≥ 0`. Among all admissible `(d+1)`-tuples, the value
`F` attains its maximum at exactly one admissible tuple.

## Notes
- The feasible set is nonempty: the tuple `(k, 0, ..., 0)` is admissible.
- The numbering uses 0-indexing throughout (`Fin (d+1)`), matching the math.
-/

open Finset

/-- The `n`-th digit of `x` in base `q`, i.e. `a_{i,n}` for `x = ∑_n a_{i,n} q^n`. -/
def digit (q x n : ℕ) : ℕ := (x / q ^ n) % q

/-- The coefficient `b(i,d)`. The geometric sum `∑_{j=i+1}^d q^j` equals the integer
`(q^(d+1) - q^(i+1))/(q-1)`, so this matches the informal definition exactly. -/
def bCoeff (q i d : ℕ) : ℤ :=
  -((∑ j ∈ Finset.Ico (i + 1) (d + 1), (q : ℤ) ^ j) + (i : ℤ) * (q : ℤ) ^ i)

/-- Carry-free condition (Definition 2): in every digit position `n`, the sum of the
`n`-th base-`q` digits of the entries is at most `q - 1`. -/
def CarryFree (q d : ℕ) (kk : Fin (d + 1) → ℕ) : Prop :=
  ∀ n : ℕ, (∑ i : Fin (d + 1), digit q (kk i) n) ≤ q - 1

/-- Admissible tuple (Definition 3): satisfies the representation and carry-free
conditions. -/
def Admissible (q d k : ℕ) (kk : Fin (d + 1) → ℕ) : Prop :=
  (k = ∑ i : Fin (d + 1), kk i * q ^ (i : ℕ)) ∧ CarryFree q d kk

/-- The objective function `F` (Definition 4). -/
def F (q d : ℕ) (kk : Fin (d + 1) → ℕ) : ℤ :=
  bCoeff q 0 d + ∑ i : Fin (d + 1), (kk i : ℤ) * bCoeff q (i : ℕ) d

-- Main Statement(s)

/-- **Theorem (Unique maximizer).** Let `q` be a prime and `d, k ≥ 0`. Among all
admissible `(d+1)`-tuples, the value `F` attains its maximum at exactly one admissible
tuple: there exists an admissible `kstar` that maximizes `F`, and any admissible tuple
that itself maximizes `F` over all admissible tuples must equal `kstar`. -/
theorem main_theorem (q d k : ℕ) (hq : q.Prime) :
    ∃ kstar : Fin (d + 1) → ℕ, Admissible q d k kstar ∧
      (∀ kk : Fin (d + 1) → ℕ, Admissible q d k kk → F q d kk ≤ F q d kstar) ∧
      (∀ kk : Fin (d + 1) → ℕ, Admissible q d k kk →
        (∀ kk' : Fin (d + 1) → ℕ, Admissible q d k kk' → F q d kk' ≤ F q d kk) →
        kk = kstar) := by
  sorry
