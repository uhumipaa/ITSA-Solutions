#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n,r1,r2,i1,i2;
    char op;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%c",&op);
        if(op=='\n'||op==' '){
            scanf("%c",&op);
        }
        scanf("%d%d%d%d",&r1,&i1,&r2,&i2);
        if(op=='+')printf("%d %d\n",r1+r2,i1+i2);
        if(op=='-')printf("%d %d\n",r1-r2,i1-i2);
        if(op=='*')printf("%d %d\n",r1*r2-i1*i2,r1*i2+r2*i1);
    }
    return 0;
}