/* Author: Jayant Arora */

/*
With a friend we used to play the following game on a chessboard (8, rows, 8 columns). On the first row at the bottom we put numbers:

1/2, 2/3, 3/4, 4/5, 5/6, 6/7, 7/8, 8/9

On row 2 (2nd row from the bottom) we have:

1/3, 2/4, 3/5, 4/6, 5/7, 6/8, 7/9, 8/10

On row 3:

1/4, 2/5, 3/6, 4/7, 5/8, 6/9, 7/10, 8/11

until last row:

1/9, 2/10, 3/11, 4/12, 5/13, 6/14, 7/15, 8/16

When all numbers are on the chessboard each in turn we toss a coin. The one who get "head" wins and the other gives him, in dollars, the sum of the numbers on the chessboard. We play for fun, the dollars come from a monopoly game!

How much can I (or my friend) win or loses for each game if the chessboard has n rows and n columns? Add all of the fractional values on an n by n sized board and give the answer as a simplified fraction.

*/


/* Code that did not work: 

#include <stdio.h>
#include <math.h>

struct FRAC{
    int numerator;
    int denominator;
  };

struct FRAC make_frac(int num, int den){
  struct FRAC f;
  f.numerator = num;
  f.denominator = den;
  printf("MakeFrac. num: %d,  den: %d\n", num, den);
  return f;
}

struct FRAC add_frac(struct FRAC total, struct FRAC add){
  total.numerator = (total.numerator*add.denominator) + (add.numerator*total.denominator);
  total.denominator = total.denominator * add.denominator;
  printf("Num: %d, Den: %d\n", total.numerator, total.denominator);
  return total;
}

char* game (unsigned long long n) {
    // your code
    int total = 0;
    int i;
    int start = 1;
    struct FRAC total_struct = make_frac(0, 0);
    for(i = 1; i<=n; i++){
    	for(int j = (i+1); j<(i+1+n); j++, start++){
    		// printf("start/j: %d/%d\n", start, j);
    		// total += (start/j);
    		struct FRAC fraction = make_frac(start, j);
        	total_struct = add_frac(total_struct, fraction);
        	if(total_struct.numerator == 0 && total_struct.denominator == 0){
    			total_struct = fraction;
    		}
    		if(total_struct.numerator % total_struct.denominator == 0){
    			printf("%s, %d\n", "POINT", (total_struct.numerator/total_struct.denominator));
    		}
    	}
    	start = 1;
    }

    // printf("Total: %f, floor: %f, bool: %d\n", total, floor(total), (total == floor(total)));
    // printf("Total: %d\n", total);
    printf("Numerator: %d\n", total_struct.numerator);
    printf("denominator: %d\n", total_struct.denominator);
    return "Test";
}

int main(){
	game(4);
	return 0;
}

*/

// Actual solution,

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* game (unsigned long long n) {
    char text[80] = {0};
    unsigned long long m = n * n;
    if (n % 2 == 0)
        sprintf(text, "[%llu]", m / 2);
    else
        sprintf(text, "[%llu, 2]", m);
    char *dest = (char*)malloc(sizeof(char) * (strlen(text) + 1));
    strcpy(dest, text);
    return dest;
}
