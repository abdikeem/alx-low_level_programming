#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*Main - generate random number
*Return: 0;
*/

int main(void)
{

	int n;
	srand(time(0));
	
	n = rand();
	if(n > 0){
		printf("is positive");
	}
	else if(n = 0){
		printf("is zero");
	}
	else{
		prinf("is negative");
	}
	return (0);
}
