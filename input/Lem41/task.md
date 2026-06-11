Let $p$ be a prime and $q = p^f$ a prime power (so $f \ge 1$ is an integer),
and fix integers $d \ge 1$ and $k > 0$.
We define $\mathcal{T}_{d,k-1}$
to be the set of $d$-tuples $(m_1, \dots, m_d)$ such that

(1) $m_i > 0$ for all $1 \le i \le d$
(2) $q-1$ divides $m_i$ for all $1 \le i \le d$
(3) the addition $(k-1) + m_1 + \dots + m_d$ has no carries in base $p$.

Let $A := \mathbb{F}_q[t]$ and
write $A_d^+$ for the monic polynomials in $A$ of degree $d$.
Define $S_d(k) := \sum_{a\in A_d^+}\frac{1}{a^k}\in \mathbb{F}_q(t)$.
Prove that
$S_d(k) = t^{-dk} \sum_{\mathbf{m} \in \mathcal{T}_{d,k-1}} c_{\mathbf{m}} t^{-(m_1+2m_2+\dots+dm_d)}$
for some nonzero scalars $c_{\mathbf{m}} \in \mathbb{F}_q^\times$.

Here the equality is an identity in the field of formal Laurent series
$\mathbb{F}_q((1/t)) \supseteq \mathbb{F}_q(t)$.
Note that although the set $\mathcal{T}_{d,k-1}$ is infinite,
the sum is well-defined in $\mathbb{F}_q((1/t))$, because only finitely many
tuples in $\mathcal{T}_{d,k-1}$ have $m_1 + 2m_2 + \dots + dm_d$
below any given bound.

An informal proof is provided in `informal.tex` that you can base the solution on.
