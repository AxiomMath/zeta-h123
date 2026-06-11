Let $q$ be a prime.
If $d \ge 1$ and $k > 0$ are integers, we define $\mathcal{T}_{d,k-1}$
to be the set of $d$-tuples $(m_1, \dots, m_d)$ such that

(1) $m_i > 0$ for all $1 \le i \le d$
(2) $q-1$ divides $m_i$ for all $1 \le i \le d$
(3) the addition $(k-1) + m_1 + \dots + m_d$ has no carries in base $q$.

Then, define $s_d(k) = dk + \min(m_1 + 2m_2 + \dots + dm_d)$
where the minimum is taken over all tuples in $\mathcal{T}_{d,k-1}$.
(The set $\mathcal{T}_{d,k-1}$ is always nonempty, so this minimum exists:
for instance, take $m_i = (q-1) q^{e_i}$ for distinct exponents $e_i$
large enough that the digits of $k-1$ in those positions are zero.)

Fix integers $d > 1$ and $k > 0$.
Consider all integers $j \ge 0$ such that $q-1$ divides $j$
and $\binom{s_1(k) + j-1}{k-1}$ is not divisible by $q$.
Among all such $j$, show that the quantity
$s_{d-1}(s_1(k)+j) + s_1(k)+j$
is minimized uniquely at $j = 0$.

An informal proof is provided at `informal.tex` that can be used for reference.
