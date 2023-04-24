#include<stdio.h>

main()
{
	int a=1,fact=1,n;
	printf("enter number=");
	scanf("%d",&n);
	while(n>=a)
	{
         fact = fact*n;
         n--;	
	}
	printf("sum=%d",fact);	

}
