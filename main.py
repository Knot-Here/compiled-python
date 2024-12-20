from src.benchmarks.lcs import lcs as lcs_benchmark
from src.compilers.cython.lcs import lcs



print(lcs_benchmark([0,4,7,8,5], [5,3,6,7,8]))
print(lcs([0,4,7,8,5], [5,3,6,7,8]))
from src.compilers.mypyc.lcs import lcs

# Test the function
result = lcs([0,4,7,8,5], [5,3,6,7,8])
print(result)
