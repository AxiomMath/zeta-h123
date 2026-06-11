import Mathlib

/-
# Problem Description

Fix a prime number `p` and a prime power `q = p^f` where `f ≥ 1` is an integer.

## Definition 1 (Carry-free addition in base `p`)
For nonnegative integers `x_1, ..., x_r`, the addition `x_1 + ... + x_r` *has no
carries in base `p`* if, at every base-`p` digit position, the corresponding
base-`p` digits of `x_1, ..., x_r` sum to at most `p - 1`. Writing
`x_j = ∑_{t ≥ 0} a_{j,t} p^t` with `0 ≤ a_{j,t} ≤ p - 1`, the condition is
`∑_{j=1}^r a_{j,t} ≤ p - 1` for every `t ≥ 0`.

## Definition 2 (The set `T_{d,j}`)
For `d ≥ 1` and `j ≥ 0`, `T_{d,j}` is the set of all `d`-tuples `(m_1, ..., m_d)`
of integers with: (1) `m_i > 0`; (2) `(q - 1) ∣ m_i`; (3) the addition
`j + m_1 + ... + m_d` has no carries in base `p` (applied to the `r = d + 1`
summands `j, m_1, ..., m_d`).

## Definition 3 (The quantities `M_d(j)` and `s_d(k)`)
The set `T_{d,j}` is nonempty, so the minimum
`M_d(j) := min_{(m_1,...,m_d) ∈ T_{d,j}} (m_1 + 2 m_2 + ... + d m_d)`
exists and is attained. For `d ≥ 1` and `k > 0`, `s_d(k) := d k + M_d(k - 1)`.

## Main Statement (Theorem)
Let `p` be a prime, `q = p^f` a prime power (`f ≥ 1`), and `d ≥ 1`, `k > 0`
integers. If `p ∤ k`, then `s_d(k) < s_d(k + 1)`.

## Remarks
`T_{d,j}` is nonempty: choosing `m_i = (q - 1) p^{f e_i}` for distinct large
exponents `e_i` gives a carry-free sum, so `M_d(j)` is well defined. The proof
of the theorem uses that `p ∤ k` implies passing from `k` to `k - 1` only
decreases the units digit, so `T_{d,k} ⊆ T_{d,k-1}` and hence
`M_d(k) ≥ M_d(k - 1)`, giving `s_d(k+1) - s_d(k) ≥ d ≥ 1 > 0`.
-/

open Finset

-- Main Definition(s)

/-- Definition 1: the addition `j + m_1 + ... + m_d` (the `r = d + 1` summands
`j, m_1, ..., m_d`) has no carries in base `p`: at every base-`p` digit position
`t`, the digits sum to at most `p - 1`. We read off the `t`-th base-`p` digit of
a number `n` as `(Nat.digits p n).getD t 0`. -/
def NoCarry (p : ℕ) (j : ℕ) (d : ℕ) (m : Fin d → ℕ) : Prop :=
  ∀ t : ℕ, (Nat.digits p j).getD t 0 + ∑ i, (Nat.digits p (m i)).getD t 0 ≤ p - 1

/-- Definition 2: the set `T_{d,j}` of `d`-tuples `(m_1, ..., m_d)` (encoded as a
function `Fin d → ℕ`) with each `m_i > 0`, `(q - 1) ∣ m_i`, and `j + m_1 + ... +
m_d` carry-free in base `p`. -/
def Tset (p q d j : ℕ) : Set (Fin d → ℕ) :=
  {m | (∀ i, 0 < m i) ∧ (∀ i, (q - 1) ∣ m i) ∧ NoCarry p j d m}

/-- The objective `m_1 + 2 m_2 + ... + d m_d = ∑_{i} i · m_i` (with `1`-based
weights; the `i`-th coordinate `m i` is weighted by `i + 1` under `0`-based
`Fin d` indexing). -/
def objective (d : ℕ) (m : Fin d → ℕ) : ℕ := ∑ i : Fin d, (i.val + 1) * m i

/-- Definition 3: `M_d(j)` is the minimum of the objective over `T_{d,j}`,
realized as the infimum of the image of `T_{d,j}` under the objective. Since
`T_{d,j}` is nonempty (see Remarks) and `ℕ` is well-ordered, this minimum is
attained. -/
noncomputable def Md (p q d j : ℕ) : ℕ := sInf (objective d '' Tset p q d j)

/-- Definition 3: `s_d(k) := d k + M_d(k - 1)`. -/
noncomputable def sd (p q d k : ℕ) : ℕ := d * k + Md p q d (k - 1)

-- Main Statement(s)

/-- **Theorem.** Let `p` be a prime, `q = p^f` (`f ≥ 1`), and `d ≥ 1`, `k > 0`.
If `p ∤ k`, then `s_d(k) < s_d(k + 1)`. -/
theorem main_theorem (p q d k f : ℕ) (hp : p.Prime) (hf : 1 ≤ f) (hq : q = p ^ f)
    (hd : 1 ≤ d) (hk : 0 < k) (hpk : ¬ p ∣ k) :
    sd p q d k < sd p q d (k + 1) := by
  sorry

-- Correctness statements characterizing `M_d(j)` as the attained minimum.

/-- Nonemptiness of `T_{d,j}` (Remarks): the minimization defining `M_d(j)` is
over a nonempty set. -/
theorem Tset_nonempty (p q d j f : ℕ) (hp : p.Prime) (hf : 1 ≤ f) (hq : q = p ^ f)
    (hd : 1 ≤ d) : (Tset p q d j).Nonempty := by
  sorry

/-- `M_d(j)` is attained: there is a tuple in `T_{d,j}` achieving the objective
value `M_d(j)`. -/
theorem Md_attained (p q d j f : ℕ) (hp : p.Prime) (hf : 1 ≤ f) (hq : q = p ^ f)
    (hd : 1 ≤ d) :
    ∃ m ∈ Tset p q d j, objective d m = Md p q d j := by
  sorry

/-- `M_d(j)` is a lower bound for the objective on `T_{d,j}`. -/
theorem Md_le (p q d j f : ℕ) (hp : p.Prime) (hf : 1 ≤ f) (hq : q = p ^ f)
    (hd : 1 ≤ d) {m : Fin d → ℕ} (hm : m ∈ Tset p q d j) :
    Md p q d j ≤ objective d m := by
  sorry
