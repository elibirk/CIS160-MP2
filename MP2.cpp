/* ========================================================
Leah Perry				CIS 160 Fall 2014
MP2					Submitted: 9/23/14
Variable Type Comparison Chart		Revised on: -------


Data Dictionary
Variable				Used to
--------				-------
float value1				store user response #1
float value2				store user response #2
int v1 and v2				change user response to int
long lv1 and lv2			change user response to long
double dv1 and dv2			change user response to double
int IntFunA				store equation #1 as int
int IntFunB				store equation #2 as int
int IntFunC				store equation #3 as int
int IntFunD				store equation #4 as int
long LongFunA				store equation #1 as long
long LongFunB				store equation #2 as long
long LongFunC				store equation #3 as long
long LongFunD				store equation #4 as long
double DoubleFunA			store equation #1 as double
double DoubleFunB			store equation #2 as double
double DoubleFunC			store equation #3 as double
double DoubleFunD			store equation #4 as double
float UserResponse			store user response to determine whether or not to loop

Functions Called			What They Do
----------------			------------
scanf					Scans User Input
printf					Prints Statements
modf					Calculates remainder after division

C:\User\Owner\My Documents\Visual Studio 2013\Projects\MP2
==========================================================*/

//precompiler directives
#include <stdio.h>
#include <math.h>

//function prototypes go here

//main function
int main (void) 
{
	/* ====================================================
	Leah Perry							  CIS 160 Fall 2014
	MP2									 Submitted: 9/23/14
	Variable Type Comparison Chart		Revised on: -------

	Data Dictionary
	Variable				Used to
	--------				-------
	float value1			store user response #1
	float value2			store user response #2
	int v1 and v2			change user response to int
	long lv1 and lv2		change user response to long
	double dv1 and dv2		change user response to double
	int IntFunA				store equation #1 as int
	int IntFunB				store equation #2 as int
	int IntFunC				store equation #3 as int
	int IntFunD				store equation #4 as int
	long LongFunA			store equation #1 as long
	long LongFunB			store equation #2 as long
	long LongFunC			store equation #3 as long
	long LongFunD			store equation #4 as long
	double DoubleFunA		store equation #1 as double
	double DoubleFunB		store equation #2 as double
	double DoubleFunC		store equation #3 as double
	double DoubleFunD		store equation #4 as double
	float UserResponse		store user response to determine whether or not to loop
	
	Functions Called		What They Do
	----------------		------------
	scanf					Scans User Input
	printf					Prints Statements
	modf					Calculates remainder after division
	=====================================================*/

	//function definitions

	float value1;
	float value2;

	int v1, v2;

	long lv1, lv2;

	double dv1, dv2;

	int IntFunA;
	int IntFunB;
	int IntFunC;
	int IntFunD;

	long LongFunA;
	long LongFunB;
	long LongFunC;
	long LongFunD;

	double DoubleFunA;
	double DoubleFunB;
	double DoubleFunC;
	double DoubleFunD;

	float UserResponse;
	UserResponse = 1; //presets UserRespose as 1, so the code runs once
	
	while (UserResponse == 1) {
	printf("Enter first number.\n"); // prompt for val1
	scanf_s("%f", &value1, 50); //scan val1
	printf("Enter second number. \n"); //prompt for val2
	scanf_s("%f", &value2, 50); //scan val2
	
	
	//int equations
	v1 = value1;
	v2 = value2;

	IntFunA = (v1 + v2) % 3;
	IntFunB = ((value1 + value2) * 2);
	IntFunC = ((value1 / value2) + 11);
	IntFunD = ((value1 * value2) - value1);

	//long equations
	lv1 = value1;
	lv2 = value2;

	LongFunA = (lv1 + lv2) % 3;
	LongFunB = ((value1 + value2) * 2);
	LongFunC = ((value1 / value2) + 11);
	LongFunD = ((value1 * value2) - value1);

	//double equations
	dv1 = value1;
	dv2 = value2;

	DoubleFunA = fmod((dv1 + dv2), 3); //because Visual Studio didn't want to accept % when dv1 and dv2 were doubles
	DoubleFunB = ((value1 + value2) * 2);
	DoubleFunC = ((value1 / value2) + 11);
	DoubleFunD = ((value1 * value2) - value1);


	printf("\nFunction \t  \t\tInt \tLong \tDouble\n--------\t\t\t---\t----\t------"); //print header
	printf("\n(value1 + value2) %c 3 \t\t%d\t%lu\t%f", '%', IntFunA, LongFunA, DoubleFunA); //print equation 1
	printf("\n(value1 + value2) * 2 \t\t%d\t%lu\t%f", IntFunB, LongFunB, DoubleFunB); //print equation 2
	printf("\n(value1 + value2) + 11 \t\t%d\t%lu\t%f", IntFunC, LongFunC, DoubleFunC); //print equation 3
	printf("\n(value1 * value2) - value1 \t%d\t%lu\t%f", IntFunD, LongFunD, DoubleFunD); //print equation 4
	
	printf("\n\nWould you like to try other values? Enter '1' for yes, any other number will be considerd a no.\n");
	scanf_s("%f", &UserResponse, 1); //scans UserResponse to see if they want to try new numbers
	}; //close while loop


	scanf_s("%f", &value2, 50); //keeps window open


return 0;
} //end main function
