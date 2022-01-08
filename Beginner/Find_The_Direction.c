#include<stdio.h>
int main()
{
	int n,test_cases,i;
	scanf("%d",&test_cases);
	for(i=0;i<test_cases;i++)
	{
    scanf("%d",&n);
	if(n%4 == 1)
	printf("East\n");
	if(n%4 == 2)
	printf("South\n");
	if(n%4 == 3)
	printf("West\n");
	if(n%4 == 0)
	printf("North\n");
	}
	return 0;
}
