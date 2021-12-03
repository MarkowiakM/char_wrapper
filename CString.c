#include "CString.h"

CString *cstring_new(const char *str) {

    CString *cstring;
    cstring = malloc(sizeof(CString));
    cstring->length = strlen(str);
    cstring->string = malloc((cstring->length + 1) * sizeof(char)); /* an extra character at the end of string (\0) */
    strcpy(cstring->string, str);

    return cstring;
}

void cstring_deallocate(CString *cstring) {
    free(cstring->string);
    free(cstring);
}

int cstring_length(CString *cstring) {
    return cstring->length;
}

char cstring_get_char_at(CString *cstring, int index) {
    if(index < 0 || index >= cstring->length) return -1;
    return cstring->string[index];
}

int cstring_set_char_at(CString *cstring, int index, char ch) {
    if(index < 0 || index >= cstring->length) return -1;
  
    cstring->string[index] = ch;
    return 0;
}

const char *cstring_get_string(CString *cstring) {
    return cstring->string;
}