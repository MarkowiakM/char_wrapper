#include <stdio.h>
#include "CString.h"

#define TRUE 1
#define FALSE 0

void test(int expected, int received, const char* testName) {
   if( expected == received) {
      printf("\n%s PASSED", testName);
   }
   else{
      printf("\n%s FAILED expected: %d received: %d", testName, expected, received);
   }
}



int main(int argc, char* argv[]) {






   return 0;
}
