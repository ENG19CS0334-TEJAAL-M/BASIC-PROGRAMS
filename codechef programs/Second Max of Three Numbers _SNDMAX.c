#include <stdio.h>

int main(void) {
    
    int n,a,b,c;
    scanf("%d \n",&n);
    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
        
            if(a>b && a>c)
            {
                if(b>c)
                {
                    printf("%d\n",b);
                }
                else
                {
                    printf("%d\n",c);
                }
            }
            if(b>c && b>a)
            {
                if(c>a)
                {
                    printf("%d\n",c);
                }
                else
                {
                    printf("%d\n",a);
                }
            }
            if(c>a && c>b)
            {
                if(b>a)
                {
                    printf("%d\n",b);
                }
                else
                {
                    printf("%d\n",a);
                }
            }
            
    }
    
	return 0;
}


/*

#include<stdio.h>
int main(){
    
    
    int a,b,c,n;
    scanf("%d\n",&n);
    while(n--)
    {
        scanf("%d %d %d\n",&a,&b,&c);
        if(b<a && b>c || b>a && b<c)
        {
            printf("%d \n",b);
        }
        else if(a<b && a>c || a>b && a<c)
        {
            printf("%d \n",a);
        }
        else
        {
            printf("%d \n",c);
        }
        
    }
    
    return 0;
}

*/
