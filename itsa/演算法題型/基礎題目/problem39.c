#include <stdio.h>
#include <stdlib.h>
int findmax(int a,int b,int c){
    int max=a;
    if(b>=max)max=b;
    if(c>=max)max=c;
    return max;
}
int notpasscount(int a,int b,int c){
    int count=0;
    if(a<60)count++;
    if(b<60)count++;
    if(c<60)count++;
    return count;
}
int main(int argc, char *argv[]) {
    int n,a,b,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&a,&b,&c);
        int notpass=notpasscount(a,b,c);
        if(notpass==0){
            printf("P\n");
        }else if(notpass==1){
            if((a+b+c)>=220){
                printf("P\n");
            }else{
                printf("M\n");
            }
        }else if(notpass==2&&findmax(a,b,c)>=80){
            printf("M\n");
        }else{
            printf("F\n");
        }
    }



	return 0;
}