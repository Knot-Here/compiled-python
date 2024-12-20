# Taichi Directory

## Overview
This directory contains Python modules optimized using **Taichi**, an open-source, high-performance programming language designed for parallel computing. Taichi simplifies GPU and CPU parallel programming while providing an easy-to-use Python interface. It is particularly well-suited for numerical simulations, graphics, and computational tasks.

## What is Taichi?
Taichi is a Python-based framework for writing highly efficient parallel code for modern CPUs and GPUs. It leverages its own data structures and syntax to optimize numerical computations and simulations.

### Key Features:
- **Parallel Computing**: Runs on GPUs and multi-core CPUs with minimal configuration.
- **Pythonic Interface**: Provides an intuitive Python API for easy adoption.
- **Portable**: Supports various backends, including CUDA, Vulkan, and OpenGL.
- **High-Performance**: Designed for computationally intensive tasks like simulations and graphics.

---

## How to Use Taichi
To use Taichi, follow these steps:

1. **Install Taichi**:
   ```bash
   pip install taichi
   ```

2. **Write Taichi Code**:
   Use the `@ti.kernel` decorator for parallel kernels and Taichi’s data structures for efficient computation.

   Example (`lcs.py`):
   ```python
   import taichi as ti

   ti.init(arch=ti.cpu)  # Choose CPU or GPU backend

   @ti.kernel
   def lcs(a: ti.template(), b: ti.template(), dp: ti.template()):
       for i, j in ti.ndrange(len(a) + 1, len(b) + 1):
           if i == 0 or j == 0:
               dp[i, j] = 0
           elif a[i - 1] == b[j - 1]:
               dp[i, j] = dp[i - 1, j - 1] + 1
           else:
               dp[i, j] = max(dp[i - 1, j], dp[i, j - 1])

   # Define inputs
   a = ti.field(dtype=ti.i32, shape=(4,))  # Example: [1, 2, 3, 4]
   b = ti.field(dtype=ti.i32, shape=(3,))  # Example: [2, 3, 4]
   dp = ti.field(dtype=ti.i32, shape=(5, 4))

   # Run the kernel
   lcs(a, b, dp)

   print(dp.to_numpy())
   ```

3. **Run the Script**:
   Execute the script like any Python file:
   ```bash
   python lcs.py
   ```

   The above example demonstrates parallel computation for the Longest Common Subsequence problem using Taichi.

---

## When to Use Taichi
Taichi excels in scenarios requiring high-performance parallel computation:

- **Numerical Simulations**: Fluid dynamics, particle systems, physics simulations.
- **Graphics**: Rendering, ray tracing, image processing.
- **Dense Computational Workloads**: Matrix operations, iterative solvers.
- **Real-Time Systems**: Tasks requiring GPU acceleration for interactive performance.

### Limitations:
- **Not General-Purpose**: Taichi is designed for numerical and computational tasks and may not benefit general-purpose Python code.
- **Learning Curve**: Requires familiarity with Taichi-specific syntax and concepts.
- **Limited Dynamic Features**: Python’s dynamic features (e.g., dictionaries, strings) are not supported within Taichi kernels.

---

## Tips for Using Taichi Effectively
- **Initialize the Backend**: Use `ti.init(arch=ti.gpu)` or `ti.init(arch=ti.cpu)` to select the desired backend.
- **Use Taichi Fields**: Replace NumPy arrays with `ti.field` for maximum performance.
- **Profile Your Code**: Use Taichi’s built-in profiler (`ti.profiler.print()` or `ti.profiler.clear()`).
- **Test Different Backends**: Taichi supports multiple backends (e.g., CUDA, Vulkan) for better portability.
- **Avoid Kernel Overhead**: Minimize data movement between Python and Taichi kernels.

---

## Example of an Optimized Taichi Implementation
Here’s an example of a fully optimized Taichi kernel:

```python
import taichi as ti

# Initialize GPU backend
ti.init(arch=ti.gpu)

@ti.kernel
def vector_add(a: ti.template(), b: ti.template(), c: ti.template()):
    for i in range(a.shape[0]):
        c[i] = a[i] + b[i]

# Define input fields
n = 1024

a = ti.field(dtype=ti.f32, shape=n)
b = ti.field(dtype=ti.f32, shape=n)
c = ti.field(dtype=ti.f32, shape=n)

# Fill inputs
for i in range(n):
    a[i] = i * 1.0
    b[i] = (n - i) * 1.0

# Run the kernel
vector_add(a, b, c)

# Output result
print(c.to_numpy())
```

---

## When Not to Use Taichi
- **I/O-Bound Tasks**: Tasks involving file I/O or network operations will not benefit from Taichi.
- **Small Workloads**: The overhead of kernel execution may outweigh the performance gains for small computations.

---

## Resources
- [Taichi Documentation](https://taichi.readthedocs.io/en/stable/)
- [Taichi GitHub Repository](https://github.com/taichi-dev/taichi)
- [Taichi Examples](https://github.com/taichi-dev/taichi/tree/master/examples)

---

Use this directory to store and manage your Taichi-optimized modules effectively!

