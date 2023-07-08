#include<stdio.h>
#include<stdlib.h>
void main()
{
	char operator;
	double num1,num2;
	system("clear");
	printf("\n enter an operator (+,-,*,/):");
	scanf("%c",&operator);
	printf("\n enter two operator: ");
	scanf("%lf %lf",&num1,&num2);
	switch (operator)
	{
	case '+':
	printf("\n %.11lf +%.11lf=%.11lf",num1,num2,num1+num2);
	break;
	case '-':
	printf("\n %.11lf -%.11lf=%.11lf",num1,num2,num1-num2);
	break;
	 case '*':
	printf("\n %.11lf *%.11lf=%.11lf",num1,num2,num1*num2);
	break;
	 case '/':
	printf("\n %.11lf /%.11lf=%.11lf",num1,num2,num1/num2);
	break;
	default :
	printf("\n Error..! given input values are not valid");
	}



}
