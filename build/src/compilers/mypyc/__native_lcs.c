#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "__native_lcs.h"
#include "__native_internal_lcs.h"
static PyMethodDef module_methods[] = {
    {"lcs", (PyCFunction)CPyPy_lcs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "src.compilers.mypyc.lcs",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_methods
};

PyObject *CPyInit_src___compilers___mypyc___lcs(void)
{
    PyObject* modname = NULL;
    if (CPyModule_src___compilers___mypyc___lcs_internal) {
        Py_INCREF(CPyModule_src___compilers___mypyc___lcs_internal);
        return CPyModule_src___compilers___mypyc___lcs_internal;
    }
    CPyModule_src___compilers___mypyc___lcs_internal = PyModule_Create(&module);
    if (unlikely(CPyModule_src___compilers___mypyc___lcs_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_src___compilers___mypyc___lcs_internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_src___compilers___mypyc___lcs_internal);
    if (unlikely(CPyStatic_globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef___top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_src___compilers___mypyc___lcs_internal;
    fail:
    Py_CLEAR(CPyModule_src___compilers___mypyc___lcs_internal);
    Py_CLEAR(modname);
    return NULL;
}

CPyTagged CPyDef_lcs(PyObject *cpy_r_a, PyObject *cpy_r_b) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r__;
    int64_t cpy_r_r7;
    char cpy_r_r8;
    int64_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_dp;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r33;
    char cpy_r_r34;
    int64_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyTagged cpy_r_j;
    int64_t cpy_r_r46;
    char cpy_r_r47;
    int64_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    int64_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyTagged cpy_r_r69;
    CPyTagged cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyTagged cpy_r_r82;
    PyObject *cpy_r_r83;
    CPyTagged cpy_r_r84;
    int64_t cpy_r_r85;
    char cpy_r_r86;
    int64_t cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    CPyTagged cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    CPyTagged cpy_r_r98;
    CPyTagged cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    CPyTagged cpy_r_r103;
    CPyTagged cpy_r_r104;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 5, CPyStatic_globals);
        goto CPyL58;
    }
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_a)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyTagged_Add(cpy_r_r3, 2);
    cpy_r_r5 = 0;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyTagged_StealAsObject(cpy_r_r5);
    cpy_r__ = cpy_r_r6;
    CPy_DECREF(cpy_r__);
CPyL2: ;
    cpy_r_r7 = cpy_r_r5 & 1;
    cpy_r_r8 = cpy_r_r7 == 0;
    cpy_r_r9 = cpy_r_r4 & 1;
    cpy_r_r10 = cpy_r_r9 == 0;
    cpy_r_r11 = cpy_r_r8 & cpy_r_r10;
    if (!cpy_r_r11) goto CPyL4;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r4;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL5;
CPyL4: ;
    cpy_r_r14 = CPyTagged_IsLt_(cpy_r_r5, cpy_r_r4);
    cpy_r_r13 = cpy_r_r14;
CPyL5: ;
    if (!cpy_r_r13) goto CPyL59;
    cpy_r_r15 = PyList_New(1);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 5, CPyStatic_globals);
        goto CPyL60;
    }
    cpy_r_r16 = CPyStatics[6]; /* 0 */
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r15)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    CPy_INCREF(cpy_r_r16);
    *(PyObject * *)cpy_r_r18 = cpy_r_r16;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_b)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = CPyTagged_Add(cpy_r_r21, 2);
    cpy_r_r23 = CPySequence_Multiply(cpy_r_r15, cpy_r_r22);
    CPy_DECREF(cpy_r_r15);
    CPyTagged_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 5, CPyStatic_globals);
        goto CPyL60;
    }
    cpy_r_r24 = PyList_Append(cpy_r_r0, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 5, CPyStatic_globals);
        goto CPyL60;
    }
    cpy_r_r26 = CPyTagged_Add(cpy_r_r5, 2);
    CPyTagged_DECREF(cpy_r_r5);
    CPyTagged_INCREF(cpy_r_r26);
    cpy_r_r5 = cpy_r_r26;
    cpy_r_r27 = CPyTagged_StealAsObject(cpy_r_r26);
    cpy_r__ = cpy_r_r27;
    CPy_DECREF(cpy_r__);
    goto CPyL2;
CPyL10: ;
    cpy_r_dp = cpy_r_r0;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_a)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = CPyTagged_Add(cpy_r_r30, 2);
    cpy_r_r32 = 2;
    CPyTagged_INCREF(cpy_r_r32);
    cpy_r_i = cpy_r_r32;
CPyL11: ;
    cpy_r_r33 = cpy_r_r32 & 1;
    cpy_r_r34 = cpy_r_r33 == 0;
    cpy_r_r35 = cpy_r_r31 & 1;
    cpy_r_r36 = cpy_r_r35 == 0;
    cpy_r_r37 = cpy_r_r34 & cpy_r_r36;
    if (!cpy_r_r37) goto CPyL13;
    cpy_r_r38 = (Py_ssize_t)cpy_r_r32 < (Py_ssize_t)cpy_r_r31;
    cpy_r_r39 = cpy_r_r38;
    goto CPyL14;
CPyL13: ;
    cpy_r_r40 = CPyTagged_IsLt_(cpy_r_r32, cpy_r_r31);
    cpy_r_r39 = cpy_r_r40;
CPyL14: ;
    if (!cpy_r_r39) goto CPyL61;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_b)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = CPyTagged_Add(cpy_r_r43, 2);
    cpy_r_r45 = 2;
    CPyTagged_INCREF(cpy_r_r45);
    cpy_r_j = cpy_r_r45;
CPyL16: ;
    cpy_r_r46 = cpy_r_r45 & 1;
    cpy_r_r47 = cpy_r_r46 == 0;
    cpy_r_r48 = cpy_r_r44 & 1;
    cpy_r_r49 = cpy_r_r48 == 0;
    cpy_r_r50 = cpy_r_r47 & cpy_r_r49;
    if (!cpy_r_r50) goto CPyL18;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r45 < (Py_ssize_t)cpy_r_r44;
    cpy_r_r52 = cpy_r_r51;
    goto CPyL19;
CPyL18: ;
    cpy_r_r53 = CPyTagged_IsLt_(cpy_r_r45, cpy_r_r44);
    cpy_r_r52 = cpy_r_r53;
CPyL19: ;
    if (!cpy_r_r52) goto CPyL62;
    cpy_r_r54 = CPyTagged_Subtract(cpy_r_i, 2);
    cpy_r_r55 = CPyList_GetItem(cpy_r_a, cpy_r_r54);
    CPyTagged_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 8, CPyStatic_globals);
        goto CPyL63;
    }
    if (likely(PyLong_Check(cpy_r_r55)))
        cpy_r_r56 = CPyTagged_FromObject(cpy_r_r55);
    else {
        CPy_TypeError("int", cpy_r_r55); cpy_r_r56 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == CPY_INT_TAG)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 8, CPyStatic_globals);
        goto CPyL63;
    }
    cpy_r_r57 = CPyTagged_Subtract(cpy_r_j, 2);
    cpy_r_r58 = CPyList_GetItemBorrow(cpy_r_b, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 8, CPyStatic_globals);
        goto CPyL64;
    }
    if (likely(PyLong_Check(cpy_r_r58)))
        cpy_r_r59 = CPyTagged_FromObject(cpy_r_r58);
    else {
        CPy_TypeError("int", cpy_r_r58); cpy_r_r59 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r59 == CPY_INT_TAG)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 8, CPyStatic_globals);
        goto CPyL64;
    }
    cpy_r_r60 = cpy_r_r56 & 1;
    cpy_r_r61 = cpy_r_r60 != 0;
    CPyTagged_DECREF(cpy_r_r57);
    if (!cpy_r_r61) goto CPyL26;
    cpy_r_r62 = CPyTagged_IsEq_(cpy_r_r56, cpy_r_r59);
    CPyTagged_DECREF(cpy_r_r56);
    CPyTagged_DECREF(cpy_r_r59);
    if (cpy_r_r62) {
        goto CPyL27;
    } else
        goto CPyL34;
CPyL26: ;
    cpy_r_r63 = cpy_r_r56 == cpy_r_r59;
    CPyTagged_DECREF(cpy_r_r56);
    CPyTagged_DECREF(cpy_r_r59);
    if (!cpy_r_r63) goto CPyL34;
CPyL27: ;
    cpy_r_r64 = CPyTagged_Subtract(cpy_r_i, 2);
    cpy_r_r65 = CPyList_GetItem(cpy_r_dp, cpy_r_r64);
    CPyTagged_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 9, CPyStatic_globals);
        goto CPyL63;
    }
    if (likely(PyList_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("src/compilers/mypyc/lcs.py", "lcs", 9, CPyStatic_globals, "list", cpy_r_r65);
        goto CPyL63;
    }
    cpy_r_r67 = CPyTagged_Subtract(cpy_r_j, 2);
    cpy_r_r68 = CPyList_GetItemBorrow(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 9, CPyStatic_globals);
        goto CPyL65;
    }
    if (likely(PyLong_Check(cpy_r_r68)))
        cpy_r_r69 = CPyTagged_FromObject(cpy_r_r68);
    else {
        CPy_TypeError("int", cpy_r_r68); cpy_r_r69 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r69 == CPY_INT_TAG)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 9, CPyStatic_globals);
        goto CPyL65;
    }
    cpy_r_r70 = CPyTagged_Add(cpy_r_r69, 2);
    CPyTagged_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r66);
    CPyTagged_DECREF(cpy_r_r67);
    cpy_r_r71 = CPyList_GetItem(cpy_r_dp, cpy_r_i);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 9, CPyStatic_globals);
        goto CPyL66;
    }
    if (likely(PyList_Check(cpy_r_r71)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("src/compilers/mypyc/lcs.py", "lcs", 9, CPyStatic_globals, "list", cpy_r_r71);
        goto CPyL66;
    }
    cpy_r_r73 = CPyTagged_StealAsObject(cpy_r_r70);
    cpy_r_r74 = CPyList_SetItem(cpy_r_r72, cpy_r_j, cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    CPyTagged_DECREF(cpy_r_j);
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 9, CPyStatic_globals);
        goto CPyL67;
    } else
        goto CPyL51;
CPyL34: ;
    cpy_r_r75 = CPyTagged_Subtract(cpy_r_i, 2);
    cpy_r_r76 = CPyList_GetItemBorrow(cpy_r_dp, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 11, CPyStatic_globals);
        goto CPyL68;
    }
    if (likely(PyList_Check(cpy_r_r76)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("src/compilers/mypyc/lcs.py", "lcs", 11, CPyStatic_globals, "list", cpy_r_r76);
        goto CPyL68;
    }
    cpy_r_r78 = CPyList_GetItem(cpy_r_r77, cpy_r_j);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 11, CPyStatic_globals);
        goto CPyL68;
    }
    if (likely(PyLong_Check(cpy_r_r78)))
        cpy_r_r79 = CPyTagged_FromObject(cpy_r_r78);
    else {
        CPy_TypeError("int", cpy_r_r78); cpy_r_r79 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == CPY_INT_TAG)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 11, CPyStatic_globals);
        goto CPyL68;
    }
    CPyTagged_DECREF(cpy_r_r75);
    cpy_r_r80 = CPyList_GetItem(cpy_r_dp, cpy_r_i);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 11, CPyStatic_globals);
        goto CPyL69;
    }
    if (likely(PyList_Check(cpy_r_r80)))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("src/compilers/mypyc/lcs.py", "lcs", 11, CPyStatic_globals, "list", cpy_r_r80);
        goto CPyL69;
    }
    cpy_r_r82 = CPyTagged_Subtract(cpy_r_j, 2);
    cpy_r_r83 = CPyList_GetItem(cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r81);
    CPyTagged_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 11, CPyStatic_globals);
        goto CPyL69;
    }
    if (likely(PyLong_Check(cpy_r_r83)))
        cpy_r_r84 = CPyTagged_FromObject(cpy_r_r83);
    else {
        CPy_TypeError("int", cpy_r_r83); cpy_r_r84 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == CPY_INT_TAG)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 11, CPyStatic_globals);
        goto CPyL69;
    }
    cpy_r_r85 = cpy_r_r84 & 1;
    cpy_r_r86 = cpy_r_r85 == 0;
    cpy_r_r87 = cpy_r_r79 & 1;
    cpy_r_r88 = cpy_r_r87 == 0;
    cpy_r_r89 = cpy_r_r86 & cpy_r_r88;
    if (!cpy_r_r89) goto CPyL44;
    cpy_r_r90 = (Py_ssize_t)cpy_r_r84 > (Py_ssize_t)cpy_r_r79;
    cpy_r_r91 = cpy_r_r90;
    goto CPyL45;
CPyL44: ;
    cpy_r_r92 = CPyTagged_IsLt_(cpy_r_r79, cpy_r_r84);
    cpy_r_r91 = cpy_r_r92;
CPyL45: ;
    if (cpy_r_r91) {
        goto CPyL70;
    } else
        goto CPyL71;
CPyL46: ;
    cpy_r_r93 = cpy_r_r84;
    goto CPyL48;
CPyL47: ;
    cpy_r_r93 = cpy_r_r79;
CPyL48: ;
    cpy_r_r94 = CPyList_GetItem(cpy_r_dp, cpy_r_i);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 11, CPyStatic_globals);
        goto CPyL72;
    }
    if (likely(PyList_Check(cpy_r_r94)))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("src/compilers/mypyc/lcs.py", "lcs", 11, CPyStatic_globals, "list", cpy_r_r94);
        goto CPyL72;
    }
    cpy_r_r96 = CPyTagged_StealAsObject(cpy_r_r93);
    cpy_r_r97 = CPyList_SetItem(cpy_r_r95, cpy_r_j, cpy_r_r96);
    CPy_DECREF(cpy_r_r95);
    CPyTagged_DECREF(cpy_r_j);
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 11, CPyStatic_globals);
        goto CPyL67;
    }
CPyL51: ;
    cpy_r_r98 = CPyTagged_Add(cpy_r_r45, 2);
    CPyTagged_DECREF(cpy_r_r45);
    CPyTagged_INCREF(cpy_r_r98);
    cpy_r_r45 = cpy_r_r98;
    cpy_r_j = cpy_r_r98;
    goto CPyL16;
CPyL52: ;
    cpy_r_r99 = CPyTagged_Add(cpy_r_r32, 2);
    CPyTagged_DECREF(cpy_r_r32);
    CPyTagged_INCREF(cpy_r_r99);
    cpy_r_r32 = cpy_r_r99;
    cpy_r_i = cpy_r_r99;
    goto CPyL11;
CPyL53: ;
    cpy_r_r100 = CPyList_GetItemShortBorrow(cpy_r_dp, -2);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 12, CPyStatic_globals);
        goto CPyL73;
    }
    if (likely(PyList_Check(cpy_r_r100)))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("src/compilers/mypyc/lcs.py", "lcs", 12, CPyStatic_globals, "list", cpy_r_r100);
        goto CPyL73;
    }
    cpy_r_r102 = CPyList_GetItemShort(cpy_r_r101, -2);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 12, CPyStatic_globals);
        goto CPyL73;
    }
    if (likely(PyLong_Check(cpy_r_r102)))
        cpy_r_r103 = CPyTagged_FromObject(cpy_r_r102);
    else {
        CPy_TypeError("int", cpy_r_r102); cpy_r_r103 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == CPY_INT_TAG)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 12, CPyStatic_globals);
        goto CPyL73;
    }
    CPy_DECREF(cpy_r_dp);
    return cpy_r_r103;
CPyL58: ;
    cpy_r_r104 = CPY_INT_TAG;
    return cpy_r_r104;
CPyL59: ;
    CPyTagged_DECREF(cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r5);
    goto CPyL10;
CPyL60: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r5);
    goto CPyL58;
CPyL61: ;
    CPyTagged_DECREF(cpy_r_r31);
    CPyTagged_DECREF(cpy_r_r32);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL53;
CPyL62: ;
    CPyTagged_DECREF(cpy_r_i);
    CPyTagged_DECREF(cpy_r_r44);
    CPyTagged_DECREF(cpy_r_r45);
    CPyTagged_DECREF(cpy_r_j);
    goto CPyL52;
CPyL63: ;
    CPy_DecRef(cpy_r_dp);
    CPyTagged_DecRef(cpy_r_r31);
    CPyTagged_DecRef(cpy_r_r32);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_r44);
    CPyTagged_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_j);
    goto CPyL58;
CPyL64: ;
    CPy_DecRef(cpy_r_dp);
    CPyTagged_DecRef(cpy_r_r31);
    CPyTagged_DecRef(cpy_r_r32);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_r44);
    CPyTagged_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r56);
    CPyTagged_DecRef(cpy_r_r57);
    goto CPyL58;
CPyL65: ;
    CPy_DecRef(cpy_r_dp);
    CPyTagged_DecRef(cpy_r_r31);
    CPyTagged_DecRef(cpy_r_r32);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_r44);
    CPyTagged_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_r66);
    CPyTagged_DecRef(cpy_r_r67);
    goto CPyL58;
CPyL66: ;
    CPy_DecRef(cpy_r_dp);
    CPyTagged_DecRef(cpy_r_r31);
    CPyTagged_DecRef(cpy_r_r32);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_r44);
    CPyTagged_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r70);
    goto CPyL58;
CPyL67: ;
    CPy_DecRef(cpy_r_dp);
    CPyTagged_DecRef(cpy_r_r31);
    CPyTagged_DecRef(cpy_r_r32);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_r44);
    CPyTagged_DecRef(cpy_r_r45);
    goto CPyL58;
CPyL68: ;
    CPy_DecRef(cpy_r_dp);
    CPyTagged_DecRef(cpy_r_r31);
    CPyTagged_DecRef(cpy_r_r32);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_r44);
    CPyTagged_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r75);
    goto CPyL58;
CPyL69: ;
    CPy_DecRef(cpy_r_dp);
    CPyTagged_DecRef(cpy_r_r31);
    CPyTagged_DecRef(cpy_r_r32);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_r44);
    CPyTagged_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r79);
    goto CPyL58;
CPyL70: ;
    CPyTagged_DECREF(cpy_r_r79);
    goto CPyL46;
CPyL71: ;
    CPyTagged_DECREF(cpy_r_r84);
    goto CPyL47;
CPyL72: ;
    CPy_DecRef(cpy_r_dp);
    CPyTagged_DecRef(cpy_r_r31);
    CPyTagged_DecRef(cpy_r_r32);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_r44);
    CPyTagged_DecRef(cpy_r_r45);
    CPyTagged_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r93);
    goto CPyL58;
CPyL73: ;
    CPy_DecRef(cpy_r_dp);
    goto CPyL58;
}

PyObject *CPyPy_lcs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"a", "b", 0};
    static CPyArg_Parser parser = {"OO:lcs", kwlist, 0};
    PyObject *obj_a;
    PyObject *obj_b;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_a, &obj_b)) {
        return NULL;
    }
    PyObject *arg_a;
    if (likely(PyList_Check(obj_a)))
        arg_a = obj_a;
    else {
        CPy_TypeError("list", obj_a); 
        goto fail;
    }
    PyObject *arg_b;
    if (likely(PyList_Check(obj_b)))
        arg_b = obj_b;
    else {
        CPy_TypeError("list", obj_b); 
        goto fail;
    }
    CPyTagged retval = CPyDef_lcs(arg_a, arg_b);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("src/compilers/mypyc/lcs.py", "lcs", 4, CPyStatic_globals);
    return NULL;
}

char CPyDef___top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "<module>", -1, CPyStatic_globals);
        goto CPyL5;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[7]; /* ('track_time',) */
    cpy_r_r6 = CPyStatics[5]; /* 'src.utils.monitor_tools' */
    cpy_r_r7 = CPyStatic_globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("src/compilers/mypyc/lcs.py", "<module>", 1, CPyStatic_globals);
        goto CPyL5;
    }
    CPyModule_src___utils___monitor_tools = cpy_r_r8;
    CPy_INCREF(CPyModule_src___utils___monitor_tools);
    CPy_DECREF(cpy_r_r8);
    return 1;
CPyL5: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_src___compilers___mypyc___lcs = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_src___utils___monitor_tools = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[8];
const char * const CPyLit_Str[] = {
    "\003\bbuiltins\ntrack_time\027src.utils.monitor_tools",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\0010",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {1, 1, 4};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_src___compilers___mypyc___lcs_internal = NULL;
CPyModule *CPyModule_src___compilers___mypyc___lcs;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_src___utils___monitor_tools;
CPyTagged CPyDef_lcs(PyObject *cpy_r_a, PyObject *cpy_r_b);
PyObject *CPyPy_lcs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___top_level__(void);

static struct export_table_src___compilers___mypyc___lcs exports = {
    &CPyDef_lcs,
    &CPyDef___top_level__,
};

PyMODINIT_FUNC PyInit_lcs__mypyc(void)
{
    static PyModuleDef def = { PyModuleDef_HEAD_INIT, "src.compilers.mypyc.lcs__mypyc", NULL, -1, NULL, NULL };
    int res;
    PyObject *capsule;
    PyObject *tmp;
    static PyObject *module;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&def);
    if (!module) {
        goto fail;
    }
    
    capsule = PyCapsule_New(&exports, "src.compilers.mypyc.lcs__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_src___compilers___mypyc___lcs(void);
    capsule = PyCapsule_New((void *)CPyInit_src___compilers___mypyc___lcs, "src.compilers.mypyc.lcs__mypyc.init_src___compilers___mypyc___lcs", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_src___compilers___mypyc___lcs", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return module;
    fail:
    Py_XDECREF(module);
    return NULL;
}
