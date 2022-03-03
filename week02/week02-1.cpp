//week02-1
#include <stdio.h>
char mirror(char c){
    if(c=='A') return 'A';
    if(c=='E') return '3';
    if(c=='H') return 'H';
    if(c=='I') return 'I';
    if(c=='J') return 'L';
    if(c=='L') return 'J';
    if(c=='M') return 'M';
    if(c=='O') return 'O';
    if(c=='S') return '2';
    if(c=='T') return 'T';
    if(c=='U') return 'U';
    if(c=='V') return 'V';
    if(c=='W') return 'W';
    if(c=='X') return 'X';
    if(c=='Y') return 'Y';
    if(c=='Z') return '5';
    if(c=='1') return '1';
    if(c=='2') return 'S';
    if(c=='3') return 'E';
    if(c=='5') return 'Z';
    if(c=='8') return '8';
    else return' ';
}
int main(){
    char c ;
    scanf("%c", &c);
    char ans = mirror(c);
    printf("它的鏡像字是--%c--\n",ans);
    return 0;
}
