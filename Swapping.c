#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter 'a' value : ");
	scanf("%d",&a);
	printf("Enter 'b' value : ");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After Swapping, ");
	printf("a = %d ",a);
	printf("b = %d",b);
}

/* OUTPUT:
Enter 'a' value : 3
Enter 'b' value : 24
After Swapping, a = 24 b = 3
*/
