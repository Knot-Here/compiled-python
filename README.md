# compiled-python
Reference to python compile methods

## Methods
- mypyc
- cython
- numba
- taichi

# Comparison of Compilers

| Compiler | Compilation Type            | When to Use                                                                                     | When Not to Use                                                                                      |
|----------|-----------------------------|------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------|
| **MyPyC** | Static compilation to C extensions | - CPU-bound tasks like loops and numerical operations<br>- Production code requiring performance boosts<br>- Libraries with stable APIs | - I/O-bound tasks (e.g., file/network operations)<br>- Code without type annotations<br>- Dynamic features like `eval` or monkey-patching |
| **Cython** | Static compilation to C extensions | - Computationally intensive tasks<br>- Interfacing with C/C++ libraries<br>- Code that benefits from explicit type annotations | - General-purpose Python code<br>- Projects without a C compiler<br>- Tasks without numerical or C interop needs |
| **Numba** | JIT (Just-In-Time) compilation | - Numerical computations and array processing<br>- Scientific computing<br>- Loops with numerical logic | - General-purpose Python code<br>- Dynamic Python features like strings and dictionaries<br>- Non-numerical workloads |
| **Taichi** | JIT compilation for parallel processing | - GPU/CPU-bound parallel tasks<br>- Numerical simulations like physics, graphics, or matrix operations<br>- Tasks requiring high performance in real-time systems | - I/O-bound tasks<br>- Small workloads where overhead outweighs benefits<br>- General-purpose or dynamic Python features |

