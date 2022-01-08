#include <stdio.h>
int count(int n)
{
    int rem,c=0;
    while(n!=0)
    {
        rem=n%10;
        c++;
        n=n/10;
    }
    return c;
}

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	if(count(n)==1)
	{
	    printf("1\n");
	}
	else if(count(n)==2)
	{
	    printf("2\n");
	}
	else if(count(n)==3)
	{
	    printf("3\n");
	}
	else
	{
	    printf("More than 3 digits\n");
	}
	return 0;
}

