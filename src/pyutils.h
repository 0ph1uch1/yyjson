#ifndef PYUTILS_H
#define PYUTILS_H

#define PY_SSIZE_T_CLEAN
#include <Python.h>

PyObject* create_py_unicode(const char* str, Py_ssize_t len, int is_ascii, int kind);

#endif //PYUTILS_H
