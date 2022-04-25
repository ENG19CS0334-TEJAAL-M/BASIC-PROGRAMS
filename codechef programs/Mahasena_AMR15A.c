#include <stdio.h>

int main(void) {
	
	
	int i,even=0,odd=0,t;

	scanf("%d\n",&t);
	int n[t];
	for(i=0;i<t;i++)
	{
	    scanf("%d ",&n[i]);
	}
	for(int j=0;j<t;j++)
	{
	    if(n[j]%2==0)
	    {
	        even++;
	    }
	    else
	    {
	       odd++;
	    }
	}
	if(even>odd)
	{
	    printf("READY FOR BATTLE");
	}
	else
	{
	    printf("NOT READY");
	}
	
	return 0;
}

