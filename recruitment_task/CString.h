#ifndef CSTRING_H
#define CSTRING_H

/* 
* CString struct contains:
* - a pointer to a char array
* - a length of a string (char array) 
*/
typedef struct CString {

    char *string;
    int length;

} CString;

/* returns newly created CString struct */
CString *cstring_new(const char *str);

/* deallocates memory taken by a given CString struct */
void cstring_deallocate(CString *cstring);

/* returns length of a string (char array) in CString struct */
int cstring_length(CString *cstring);

/* returns a char from array at a given index */
char cstring_get_char_at(CString *cstring, int index);

/* set a given char at a specified index */
int cstring_set_char_at(CString *cstring, int index, char ch);

/* returns a pointer to a string (char array) in a given CString struct */
const char *cstring_get_string(CString *cstring);

#endif
