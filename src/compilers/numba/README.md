# Numba Directory

## Overview
This directory contains Python modules optimized using **Numba**, a high-performance just-in-time (JIT) compiler for numerical Python code. Numba translates Python functions into optimized machine code at runtime, enabling significant speedups for numerical and array-based computations.

## What is Numba?
Numba is a tool that accelerates Python functions by compiling them to native machine code using LLVM. It provides an easy way to optimize Python code without requiring significant modifications.

### Key Features:
- **JIT Compilation**: Automatically compiles Python code to machine code at runtime.
- **Array-Oriented Optimization**: Highly optimized for NumPy arrays and numerical computations.
- **No C/C++ Knowledge Needed**: Works directly with Python syntax and NumPy operations.

---

## How to Use Numba
To use Numba, you only need to apply its decorators to your Python functions. Here’s how:

1. **Install Numba**:
   ```bash
   pip install numba
   ```

2. **Add the Numba Decorator**:
   Use the `@njit` or `@jit` decorator to compile a Python function.

   Example:
   ```python
   from numba import njit

   @njit
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

3. **Run the Function**:
   When you call the function for the first time, Numba will compile it to machine code. Subsequent calls will use the compiled version.

   Example:
   ```python
   print(lcs([1, 2, 3], [2, 3, 4]))
   ```

4. **Store and Use JIT-Compiled Functions**:
   There’s no need to manually compile or move files; Numba handles everything at runtime.

---

## When to Use Numba
Numba is best suited for numerical and computationally intensive tasks, especially when working with arrays or loops:

- **Numerical Operations**: Accelerating mathematical functions, simulations, or calculations.
- **Array Processing**: Speeding up NumPy operations.
- **Scientific Computing**: Optimizing algorithms for physics, finance, or other data-heavy fields.
- **Loops**: Accelerating `for` loops, especially those involving numerical calculations.

### Limitations:
- **Not for General Code**: Numba is designed for numerical computations and may not benefit general-purpose code.
- **Limited Python Support**: Some Python features, such as dynamic types, dictionaries, or string manipulations, are not supported.
- **First Call Overhead**: JIT compilation introduces a delay the first time a function is executed.

---

## Tips for Using Numba Effectively
- **Use `@njit` for Full Optimization**: The `@njit` (No Python mode) decorator avoids Python object handling for maximum speed.
  ```python
  from numba import njit

  @njit
  def fast_function(x):
      return x ** 2
  ```

- **Optimize Loops**: Use Numba for tight loops where Python is traditionally slow.

- **Pre-Test Code**: Ensure your code runs correctly without Numba before applying the decorators.

- **Use NumPy**: Numba works best with NumPy arrays.

---

## Example of Optimized Code
Here’s an example of a fully optimized `lcs` function using Numba:

```python
from numba import njit

@njit
def lcs(a: list[int], b: list[int]) -> int:
    dp = [[0] * (len(b) + 1) for _ in range(len(a) + 1)]
    for i in range(1, len(a) + 1):
        for j in range(1, len(b) + 1):
            if a[i - 1] == b[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + 1
            else:
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
    return dp[-1][-1]

# Example usage
print(lcs([1, 2, 3], [2, 3, 4]))
```

---

## When Not to Use Numba
- **I/O Operations**: File I/O, network requests, or database queries will not benefit from Numba.
- **Dynamic Features**: Avoid using dynamic Python features like `eval` or dictionaries within JIT-compiled functions.

---

## Resources
- [Numba Documentation](https://numba.readthedocs.io/en/stable/)
- [NumPy Documentation](https://numpy.org/)
- [Numba vs Cython](https://numba.pydata.org/numba-doc/latest/user/cython.html)

---

Use this directory to store and manage your Numba-optimized modules effectively!

