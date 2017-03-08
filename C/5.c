/*
Take a number: 56789. Rotate left, you get 67895.

Keep the first digit in place and rotate left the other digits: 68957.

Keep the first two digits in place and rotate the other ones: 68579.

Keep the first three digits and rotate left the rest: 68597. Now it is over since keeping the first four it remains only one digit which rotated is itself.

You have the following sequence of numbers:

56789 -> 67895 -> 68957 -> 68579 -> 68597

and you must return the greatest: 68957.

Calling this function max_rot (or maxRot or ... depending on the language)

max_rot(56789) should return 68957

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotate(char* str){
	printf("%s\n", str);
	int len = strlen(str);
	printf("%d\n", len);
	char* temp[1] = {0};
	printf("%c\n", temp);
}

long long maxRot(n){

	char numbers[100] = {0}; // Random allocation of 100 bytes
	sprintf(numbers, "%d", n);
	printf("%c\n", numbers[3]);
	printf("%lu\n", strlen(numbers));
	printf("%s\n", numbers);
	printf("%d\n", numbers[3] == (int)NULL);

	// new definition
	int len = strlen(numbers);
	char* newStr = malloc(sizeof(char)*len);
	int i;
	int index, leave = 0;
	printf("%d\n", len);
	for(i=0; i<len; i++){
		if(i == leave){
			newStr[i] = numbers[len-1 - i];
			index++;
			printf("Check: %s, %s\n", newStr, numbers);
		}
	}
	free(newStr);
	return n;
}

int main(void){
	// printf("%llu\n", maxRot(1234));
	char num[] = {"1234"};
	rotate(num);
}
