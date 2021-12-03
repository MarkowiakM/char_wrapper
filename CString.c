#include "CString.h"


CString* cstring_new(const char* str) {
    CString* cstring;
    cstring = malloc(sizeof(CString));

}

int cstring_length() {
    return 1;
}

char cstring_get_char_at(CString cstring, int index) {
    return 'a';
}

int cstring_set_char_at(CString cstring, int index, char ch) {
    return 0;
}

const char* cstring_get_string(CString* cstring) {
    return 'a';
}