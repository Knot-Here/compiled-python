#ifndef MYPYC_NATIVE_INTERNAL_src___compilers___mypyc___lcs_H
#define MYPYC_NATIVE_INTERNAL_src___compilers___mypyc___lcs_H
#include <Python.h>
#include <CPy.h>
#include "__native_lcs.h"

int CPyGlobalsInit(void);

extern PyObject *CPyStatics[8];
extern const char * const CPyLit_Str[];
extern const char * const CPyLit_Bytes[];
extern const char * const CPyLit_Int[];
extern const double CPyLit_Float[];
extern const double CPyLit_Complex[];
extern const int CPyLit_Tuple[];
extern const int CPyLit_FrozenSet[];
extern CPyModule *CPyModule_src___compilers___mypyc___lcs_internal;
extern CPyModule *CPyModule_src___compilers___mypyc___lcs;
extern PyObject *CPyStatic_globals;
extern CPyModule *CPyModule_builtins;
extern CPyModule *CPyModule_src___utils___monitor_tools;
extern CPyTagged CPyDef_lcs(PyObject *cpy_r_a, PyObject *cpy_r_b);
extern PyObject *CPyPy_lcs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
extern char CPyDef___top_level__(void);
#endif
