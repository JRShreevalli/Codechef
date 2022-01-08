#include <stdio.h>
int main(void){
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
	    scanf("%d",&n);
	    char arr[n];
	    for(int i=0;i<=n;i++)
	    {
	        scanf("%c",&arr[i]);
	    }
	    int x=0;
	    for(int i=0;i<=n;i++)
	    {
	        if(arr[i]=='Y')
	        {
	            printf("NOT INDIAN\n");
	            break;
	        }
	        else if(arr[i]=='I')
	        {
	            printf("INDIAN\n");
	            break;
	        }
	        else if(arr[i]=='N')
	        {
	            x++;
	        }
	    }
	    if(x==n)
	    printf("NOT SURE\n");
	}
	return 0;
}
