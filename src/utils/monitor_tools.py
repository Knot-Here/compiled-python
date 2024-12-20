
import time

def track_time(func):
    """Decorator to track the execution time of a function using high-resolution timer."""
    def wrapper(*args, **kwargs):
        start_time = time.perf_counter()
        result = func(*args, **kwargs)
        end_time = time.perf_counter()
        print(f"Function {func.__name__} executed in {end_time - start_time:.6f} seconds")
        return result
    return wrapper
