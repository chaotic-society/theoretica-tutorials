# Tutorial: distance.h

Distances and norms of generic vectors, with real or complex elements. The element type of the vectors needs to have a function `abs()` which returns a real number.

## Norms

The $\mathcal{l}^p$ norm of a n-dimensional vector `v`: 

```math
x = \left( \sum_{i=1}^{n} |v_i|^p \right)^{\frac{1}{p}} 
```

is calculated through the `lp_norm` method:

```cpp
x = lp_norm(v, p);
```

In particular, the $\mathcal{l}^1$ and $\mathcal{l}^2$ (or Euclidean) norms have their own methods, `l1_norm` and `l2_norm`:

```cpp
x = l1_norm(v);
x = l2_norm(v);
```

The $\mathcal{l}^{\infty}$ norm: 

```math
x = \max\left( \left\{ |v_i| \right\} \right)
```

is calculated through the `linf_norm` method:

```cpp
x = linf_norm(v);
```

## Distances


