#include <stdio.h>

int main(void) {
    int n,a,b,c,d,e,f,G1,G2;
    scanf("%d\n",&n);
    for(int i = 0;i<n;i++){
        scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
        G1=a+b+c;
        G2=d+e+f;
        if(G1>G2){
            printf("1\n");
        }
        else{
            printf("2\n");
        }
    }
    return 0;
}
