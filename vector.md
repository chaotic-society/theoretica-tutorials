# Tutorial: vector.h
## Constructing vectors
### Static vectors

A N-dimensional static vector is declared in the following way:

```cpp
vec<real, N> myVector;
```

It can then be filled in multiple ways:

```cpp
// Filling it with 0s
myVector = vec<real, N>();

// Filling it with 3s
myVector = vec<real, N>(3);

// Initializing values from a list
myVector = {3, 5, 9, -5.4, 3, 2.5, 0, -3};
```

### Dynamic vectors
