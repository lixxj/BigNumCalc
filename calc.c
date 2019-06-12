// Add(sub, mul) two numbers (numbers can be LARGE)
// Written by XJ

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BigNum.h"

int main (int argc, char *argv[])
{
	BigNum num1; // first input number
	BigNum num2; // second input number
	BigNum res; // sum/diff/product

	if (argc != 4) 
	{
		printf ("Usage1: %s Num1 Num2 add\n", argv[0]);
		printf ("Usage2: %s Num1 Num2 sub\n", argv[0]);
		printf ("Usage2: %s Num1 Num2 mul\n", argv[0]);	
		return 1;
	}

	// Initialise BigNum objects
	initBigNum (&num1, 20);
	initBigNum (&num2, 20);
	initBigNum (&res, 20);

	// Extract values from cmd line args
	if (!scanBigNum (argv[1], &num1)) 
	{
		printf ("First number invalid\n");
		return 1;
	}
	if (!scanBigNum (argv[2], &num2)) 
	{
		printf ("Second number invalid\n");
		return 1;
	}
	
	// Calculations
	if() // num1+num2, store result in res
	{
		addBigNums (num1, num2, &res);
		printf ("Sum of "); 
	} 
	if() // num1-num2, store result in res
	{
		subtractBigNums (num1, num2, &res);
		printf ("Difference of "); 
	}
	if () // num1*num2, store result in res
	{
		multiplyBigNums (num1, num2, &res);
		printf ("Product of "); 
	}
	
	// print process continue 
	showBigNum (num1);
	printf ("\nand ");  showBigNum (num2);
	printf ("\nis ");   showBigNum (sum);
	printf ("\n");

	/*// debugging :<
	printf("num1 = ");
	for(int i = 0; i < num1.nbytes + 1; i++) 
	{
		printf("%c", num1.bytes[i]);
	}
	printf(", nbytes = %d\n", num1.nbytes);
	printf("num2 = ");
	for(int i = 0; i < num2.nbytes + 1; i++) 
	{
		printf("%c", num2.bytes[i]);
	}
	printf(", nbytes = %d\n", num2.nbytes);
	printf("res = ");
	for(int i = 0; i < res.nbytes + 1; i++) 
	{
		printf("%c", res.bytes[i]);
	}
	printf(", nbytes = %d\n", res.nbytes);*/

	return EXIT_SUCCESS;
}
