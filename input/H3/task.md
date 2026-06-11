Let $p$ be a prime and $q = p^f$ a prime power (so $f \ge 1$ is an integer).
If $d \ge 1$ and $k > 0$ are integers, we define $\mathcal{T}_{d,k-1}$
to be the set of $d$-tuples $(m_1, \dots, m_d)$ such that

(1) $m_i > 0$ for all $1 \le i \le d$
(2) $q-1$ divides $m_i$ for all $1 \le i \le d$
(3) the addition $(k-1) + m_1 + \dots + m_d$ has no carries in base $p$.

Then, define $s_d(k) = dk + \min(m_1 + 2m_2 + \dots + dm_d)$
where the minimum is taken over all tuples in $\mathcal{T}_{d,k-1}$.
(The set $\mathcal{T}_{d,k-1}$ is always nonempty, so this minimum exists:
for instance, take $m_i = (q-1) p^{f e_i}$ for distinct integers $e_i$
large enough that the base-$p$ digits of $k-1$ in the corresponding
blocks of $f$ digit positions are zero.)

Prove that if $d \ge 1$ and $k > 0$ with $p \nmid k$, then $s_d(k) < s_d(k+1)$.

An informal solution has been provided as `informal.tex`
that can be used for reference.
