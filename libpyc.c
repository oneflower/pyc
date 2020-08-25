#define PY_SSIZE_T_CLEAN
#include <Python.h>


inline PyObject* PYC_Add(PyObject* l, PyObject* r) {
  // allow __add__ override

  // Include ints and bools
  if (PyLong_Check(l) && PyLong_Check(r)) {
    return PyNumber_Add(l, r);
  }

  // handle str, etc.

  // throw exception
  return NULL;
}

inline PyObject* PYC_Sub(PyObject* l, PyObject* r) {
  // allow __add__ override

  // Include ints and bools
  if (PyLong_Check(l) && PyLong_Check(r)) {
    return PyNumber_Subtract(l, r);
  }

  // handle str, etc

  // throw exception
  return NULL;
}

inline PyObject* PYC_Print(PyObject* o) {
  PyObject_Print(o, stdout, Py_PRINT_RAW);
  printf("\n");
  return Py_None;
}

