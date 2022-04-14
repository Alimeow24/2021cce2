//week08-4

#include <stdio.h>
int main(){
    FILE * fout=fopen("檔名.txt","w+");
    fprintf(fout,"Hello 我在檔案裡0.0\n");
    printf("Hello World\n");
}
