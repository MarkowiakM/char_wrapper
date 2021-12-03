typedef struct CString {

    char *string;
    int length;

} CString;

CString* cstring_new(const char* str);

int cstring_length();
char cstring_get_char_at(CString cstring, int index);
int cstring_set_char_at(CString cstring, int index, char ch);
const char* cstring_get_string(CString* cstring);