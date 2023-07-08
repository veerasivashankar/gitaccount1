#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,leaf,sum,table,prime;
	system("clear");
	printf("\n 1.leaf year");
	printf("\n 2.sum of natural numbers");
	printf("\n 3.Table");
	printf("\n 4.prime numbers");
	printf("\n Enter your selection :");
	scanf("%d",&a);
	switch(a)
	{
	case 1:

        {
	int year;
	system("clear");
	printf("\n Enter any year :\n");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("\n Given year is leaf year \n");
	}
	else
	
		if(year%100==0)
		{
			printf("\n Given year is not leap year %d",year);
		}
	else if(year%4==0)
	{
		printf("\n Given year is leaf year %d",year);
	}
	else
		printf("\n Given year is not a leaf year %d",year);
        }

         break;

        case 2:


        {
	int i,n,sum=0;
	system("clear");
	do
	{
		printf("\n Enter your range of number :\n");
		scanf("%d",&n);
	}
	while(n<=0);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("\n %d",sum);
        }

        break;

        case 3:
                {
	int i,j,table;
	system("clear");
	printf("\n enter the how many tables need to print \n");
	scanf("%d",&table);
	for(i=2;i<=table;i++)
	{
		for(j=0;j<=10;j++)
	{
		printf("\n%d*%d=%d\n",i,j,i*j);
	} 
	printf("\n");
        }       
             }

             break;

     case 4:

     	{
	int i,n,j,fact;
	system("clear");
	printf("\n Enter the number \n :");
	scanf("%d",&n); 
	for(i=1;i<=n;i++)
	{
		fact=0;
		for(j=1;j<=n;j++)
		{
			if(i%j==0)
			fact++;
		}
		if(fact==2)
		{ 
			printf("%d\t\n",i);
		}
	}
}
                
                break;

                default:
      	        	printf("\n you have choosen wrong option \n\n");
      	        	break;
	}

}
