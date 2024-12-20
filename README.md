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


- MyPyC and Cython are true compilers because they transform Python code into standalone .so (shared object) files or libraries.
- Numba and Taichi are JIT (Just-In-Time) compilers that optimize and execute Python code at runtime, meaning they don’t produce standalone binaries but rather execute faster during program execution.
- Taichi is more than just a compiler—it is a specialized framework for parallel computing that relies on its own syntax and abstractions for tasks like simulations and graphics.


# Additional Python Compiler Frameworks and Tools

| Compiler/Tool   | Classification             | Explanation                                                                                     |
|------------------|----------------------------|-------------------------------------------------------------------------------------------------|
| **PyPy**         | **JIT Compiler**           | An alternative Python interpreter with a built-in JIT compiler that accelerates general Python code execution. |
| **Pythran**      | **Static Compiler**        | A Python-to-C++ compiler for scientific and numerical computations, designed to work well with NumPy. |
| **ShedSkin**     | **Static Compiler**        | Converts statically-typed Python code into C++ for performance gains (limited Python feature support). |
| **LLVM Python**  | **Compiler Framework**     | Uses LLVM to compile Python code into optimized machine code, similar to Numba but more customizable. |
| **Rust-PyO3**    | **Static Compiler**        | A Rust framework for building Python modules, allowing performance-critical code to be written in Rust. |
| **PyInstaller**  | **Packaging Tool**         | Not a compiler but packages Python scripts into standalone executables; useful for distribution. |
| **Nuitka**       | **Static Compiler**        | Compiles Python scripts into standalone executables or shared libraries with a focus on maintaining full compatibility. |
| **Transcrypt**   | **Python-to-JavaScript**   | Compiles Python code into JavaScript for use in web applications, particularly for frontend development. |
| **Brython**      | **Python-to-JavaScript**   | A transpiler that enables Python to run in the browser as JavaScript. |
| **PyCUDA/PyOpenCL** | **Parallel Computing Framework** | Provides access to CUDA or OpenCL for high-performance GPU computing directly from Python. |
| **microPython**  | **Embedded Python Compiler** | A lean implementation of Python designed for microcontrollers, with efficient bytecode compilation. |
