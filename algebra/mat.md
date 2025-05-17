# Tutorial: mat.h

Matrices represent tables of elements of a certain type. They are implemented in Theoretica as the `mat` class in two different forms. They can be used to perform linear algebra operations along with vectors, such as matrix-matrix and matrix-vector multiplication.

## Matrix construction
Matrices can be both allocated statically and dynamically, using two very similar notations.

### Static matrices
A generic, statically allocated, N×M matrix with elements of type `T` is implemented by `mat<T, N, M>`. Real and complex static matrices are declared in the following way:

```cpp
mat<real, N, M> A;
mat<complex<>, N, M> B;
```

They can then be initialized in multiple ways:

```cpp
// Fill a 3x3 matrix with 0s
A = mat<real, 3, 3>();

// Filling a 4x4 matrix with 3s
A = mat<real, 4, 4>(3.0);

// Initialize values from lists
A = {
{3.0, 5.2, 9.1},
{0.0, -3.0, 1.5},
{2.3, -6.8, 3.0}
};  
```

The header [algebra_types.h](https://github.com/chaotic-society/theoretica/blob/master/src/algebra/algebra_types.h) defines some commonly used matrix types:

```cpp
// 2x2 real matrix
mat2 A2;

// 3x3 real matrix
mat3 A3;

// 4x4 real matrix
mat4 A4;

// 2x2 complex matrix
cmat2 B2;

// 3x3 complex matrix
cmat3 B3;

// 4x4 complex matrix
cmat4 B4;
```

They are not different from the equivalent mat<Type, N, N>.

### Dynamic matrices

Matrices can be allocated dynamically in a very similar way, but instead of specifying their size by template, it is done as an argument. For example, a N×M matrix can be specified with dynamic allocation using its constructor:

```cpp
// Create a 3x3 matrix with zeroes
mat<real> A = mat<real>(3, 3);
// Create a 3x3 matrix filled with 1s
mat<real> A = mat<real>(3, 3, 1.0);
```

Dynamic matrices can be also initialized from their elements:

```cpp
A = {
{3.0, 5.2, 9.1},
{0.0, -3.0, 1.5},
{2.3, -6.8, 3.0}
};  
```

In general, memory allocation and deallocation are handled completely automatically inside the class itself.

## Matrix manipulation

The (i, j) component of a matrix `myMatrix` can be accessed using:

```cpp
// Standard method
M_ij = myMatrix(i, j);

// Alternative:
M_ij = myMatrix.at(i, j);
```

The `at` method enables bound checking: it throws an exception if `i,j>N`. These methods also allow to modify the (i, j) component:

```cpp
// Standard method
myMatrix(i, j) = M_ij;

// Alternative
myMatrix.at(i, j) = M_ij;
```

The number of rows and columns of the matrix can be accessed using the `rows()` and `cols()` methods:

```cpp
nRows = myMatrix.rows();
nColumns = myMatrix.cols();
```

## Matrix operations

Matrix addition:

```cpp
A = B + C;
```

Matrix subtraction:

```cpp
A = B - C;
```

Multiplication by a scalar `x`:

```cpp
A = x * B;
```

Division by a scalar:

```cpp
A = B / x;
```

Assignment by addition:

```cpp
A += B;
```

Assignment by subtraction:

```cpp
A -= B;
```

Assignment by multiplication by a scalar:

```cpp
A *= x;
```

Assignment by division by a scalar:

```cpp
A /= x;
```

Matrix-vector multiplication (between a N×M matrix `A` and a M-dimensional vector `v2`):

```cpp
v1 = A * v2;
```

Matrix-matrix multiplication (between a N×M matrix `B` and a M×P matrix `C`):

```cpp
A = B * C;
```

Assignment by matrix-matrix multiplication (between square matrices of the same dimension):

```cpp
A *= B;
```

Transpose (of a square matrix):

```cpp
A = B.transpose();
```

Inversion of a square matrix can be done in two ways. The `inverse()` method returns the inverse matrix without modifying it, meanwhile the `invert()` method overwrites the matrix itself with its inverse.

```cpp
// First method
A = B.inverse();

// Second method
A.invert();
```
