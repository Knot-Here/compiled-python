from src.benchmarks.lcs import lcs
from src.compilers.cython.lcs import lcs

from src.utils.monitor_tools import track_time


print(lcs([0,4,7,8,5], [5,3,6,7,8]))
