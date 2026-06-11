import Mathlib

/-
# Problem Description

Fix a prime `p`, an integer `f ≥ 1`, and the prime power `q = p ^ f`. Let `F_q`
be the finite field with `q` elements, and let `A := F_q[t]` be the polynomial
ring in one variable `t`. We work inside the field of formal Laurent series in
`1/t`,
  `F_q((1/t)) ⊇ F_q(t)`,
into which the rational function field `F_q(t)` embeds via expansion of each
rational function as a Laurent series in the uniformizer `1/t` (an expansion in
*descending* powers of `t`).

Concretely, for a monic polynomial `a = t^d + θ_1 t^{d-1} + … + θ_d` and an
integer `k ≥ 1`, the element `a^{-k}` is identified with its expansion
  `a^{-k} = t^{-dk} (1 + θ_1 t^{-1} + … + θ_d t^{-d})^{-k} ∈ F_q((1/t))`.

We fix integers `d ≥ 1` and `k > 0`.

## Main Definitions

* Carry-free addition in base `p`: writing each `x_i` in base `p`, the addition
  `x_1 + … + x_r` is carry-free if at every digit position the sum of digits is
  at most `p - 1`.
* The index set `T_{d,k-1}` of `d`-tuples `(m_1,…,m_d)` with `m_i > 0`,
  `(q-1) ∣ m_i`, and the addition `(k-1) + m_1 + … + m_d` carry-free in base `p`.
* The weight `w(m) = ∑ i m_i = m_1 + 2 m_2 + … + d m_d`.
* The power sum `S_d(k) = ∑_{a ∈ A_d^+} 1/a^k`, over monic polynomials of degree
  exactly `d`, viewed in `F_q((1/t))`.

## Main Statement

There exist scalars `c_m ∈ F_q^×` (nonzero), one for each `m ∈ T_{d,k-1}`, with
  `S_d(k) = t^{-dk} ∑_{m ∈ T_{d,k-1}} c_m t^{-w(m)}`.

Although `T_{d,k-1}` is infinite, the RHS is well defined because only finitely
many `m` satisfy `w(m) ≤ B` for any bound `B`. The claim is about the
tuple-indexed family `(c_m)`: distinct tuples may share the same weight, so after
collecting by power of `t` the coefficient of a given power may be zero in `F_q`
even though every individual `c_m` is nonzero.
-/

open Polynomial

/-! ## Encoding of the Laurent field `F_q((1/t))`

We model `F_q((1/t))` by `LaurentSeries Fq = HahnSeries ℤ Fq`, in which the
formal variable `X` plays the role of the uniformizer `1/t`. Thus `t` corresponds
to `X⁻¹`, and the coefficient of `Xⁿ` of an element is precisely the coefficient
of `t^{-n}` in its expansion in descending powers of `t`. -/

/-- The `F_q`-algebra embedding `F_q[t] → F_q((1/t))` sending `t ↦ X⁻¹`, i.e. the
expansion of a polynomial in descending powers of `t`. Since `F_q((1/t))` is a
field, this extends multiplicatively to inverses, which is how `a^{-k}` is
interpreted below. -/
noncomputable def phi (Fq : Type) [Field Fq] : Polynomial Fq →ₐ[Fq] LaurentSeries Fq :=
  Polynomial.aeval ((PowerSeries.X : PowerSeries Fq) : LaurentSeries Fq)⁻¹

-- Main Definition(s)

/-- The `e`-th base-`p` digit of `x`, i.e. `⌊x / p^e⌋ mod p`. -/
def digit (p x e : ℕ) : ℕ := (x / p ^ e) % p

/-- **Definition 1 (Carry-free addition in base `p`).**
The addition of the nonnegative integers in `xs` is carry-free in base `p` if for
every digit position `e`, the sum of the `e`-th base-`p` digits is at most
`p - 1`. -/
def CarryFree (p : ℕ) (xs : List ℕ) : Prop :=
  ∀ e : ℕ, (xs.map (fun x => digit p x e)).sum ≤ p - 1

/-- The weight `w(m) = ∑ i (m i) = m_1 + 2 m_2 + … + d m_d`.
(Here `m : Fin d → ℕ` is `0`-indexed, so the `i`-th coordinate carries the
multiplier `i + 1`.) -/
def weight (d : ℕ) (m : Fin d → ℕ) : ℕ := ∑ i : Fin d, (i + 1) * m i

/-- **Definition 2 (The index set `T_{d,k-1}`).**
The membership predicate for the set of `d`-tuples `(m_1,…,m_d)` (`0`-indexed as
`m : Fin d → ℕ`) such that:
1. `m i > 0` for all `i`;
2. `(q - 1) ∣ m i` for all `i`;
3. the addition `(k-1) + m_1 + … + m_d` is carry-free in base `p`. -/
def Tindex (p q d kk : ℕ) (m : Fin d → ℕ) : Prop :=
  (∀ i, 0 < m i) ∧
  (∀ i, (q - 1) ∣ m i) ∧
  CarryFree p (kk :: List.ofFn m)

/-- The monic polynomial of degree exactly `d` with prescribed lower coefficients
`θ : Fin d → Fq`, namely `t^d + ∑_{i<d} (θ i) t^i`. As `θ` ranges over
`Fin d → Fq` this enumerates the set `A_d^+` of monic polynomials of degree `d`
without repetition (see `monicOf_monic`/`monicOf_natDegree`/`monicOf_injective`).
-/
noncomputable def monicOf (Fq : Type) [Field Fq] (d : ℕ) (θ : Fin d → Fq) : Polynomial Fq :=
  X ^ d + ∑ i : Fin d, C (θ i) * X ^ (i : ℕ)

/-- **Definition 3 (The power sum `S_d(k)`).**
`S_d(k) = ∑_{a ∈ A_d^+} a^{-k}`, summed over the monic polynomials of degree `d`
(parameterized by their lower coefficients `θ : Fin d → Fq`), viewed as an
element of `F_q((1/t))` via the embedding `phi`. The inverse `(phi a)⁻¹` is taken
in the Laurent series field, which realizes the expansion of `a^{-1}` in
descending powers of `t`. -/
noncomputable def Sdk (Fq : Type) [Field Fq] [Fintype Fq] (d k : ℕ) : LaurentSeries Fq :=
  ∑ θ : Fin d → Fq, (phi Fq (monicOf Fq d θ))⁻¹ ^ k

-- Main Statement(s)

/-- **Theorem.**
There exists a family of scalars `c_m ∈ F_q` indexed by `d`-tuples `m`, all
nonzero on the index set `T_{d,k-1}`, such that
  `S_d(k) = t^{-dk} ∑_{m ∈ T_{d,k-1}} c_m t^{-w(m)}`.

The identity is expressed coefficient-by-coefficient in `F_q((1/t))`: working with
the uniformizer `X = 1/t`, the coefficient of `Xⁿ` (equivalently of `t^{-n}`) in
`S_d(k)` equals the sum of `c_m` over the (finite) set of tuples `m ∈ T_{d,k-1}`
with `d*k + w(m) = n`. This faithfully captures that the right-hand side is a
formal sum of monomials `t^{-w(m)}` indexed by the tuples (with repetition
allowed): each individual `c_m` is nonzero, while the collected coefficient of a
given power of `t` may vanish. -/
theorem main (Fq : Type) [Field Fq] [Fintype Fq]
    (p f d k : ℕ) (hp : p.Prime) (hf : 1 ≤ f) (hd : 1 ≤ d) (hk : 0 < k)
    (hchar : CharP Fq p) (hq : Fintype.card Fq = p ^ f) :
    ∃ c : (Fin d → ℕ) → Fq,
      (∀ m, Tindex p (Fintype.card Fq) d (k - 1) m → c m ≠ 0) ∧
      (∀ n : ℤ, (Sdk Fq d k).coeff n =
        ∑ᶠ m ∈ {m : Fin d → ℕ | Tindex p (Fintype.card Fq) d (k - 1) m ∧
                  ((d * k : ℕ) + weight d m : ℤ) = n}, c m) := by
  sorry

/-! ## Correctness statements for the definitions

The following auxiliary statements pin down that `monicOf` is the intended
enumeration of the monic polynomials of degree exactly `d`, justifying that
`Sdk` is the power sum `S_d(k) = ∑_{a ∈ A_d^+} a^{-k}`. -/

/-- `monicOf` always produces a monic polynomial. -/
theorem monicOf_monic (Fq : Type) [Field Fq] (d : ℕ) (θ : Fin d → Fq) :
    (monicOf Fq d θ).Monic := by
  sorry

/-- `monicOf` produces a polynomial of degree exactly `d`. -/
theorem monicOf_natDegree (Fq : Type) [Field Fq] (d : ℕ) (θ : Fin d → Fq) :
    (monicOf Fq d θ).natDegree = d := by
  sorry

/-- Distinct coefficient tuples give distinct polynomials, so the parameterization
of `A_d^+` by `Fin d → Fq` has no repetitions. -/
theorem monicOf_injective (Fq : Type) [Field Fq] (d : ℕ) :
    Function.Injective (monicOf Fq d) := by
  sorry

/-- The parameterization is surjective onto `A_d^+`: every monic polynomial of
degree exactly `d` arises as `monicOf` of its lower coefficients. -/
theorem monicOf_surjective (Fq : Type) [Field Fq] (d : ℕ) (a : Polynomial Fq)
    (ha : a.Monic) (hdeg : a.natDegree = d) :
    ∃ θ : Fin d → Fq, monicOf Fq d θ = a := by
  sorry
