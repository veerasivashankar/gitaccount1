#include<stdio.h>
#include<stdlib.h>
void main()
{
	const int maxInput=10;
	double number,avg,sum=0.0;
	int i;
	system("clear");
	for (i=1;i<=maxInput;++i)
	{
		printf("\n %d enter a number: ",i);
		scanf("%lf",&number);
		if(number<0.0)
		{
			goto jump;
		}
		sum+=number;
	}
	jump:
	avg=sum/(i-1);
	printf("\n sum=%2f\n",sum);
	printf("\n average=%2f\n\n",avg);
}
