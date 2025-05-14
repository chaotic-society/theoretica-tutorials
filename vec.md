# Tutorial: vec.h

## Vector construction

### Static vectors

N-dimensional real and complex static vectors are declared in the following way:

```cpp
vec<real, N> u;
vec<complex<>, N> w;
```

They can then be initialized in multiple ways:

```cpp
// Filling it with 0s
u = vec<real, N>();

// Filling it with 3s
u = vec<real, N>(3);

// Initializing values from a list
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

They are not different from the equivalent vec<Type, N>.


### Dynamic vectors

## Vector manipulation

### Static vectors

The i-th component of a vector `myVector` can be accessed using:

```cpp
// Standard method
v_i = myVector[i];

// Alternatives:
v_i = myVector.at(i);
v_i = myVector.get(i);
```

The i-th component can be modified using:

```cpp
// Standard method
myVector[i] = v_i;

// Alternatives:
myVector.set(i, v_i);
```

The size of the vector can be accessed using:

```cpp
v_size = myVector.size();
```

### Dynamic vectors

## Vector operations

### Static vectors

Comparison operators equality and inequality:
```cpp
v1 == v2

v1 != v2
```

Identity operator:

```cpp
v1 = +v2;
```

Vector sum:

```cpp
v1 = v2 + v3;
```

Opposite vector:

```cpp
v1 = -v2;
```

Vector subtraction:

```cpp
v1 = v2 - v3;
```

Multiplication by a scalar `x`:

```cpp
v1 = x * v2;
```

Division by a scalar:

```cpp
v1 = v2 / x;
```

Assignment by addition:

```cpp
v1 += v2;
```

Assignment by subtraction:

```cpp
v1 -= v2;
```

Assignment by multiplication by a scalar:

```cpp
v1 *= x;
```

Assignment by division by a scalar:

```cpp
v1 /= x;
```

Dot product:

```cpp
x = v1 * v2;
```

Cross product (between 3-dimensional vectors `v2` and `v3`):

```cpp
v1 = v2.cross(v3);
```

Norm:

```cpp
x = v2.norm();
```

Square norm:

```cpp
x = v2.sqr_norm();
```

Normalization of a vector can be done in two ways: the first assigns the normalized first vector to a second, the second overwrites the first with its normalization.

```cpp
// First method
v1 = v2.normalized();

// Second method
v1.normalize();
```

### Dynamic vectors
