#include <stdio.h>

int main(void) 
{
	        int t , i , x , y , z , add , large ;
	        scanf("%d\n",&t);
	        
	        for(i=1 ; i<=t ; i++)
	        {
	            scanf("%d %d %d\n",&x,&y,&z);
	            
	            large = (x > y && x > z)? x: (y > z)? y : z ; 
	            
	            if((large == x + y) || (large == y + z) || (large == x + z))
	                        printf("YES\n");
	            else
	                        printf("NO\n");
	        }
	return 0;
}
