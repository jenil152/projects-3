#include<stdio.h>

main()

{
	int a,n;
	printf("Enter Number=");
	scanf("%d",&n);
	
	for(a=1;a<=10;a++)
	{
		printf("%d*%d=%d\n",n,a,n*a);
	}
}
