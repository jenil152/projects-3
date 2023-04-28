#include<stdio.h> 
 
main()
    
{    
    int n,r,sum=0,temp;    
    printf("Enter Number=");    
    scanf("%d",&n);
    temp=n;    
    
	while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n/=10;    
    }    
    if(temp==sum)
	{    
        printf("This is Palindrome Number");
	}
    else
	{    
        printf("This is Not Palindrome Number");     
    } 
}
