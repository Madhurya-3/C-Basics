#include<stdio.h>
int sum(int);
int sum(int num)
{
	if(num!=0)
	return (num%10+sum(num/10));
	else 
	return num;
}
int main()
{
     int n,r;
     printf("Enter Input : ");
     scanf("%d",&n);
	 r= sum(n);
     printf("Sum of Digits = %d", r); 
	 return 0;
}


/*
Enter Input : 453
Sum of Digits = 12
}
*/
