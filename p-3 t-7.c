#include<stdio.h>

main()

{
	int n,a=0,b=1,c;
	printf("Enter Number=");
	scanf("%d",&n);
	
	while(n>a)
	{
	    printf("%d,",a);
		c=a+b;
		a=b;
		b=c;
	}
}
