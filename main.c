/*
* Driver and test file
*/

#include <stdio.h>
#include "functions.h"

void test_index_max(float[], int);

int main(int argc, char * argv[])
{
  // testing index of max
  float test2[5] = {0, 5.0, 45.6, 10.5, 5.5};
  test_index_max(test2, 5);

  float test3[4] = {50.0, 10.0, 5.5, 15.0};
  test_index_max(test3, 4);

  return 0;
}

void test_index_max(float* testarray, int arraysize)
{
  int indexOfMax = find_index_of_max(testarray, arraysize);
  print_float_array(testarray, arraysize);
  printf("\n> Index: %d\n\n", indexOfMax);
}
