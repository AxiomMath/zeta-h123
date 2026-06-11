Let $q$ be a prime, and let $d \ge 0$ and $k \ge 0$ be nonnegative integers.
For each integer $0 \le i \le d$, define
$b(i,d) := -\left(\frac{q^{d+1}-q^{i+1}}{q-1}+iq^i\right)$
(note that $b(i,d) \le 0$, with equality only when $i = d = 0$).

Consider $(d+1)$-tuples $(k_0, k_1 ,\dots, k_d)$ of nonnegative integers
such that $k = \sum_{i=0}^d k_i q^i$,
and the addition $k_0 + k_1 + … + k_d$ has no carries in base $q$.
Prove that $b(0,d) + \sum_{i=0}^d k_i b(i,d)$
is maximized at a unique such $(d+1)$-tuple;
that is, exactly one tuple attains the maximum value.

An informal proof is provided in `informal.tex` that you can base the solution on.
