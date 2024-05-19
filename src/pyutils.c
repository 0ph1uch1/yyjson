#include "pyutils.h"

PyObject* create_py_unicode(const char* str, Py_ssize_t len, int is_ascii, int kind)
{
    // TODO
    assert(0);
    int max_char = 128;
    if(!is_ascii)
    {
        switch(kind)
        {
        case 1:
            max_char = 0xff;
            break;
        case 2:
            max_char = 0xffff;
            break;
        case 4:
            max_char = 0x10ffff;
            break;
        }
    }
    if(max_char <= 0xff)
    {
        PyASCIIObject *unicode = (PyASCIIObject *)PyUnicode_New(len, max_char);
        if(!unicode) goto alc_fail;
        memcpy(PyUnicode_DATA(unicode), str, len);
    }else
    {

    }
    alc_fail:

}