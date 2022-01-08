#include <stdio.h>

int main(void) 
{
	int t , a , b , c , d ;
	scanf("%d\n",&t);
	for( int i=1 ; i<=t ; i++)
	{
	    scanf("%d %d %d %d\n",&a,&b,&c,&d);
	    if((a + c == 180)||(b + d == 180))
	            printf("Yes\n");
	    else
	            printf("No\n");
	}
	return 0;
}

