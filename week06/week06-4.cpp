//week06-4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char words[1000][40];
int comapre(const void *p1,const void *p2){
    char * s1 = (char*) p1;
    char * s2 = (char*) p2;
    return strcmp(s1,s2);
}
int main(){
    int N;
    scanf("%d\n\n",&T);
    for(int t=1;t<T;t++){
        int N=0;
        while(gets(tree[N])){
            if(tree[N][0]==0) break;
            N++;
        }
        if(t>1) printf("\n");
        qsort(tree,N,40,compare);
        for(int i=0;i<N;i++){
            printf("%s %.4f\n",tree[i],100.0/N);
        }
    }
}
