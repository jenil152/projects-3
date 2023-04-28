#include<stdio.h>

main()

{
	char i;
	
	printf("\nThe Alphabets from A to Z are : \n");
	
	i='A';
	
	do
	{
		printf("%c,",i);
		i++;
	}while(i<='Z');
}

