# Cython Directory

## Overview
This directory contains Python modules that have been optimized using **Cython**, a tool for converting Python code into C/C++ extensions. These compiled extensions provide a significant performance boost by leveraging C-level execution while maintaining compatibility with Python.

## What is Cython?
Cython is a programming language and compiler that bridges the gap between Python and C. It allows you to:

- Write Python code with optional C-style type annotations.
- Compile the code into C extensions for faster execution.
- Interact with C/C++ libraries seamlessly.

### Key Features:
- **Performance Boost**: Accelerates Python code by compiling it to C.
- **C Interoperability**: Enables interaction with C libraries and data structures.
- **Type Safety**: Use C-style type annotations for added speed and correctness.

---

## How to Compile Code with Cython
To compile Python code into a C extension using Cython, follow these steps:

1. **Install Cython**:
   ```bash
   pip install cython
   ```

2. **Write Python Code with Type Annotations**:
   You can use optional type annotations in Python to improve performance.

   Example (`lcs.py`):
   ```python
   def lcs(a: list[int], b: list[int]) -> int:
       dp = [[0] * (len(b) + 1) for _ in range(len(a) + 1)]
       for i in range(1, len(a) + 1):
           for j in range(1, len(b) + 1):
               if a[i - 1] == b[j - 1]:
                   dp[i][j] = dp[i - 1][j - 1] + 1
               else:
                   dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
       return dp[-1][-1]
   ```

3. **Create a `setup.py` File**:
   To compile the Python file into a C extension, create a `setup.py` file in the same directory:
   ```python
   from setuptools import setup
   from Cython.Build import cythonize

   setup(
       ext_modules=cythonize("lcs.py"),
   )
   ```

4. **Compile the Code**:
   Run the following command to compile the module:
   ```bash
   python setup.py build_ext --inplace
   ```

   This generates a compiled `.so` file (e.g., `lcs.cpython-<version>-<platform>.so`) in the same directory.

5. **Move the Compiled Module to This Directory**:
   To organize your compiled modules, move the `.so` file to this directory (`cython`).

---

## How to Use the Compiled Module
1. Import the compiled module in your Python code:
   ```python
   from src.cython.lcs import lcs

   # Example usage
   result = lcs([1, 2, 3], [2, 3, 4])
   print(f"LCS result: {result}")
   ```

2. Run your Python script as usual:
   ```bash
   python3 your_script.py
   ```

The `.so` file will automatically be used instead of the original Python file.

---

## When to Use Cython
Cython is ideal for scenarios where you need high performance and can benefit from tighter integration with C/C++ libraries:

- **Performance-Critical Code**: Computationally intensive tasks such as numerical operations, loops, and data manipulation.
- **Interfacing with C/C++**: When you need to call or extend C/C++ libraries from Python.
- **Reusable Libraries**: For creating efficient Python extensions.

### Limitations:
- **Requires Build Tools**: You need a C compiler (e.g., GCC) installed on your system.
- **Limited Gains Without Type Annotations**: Performance improvements are modest without adding C-style type hints.
- **Compatibility Issues**: Dynamic Python features may not work as expected.

---

## Tips for Using Cython Effectively
- **Add Type Annotations**: Use `cdef`, `cpdef`, and `cimport` for declaring C-style types.
- **Profile Your Code**: Use a profiler to identify bottlenecks before converting code to Cython.
- **Write Hybrid Code**: Start with Python code and gradually add Cython-specific optimizations.
- **Use `pyx` Files**: Rename your Python file to `.pyx` if you intend to use advanced Cython features.

---

## Example of Advanced Cython Optimization
A fully optimized `lcs.pyx` with type annotations:
```python
cdef int lcs(int[:] a, int[:] b):
    cdef int i, j
    cdef int dp[len(a) + 1][len(b) + 1]

    for i in range(1, len(a) + 1):
        for j in range(1, len(b) + 1):
            if a[i - 1] == b[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + 1
            else:
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

    return dp[len(a)][len(b)]
```

Compile it using `setup.py` and test it for significant performance improvements.

---

## Resources
- [Cython Documentation](https://cython.readthedocs.io/en/latest/)
- [Setuptools Documentation](https://setuptools.pypa.io/en/latest/)
- [Cython vs MyPyC](https://cython.readthedocs.io/en/latest/src/tutorial/mypy.html)

---

Use this directory to store and manage your Cython-compiled modules efficiently!

