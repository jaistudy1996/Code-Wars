/*
When provided with a letter, return its position in the alphabet.

Input :: "a"

Ouput :: "Position of alphabet: 1"
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// can use asprintf, it becomes one line if we use that. 

char* position(char alphabet)
{
	const char values[] = "abcdefghijklmnopqrstuvwxyz";
	char* pos = strchr(values, alphabet);
	char retString[50] = {0};
	sprintf(retString, "Position of alphabet: %ld", ((pos - values)+1));
	char *dest = (char*)malloc(sizeof(char) * (strlen(retString) + 1));
	strcpy(dest, retString);
	return dest;
}


int main(void){
	printf("%s\n", position('z'));
	return 0;
}

/*
Tests:

#include <criterion/criterion.h>

char* position(char);

Test(basicTests, should_pass_all_the_tests_provided) {    
    cr_assert_str_eq(position('a'), "Position of alphabet: 1");
    cr_assert_str_eq(position('z'), "Position of alphabet: 26");
    cr_assert_str_eq(position('e'), "Position of alphabet: 5");
}
*/
