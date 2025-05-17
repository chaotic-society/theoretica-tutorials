# Tutorial: distance.h

Distances and norms of generic vectors, with real or complex elements. The element type of the vectors needs to have a function `abs()` which returns a real number.

## Norms

The $\mathcal{l}^p$ norm of a N-dimensional real vector `v`: 

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

The $\mathcal{l}^{\infty}$ norm of a N-dimensional real vector `v`: 

```math
x = \max\left( \left\{ |v_i| \right\} \right)
```

is calculated through the `linf_norm` method:

```cpp
x = linf_norm(v);
```

## Distances

The Euclidean distance between two N-dimensional real vectors ($\mathcal{l}^2$ norm of their difference) can be calculated in two ways. The dedicated method would be `euclidean_distance`, however the `distance` method will calculate the Euclidean distance when the arguments are two real vectors:

```cpp
// First method
x = euclidean_distance(v, w);

// Second method
x = distance(v, w); 
```

When given two real scalars these two methods will return the absolute value of their difference.  
The Minkowski distance between two N-dimensional real vectors ($\mathcal{l}^p$ norm of their difference) is calculated through the `minkowski_distance` method:

```cpp
x = minkowski_distance(v, w, p);
```

When given two real scalars `a` and `b`, this method will return: 

```math
\left[ \left( |a - b| \right)^p \right]^{\frac{1}{p}}
```

The Hermitian distance between two N-dimensional complex vectors `u` and `z`:

```math
x = \sqrt{\left(\vec{u} - \vec{z}\right) \cdot \left(\vec{u} - \vec{z}\right)^*}
```

can be calculated in two ways. The dedicated method would be `hermitian_distance`, however the `distance` method will calculate the Euclidean distance when the arguments are two complex vectors:

```cpp
// First method
x = hermitian_distance(u, z);

// Second method
x = distance(u, z); 
```
When given two complex scalars `a` and `b` the `distance` method will return the absolute value of their difference.  

```math
x = \sqrt{\left(a - b\right) \cdot \left(a - b\right)^*}
```

The Manhattan distance between two N-dimensional real vectors ($\mathcal{l}^1$ norm of their difference) is calculated through the `manhattan_distance` method:

```cpp
x = manhattan_distance(v, w);
```

The Chebyshev distance between two N-dimensional real vectors ($\mathcal{l}^{\infty}$ norm of their difference) is calculated through the `manhattan_distance` method:

```cpp
x = manhattan_distance(v, w);
```



