# MyPyC Directory

## Overview
This directory contains Python modules compiled with **MyPyC**, a tool that converts Python code into C extensions to improve execution speed. The `.so` files in this directory are the compiled versions of Python modules and can be imported and used just like regular Python modules.

## What is MyPyC?
MyPyC is a compiler that takes Python source code with static type annotations and compiles it into efficient C extension modules. This process can result in significant performance improvements for CPU-bound tasks.

### Key Features:
- **Performance Boost**: Speed up execution of Python code, particularly for loops and numerical computations.
- **Seamless Integration**: Compiled modules can be imported like regular Python modules.
- **Type Safety**: Requires static type annotations, ensuring code correctness.

---

## How to Compile Code with MyPyC
To compile a Python module into a `.so` file using MyPyC:

1. **Install MyPyC**:
   ```bash
   pip install mypy
   ```
   (MyPyC is included as part of MyPy.)

2. **Write Type-Annotated Python Code**:
   Ensure your Python code includes type annotations for all functions and variables.

   Example:
   ```python
   from typing import List

   def lcs(a: List[int], b: List[int]) -> int:
       dp = [[0] * (len(b) + 1) for _ in range(len(a) + 1)]
       for i in range(1, len(a) + 1):
           for j in range(1, len(b) + 1):
               if a[i - 1] == b[j - 1]:
                   dp[i][j] = dp[i - 1][j - 1] + 1
               else:
                   dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
       return dp[-1][-1]
   ```

3. **Compile the Module**:
   Use the `mypyc` command to compile the Python file:
   ```bash
   mypyc path/to/your_module.py
   ```
   This will generate a `.so` file in the same directory as the Python source file.

4. **Move the Compiled `.so` File to This Directory**:
   Organize compiled files in this directory (`mypyc`) to keep them separate from the source files.

---

## How to Use the Compiled Module
1. Import the compiled module in your Python code:
   ```python
   from src.mypyc.lcs import lcs

   result = lcs([1, 2, 3], [2, 3, 4])
   print(f"LCS result: {result}")
   ```

2. Run your Python script as usual:
   ```bash
   python3 your_script.py
   ```

The `.so` file will be used automatically instead of the original `.py` file.

---

## When to Use MyPyC
MyPyC is best used in scenarios where performance is critical:

- **CPU-Bound Tasks**: Loops, numerical computations, and data processing.
- **Production Code**: Modules that are stable and frequently used.
- **Reusable Libraries**: Code that is imported and reused across multiple projects.

### Limitations:
- **Not for I/O-Bound Tasks**: MyPyC does not speed up tasks like file reading, network requests, or database queries.
- **Requires Type Annotations**: All functions and variables must have explicit type hints.
- **Some Features Unsupported**: Dynamic features like monkey-patching and heavy introspection may not work as expected.

---

## Tips for Using MyPyC Effectively
- **Add Type Annotations**: Use `mypy` to check for missing or incorrect annotations before compiling.
  ```bash
  mypy your_code.py
  ```

- **Benchmark First**: Use a profiler to identify performance bottlenecks and compile only those modules.

- **Keep Source Files for Debugging**: Retain the `.py` files alongside the `.so` files for easier debugging and testing.

- **Test Before Deployment**: Ensure the compiled modules work as expected, especially if they interact with external libraries or systems.

---

## Resources
- [MyPyC Documentation](https://mypyc.readthedocs.io/en/latest/)
- [MyPy Documentation](https://mypy.readthedocs.io/en/stable/)

---

Use this directory to store and manage your compiled modules efficiently!

