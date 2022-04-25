//If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.

#include <stdio.h>
int main(){
    
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        last=n%10;
        while(n>0)
        {
            r=n%10;
            n=n/10;
        }
        
        sum=last+r;
        printf("%d \n",sum);
        
    }

    return 0;
}
