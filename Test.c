#include <stdio.h>
#include <string.h>

#include "CString.h"

void test(int expected, int received, const char* testName) {
   if( expected == received) {
      printf("\n%s PASSED", testName);
   }
   else{
      printf("\n%s FAILED expected: %d received: %d", testName, expected, received);
   }
}

int main(int argc, char* argv[]) {
   CString *cstring_1 = cstring_new("");
   CString *cstring_2 = cstring_new("HelloWorld");

   test(0, cstring_length(cstring_1), "Length of string test 1");
   test(10, cstring_length(cstring_2), "Length of string test 2");

   test(-1, cstring_get_char_at(cstring_1, 0), "Getting char at index test 1");
   test(-1, cstring_get_char_at(cstring_2, -1), "Getting char at index test 2");
   test(-1, cstring_get_char_at(cstring_2, 10), "Getting char at index test 3");

   test((int) 'd', (int) cstring_get_char_at(cstring_2, 9), "Getting char at index test 4" );

   test(-1, cstring_set_char_at(cstring_1, 0, 'X'), "Setting char at index test 1");
   test(-1, cstring_set_char_at(cstring_2, 10, 'X'), "Setting char at index test 2");
   test(0, cstring_set_char_at(cstring_2, 0, 'X'), "Setting char at index test 3");

   test((int) 'X', (int) cstring_get_char_at(cstring_2, 0), "Getting char at index test 5\n" ); 

   cstring_deallocate(cstring_1);
   cstring_deallocate(cstring_2);
   
   return 0;
}
