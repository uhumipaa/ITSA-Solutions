#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x,y;
    scanf("%d%d",&x,&y);
    if(x*x+y*y>10000){
        printf("outside");
    }else{
        printf("inside");
    }


	return 0;
}