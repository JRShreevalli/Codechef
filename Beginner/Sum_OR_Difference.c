#include <stdio.h>

int main(void)
{
	int num1 , num2 , tot , diff ;
	scanf("%d\n%d",&num1,&num2);
	
	if (num1 > num2)
	        {
	            diff = num1 - num2 ;
	            printf("%d",diff);
	        }
	else 
	        {
	            tot = num1 + num2 ;
	            printf("%d",tot);
	        }
	return 0;
}

