//week06-1

#include <stdio.h>
char tree[1000000][40];
int main(){
    int T;
    scanf("%d\n\n",&T);
    for(int t=1;t<=T;t++){
        int N=0;
        while(gets(tree[N])){
            if(tree[N][0]==0) break;
            N++;
        }
        if(t>1) printf("\n");
            printf("Test Case %d: lines\n",t,N);
    }
}