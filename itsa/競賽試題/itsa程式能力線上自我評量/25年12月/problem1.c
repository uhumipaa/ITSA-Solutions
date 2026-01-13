#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int i,j,k;
    scanf("%d%d%d",&i,&j,&k);
    int icount=i/3;
    int jcount=j/2;
    if(icount>jcount){
        k-=jcount;
    }else{
        k-=icount;
    }
    printf("%d",i*20+j*25+k*30);



	return 0;
}