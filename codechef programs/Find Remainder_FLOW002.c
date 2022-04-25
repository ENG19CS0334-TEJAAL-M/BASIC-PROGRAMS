//Write a program to find the remainder when an integer A is divided by an integer B.
//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.

#include<stdio.h>
void  main()
{
    int a,b,n,r;
    scanf("%d",&n);
    while(n--)
    {
       	scanf("%d",&a);
	    scanf("%d",&b); 
	    r=a%b;
	    printf("%d \n",r);
	    
    }
}
