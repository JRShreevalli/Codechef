#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    if(n%10==5)
	    printf("%d\n",1);
	    else if(n%10==0)
	    printf("%d\n",0);
	    else if(n%10!=0 && n%10!=5)
	    printf("%d\n",-1);
	}
	return 0;
}

