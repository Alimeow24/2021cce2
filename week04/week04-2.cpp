//week04-2

#include <stdio.h>
int main(){
    int t=1;
    while(gets(line)){
        if(t>1) printf("\n");
        int ans[256]={};
        for(int i=0;line[i]!=0;i++){
            char c=line[i];
            ans[c]++;
        }
        for(int f=1;f<1000;f++){
            for(int c=128;c>=32;c--){
                if(ans[c]!=0) printf("%d %d\n",c,ans[c]);
            }
        }
        t++;
    }
}
