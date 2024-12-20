from setuptools import setup
from mypyc.build import mypycify

setup(name='mypyc_output',
      ext_modules=mypycify(['src/compilers/mypyc/lcs.py'], opt_level="3", debug_level="1"),
)
