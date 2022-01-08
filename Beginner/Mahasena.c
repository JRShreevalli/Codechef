#include <stdio.h>

int main(void)
{
	int t, i , s , s1=0, s2=0 , count1 = 0 , count2 = 0;
	scanf("%d\n",&t);
	
	for(i=1 ; i <= t ; i++)
    {
        scanf("%d ",&s);
        
        if(s % 2 == 0)
            count1++ ;
        else
            count2++ ;
    }	
    if (count1 > count2 )
            printf("\nREADY FOR BATTLE");
    else
            printf("\nNOT READY");
 return 0;
}

