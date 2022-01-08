#include <stdio.h>

int main(void) 
{
    int a , b , c , t , i ;
    scanf("%d\n",&t);
    
    for(i=1 ; i <= t ; i++)
    {
    scanf("%d %d %d\n",&a,&b,&c);
    
    if ( a + b + c == 180)
        printf("YES\n");
    else
        printf("NO\n");
    }
 return 0;
}
