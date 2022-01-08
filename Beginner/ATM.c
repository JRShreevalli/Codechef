#include <stdio.h>

int main(void) 
{
	int x ;
	float y , result ;
	
	scanf("%d%f",&x,&y);
	
	if(x % 5 == 0 && x <= (y - 0.5) )
	{
	    result = y - x - 0.5 ;
	}
	else
	{
	    result = y ;
	}
	printf("%.2f",result);
	return 0;
}
