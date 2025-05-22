# Tutorial: distance.h

Distances and norms of generic vectors, with real or complex elements. The element type of the vectors needs to have a function `abs()` which returns a real number. All these methods use the `algebra` namespace and it is assumed that `using namespace th::algebra` has been used.

## Norms

The $\mathcal{l}^p$ norm of an N-dimensional vector `v`: 

```math
x = \left( \sum_{i=1}^{n} |v_i|^p \right)^{\frac{1}{p}} 
```

is calculated through the `lp_norm` method:

```cpp
x = lp_norm(v, p);
```

In particular, the $\mathcal{l}^1$ and $\mathcal{l}^2$ (or Euclidean) norms have their own methods, `l1_norm` and `l2_norm`:

```cpp
// l1 norm of a N-dimensional vector
x = l1_norm(v);

// l2 norm of a N-dimensional vector
x = l2_norm(v);
```

The $\mathcal{l}^{\infty}$ norm of a vector `v`: 

```math
x = \max \left\{ |v_i| \right\}
```

is calculated through the `linf_norm` method:

```cpp
x = linf_norm(v);
```

## Distances

The Manhattan distance between two vectors ($\mathcal{l}^1$ norm of their difference) is calculated through the `manhattan_distance` method:

```cpp
x = manhattan_distance(v, w);
```

The Euclidean distance between two vectors ($\mathcal{l}^2$ norm of their difference) can be calculated using the `euclidean_distance` method or the `distance` method:

```cpp
// First method
x = euclidean_distance(v, w);

// Second method
x = distance(v, w); 
```

When given two scalars these two methods will return the absolute value of their difference.  
The Minkowski distance between two vectors ($\mathcal{l}^p$ norm of their difference) is calculated through the `minkowski_distance` method:

```cpp
x = minkowski_distance(v, w, p);
```

When given two scalars `a` and `b`, this method will return: 

```math
\left(|a - b|^p \right)^{\frac{1}{p}}
```

The Chebyshev distance between two vectors ($\mathcal{l}^{\infty}$ norm of their difference) is calculated through the `chebyshev_distance` method:

```cpp
x = chebyshev_distance(v, w);
```

The `discrete_distance` method, when applied to two vectors `v`, `w`, will return `1` if at least one component of `v - w` has absolute value greater than `tolerance`; if not it will return `0`:

```cpp
x = discrete_distance(v, w, tolerance);
```

The Canberra distance between two vectors `v`, `w`:

```math
x = \sum_{i=1}^{n} \frac{|v_i - w_i|}{|v_i|+|w_i|}
```

is calculated through the `canberra_distance` method:

```cpp
x = canberra_distance(v, w);
```

The cosine similarity between two real vectors `v`, `w`:

```math
x = \frac{\vec{v} \cdot \vec{u}}{\sqrt{\sum_{i=1}^{n}|v_i|^2}+\sqrt{\sum_{i=1}^{n}|w_i|^2}}
```

is calculated through the `cosine_distance` method:

```cpp
x = cosine_distance(v, w);
```

The `hamming_distance` method, when applied to two vectors `v`, `w`, will return the number of components of `v - w` which have absolute value greater than `tolerance`:

```cpp
x = hamming_distance(v, w, tolerance);
```
