// Author: Jayant Arora

/*
Your task is to make two functions, max and min (maximum and minimum in PHP) that take a(n) array/vector of integers list as input and outputs, respectively, the largest and lowest number in that array/vector.
*/

int min(int* array, int arrayLength)
{
  int minimum = array[0];
  int i;
  for(i=1; i<arrayLength; i++){
    if(array[i] < minimum){
      minimum = array[i];
    }
  }
  return minimum;
}

int max(int* array, int arrayLength)
{
  int maximum = array[0];
  int i;
  for(i=1; i<arrayLength; i++){
    if(array[i] > maximum){
      maximum = array[i];
    }
  }
  return maximum;
}

/*
sample test cases:

#include <criterion/criterion.h>

int min(int*,int);
int max(int*,int);

Test(exampleTests, should_pass_all_the_tests_provided) {
    int array1[7] = {-52, 56, 30, 29, -54, 0, -110};
    cr_assert_eq(min(array1, 7), -110);
    int array2[5] = {42, 54, 65, 87, 0};
    cr_assert_eq(min(array2, 5), 0);
    int array3[8] = {4,6,2,1,9,63,-134,566};
    cr_assert_eq(max(array3, 8), 566);
    int array4[1] = {5};
    cr_assert_eq(max(array4, 1), 5);
}

*/
