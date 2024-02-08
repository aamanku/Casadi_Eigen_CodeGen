# Casadi Eigen Code Generation
Automatically generate C++ code for eigen from casadi symbolic expressions. 
The main implementation is in [CasadiEigenCodeGenerator.hpp](include/casadi_eigen_codegen/CasadiEigenCodeGenerator.hpp).


## Speed Result
Code generated with CMake target `casadi_eigen_codegen` and speed tested with CMake target `test_generated_code`
Without random arguments
```
f_eigen: 46 ns
f casadi: 45 ns
```
With random arguments
```
f_eigen: 2182 ns
f casadi: 2180 ns
```