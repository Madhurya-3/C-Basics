#include<stdio.h>
int main()
{
	double m;
	printf("Enter marks: ");
	scanf("%lf",&m);
	if(m>=85&&m<=100)
	printf("Grade A");
	else if(m>=70&&m<=84)
	printf("Grade B");
	else if(m>=55&&m<=69)
	printf("Grade C");
	else if(m>=40&&m<=54)
	printf("Grade D");
	else if(m<40)
	printf("Grade F");
	else
	printf("Enter correct marks");
	return 0;
}
