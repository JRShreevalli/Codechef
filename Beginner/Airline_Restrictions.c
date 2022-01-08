#include<stdio.h>
int main()
{
    
    int test;
    scanf("%d",&test);
    while(test--)
    {
    int f,g,h,i,j;
    scanf("%d%d%d%d%d",&f,&g,&h,&i,&j);
    if(f+g<=i&&h<=j)
    printf("YES\n");
    else if(f+h<=i&&g<=j)
    printf("YES\n");
    else if(g+h<=i&&f<=j)
    printf("YES\n");
    else
    printf("NO\n");
    }
}
