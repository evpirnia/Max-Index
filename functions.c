#include <stdio.h>

/*
* find_index_of_max:
* given a float array and the size of the array, the function will return the
* index of the largest number in the array
*/

int find_index_of_max(float fa[], int size)
{
  printf("Finding Index of Max....\n");
  int i = 0;
  int maxIndex = 0;
  for(i = 0; i < size; i++) {
      if(fa[i] >= fa[maxIndex]) {
          maxIndex = i;
      }
  }
  return maxIndex;
}

/*
* print_array:
* given an array and the size of the array, the function will print the items
* in the array
*/
void print_float_array(float* array, int size)
{
  printf("[");
  for(int i = 0; i < size-1; i++) {
    printf("%.2f, ", array[i]);
  }
  printf("%.2f]", array[size-1]);
}

void print_array(char array[], int size)
{
  for(int i = 0; i < size; i++) {
    printf("%c", array[i]);
  }
  printf("\n");
}
