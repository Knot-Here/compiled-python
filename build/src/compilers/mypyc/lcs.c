#include <Python.h>

PyMODINIT_FUNC
PyInit_lcs(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("src.compilers.mypyc.lcs__mypyc"))) return NULL;
    Py_DECREF(tmp);
    void *init_func = PyCapsule_Import("src.compilers.mypyc.lcs__mypyc.init_src___compilers___mypyc___lcs", 0);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_lcs(); }
