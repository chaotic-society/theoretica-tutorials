# Tutorial: vec.h

> Vectors represent ordered sets of elements of a certain type.

They are implemented in Theoretica as the `vec` class in two different forms. They can be used to perform linear algebra operations along with matrices, such as dot and cross products and matrix-vector multiplication. In the following code snippets, it is assumed that `using namespace th` has been used.

## Vector construction
Vectors can be both allocated statically and dynamically, using two very similar notations. Both cases are implemented by the `vec<T, N>`, where `N = 0` is specialized for dynamically allocated vectors.

### Static vectors
A generic, statically allocated, N-dimensional vector with elements of type `T` is implemented by `vec<T, N>`. Real and complex static vectors are declared in the following way:

```cpp
vec<real, N> u;
vec<complex<>, N> w;
```

They can be initialized in multiple ways:

```cpp
// Fill a 3d vector with 0s
u = vec<real, 3>();

// Filling it with 3s
u = vec<real, 2>(3.0);

// Initialize values from a list
u = {3, 5, 9, -5.4, 3, 2.5, 0, -3};
```

The header [algebra_types.h](https://github.com/chaotic-society/theoretica/blob/master/src/algebra/algebra_types.h) defines some commonly used vector types:

```cpp
// 2-dimensional real vector
vec2 u2;

// 3-dimensional real vector
vec3 u3;

// 4-dimensional real vector
vec4 u4;

// 2-dimensional complex vector
cvec2 w2;

// 3-dimensional complex vector
cvec3 w3;

// 4-dimensional complex vector
cvec4 w4;
```

They are not different from the equivalent `vec<Type, N>` for specialized `Type` and `N`.

### Dynamic vectors

Vectors can be allocated dynamically in a very similar way, but instead of specifying their size by template, it is done as an argument. For example, a N-dimensional vector can be specified with dynamic allocation using its constructor:

```cpp
// Create a 3D vector filled with zeroes
vec<real> v1 = vec<real>(3);
// Create a 3D vector filled with 1s
vec<real> v2 = vec<real>(3, 1.0);
```

Vectors can be also initialized from their elements:

```cpp
vec<real> v = {1.5, -3.0, 0., 4.0};
```

In general, memory allocation and deallocation are handled completely automatically inside the class itself.

## Vector operations

The i-th component of a vector `myVector` can be accessed using:

```cpp
// Standard method
v_i = myVector[i];

// Alternative:
v_i = myVector.at(i);
```

The `at` method enables bound checking: it throws an exception if `i>N`. These methods also allow to modify the i-th component:

```cpp
// Standard method
myVector[i] = v_i;

// Alternative
myVector.at(i) = v_i;
```

The size of the vector can be accessed using:

```cpp
v_size = myVector.size();
```

## Vector operations

Opposite vector:

```cpp
v1 = -v2;
```

Vector addition and subtraction:

```cpp
v1 = v2 + v3;
v1 = v2 - v3;
```

Multiplication and division by a scalar `x`:

```cpp
v1 = x * v2;
v1 = v2 / x;
```

In-place addition and subtraction:

```cpp
v1 += v2;
v1 -= v2;
```

In-place multiplication and division by a scalar:

```cpp
v1 *= x;
v1 /= x;
```

Dot product:

```cpp
x = v1 * v2;
```

Cross product (only for 3-dimensional vectors):

```cpp
v1 = v2.cross(v3);
v1 = algebra::cross(v2, v3);
```

Norm:

```cpp
x = v2.norm();
```

Sometimes it can be useful to use the square norm instead, avoiding a square root calculation:

```cpp
x = v2.sqr_norm();
```

Vector normalization can be done in two ways. The `normalized` method returns the normalized vector without modifying it, meanwhile the `normalize` method overwrites the vector itself with its normalization.

```cpp
// First method
v1 = v2.normalized();

// Second method
v1.normalize();
```

## Parallelization
Theoretica supports element-wise evaluation of functions, which means that a certain function is computed for each element of a vector. This should generally be preferred because it is optimized using OpenMP, making the call faster. The `parallel` module implements common function, such as the square root:

```cpp
v = parallel::sqrt(w);
```

It is also possible to use an arbitrary function with `apply_function`. Note that the module works also with other element types than real, such as complex numbers.
