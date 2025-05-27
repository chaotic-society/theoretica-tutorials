# Tutorial: transform.h

Linear transformations such as rotations and projective geometry. All these methods use the `algebra` namespace and it is assumed that `using namespace th::algebra` has been used.

## Linear transformations

The `identity` method returns the N×N identity matrix. The `rows` and `cols` parameters are only needed for dynamically allocated matrix types:

```cpp
// Statically allocated 4x4 matrix
A = identity();

// Dynamically allocated 4x4 matrix
A = identity(4, 4);
```

The `diagonal` method overwrites a given N×N matrix `A` with a diagonal matrix whose entries are the elements of an N-dimensional vector `v`:

```
diagonal(A, v);
```

This method returns a reference to the overwritten matrix.
When given as argument only the vector `v`, the method returns the diagonal matrix and not its reference. The `rows` and `cols` parameters are only needed for dynamically allocated matrix types:

```cpp
// Statically allocated 4x4 matrix
A = diagonal(v);

// Dynamically allocated 4x4 matrix
A = diagonal(v, 4, 4);
```

A (N-1)-dimensional translation by a vector $\vec{t}$ can be represented as the following N-dimensional matrix:

```math
\begin{pmatrix}
\mathbb{1} & \vec{t} \\
\vec{0}^T & 1 \\
\end{pmatrix}
```

where $\mathbb{1}$ is the (N-1)×(N-1) identity matrix.
The `translation` method returns the above-mentioned matrix when given the (N-1)-dimensional vector `t`. The `rows` and `cols` parameters are only needed for dynamically allocated matrix types:

```cpp
// Statically allocated 4x4 matrix
A = translation(v);

// Dynamically allocated 4x4 matrix
A = translation(v, 4, 4);
```

A 2-dimensional rotation by an angle $\theta$ can be represented as the following N-dimensional matrix:

```math
\begin{pmatrix}
\cos{\theta} & \sin{\theta} & \vec{0} \\
-\sin{\theta} & \cos{\theta} & \vec{0} \\
\vec{0}^T & \vec{0}^T & \mathbb{1} \\
\end{pmatrix}
```

The `rotation_2d` method returns said matrix when given the angle `theta`. The `rows` and `cols` parameters are only needed for dynamically allocated matrix types:

```cpp
// Statically allocated 4x4 matrix
A = rotation_2d(theta);

// Dynamically allocated 4x4 matrix
A = rotation_2d(theta, 4, 4);
```









