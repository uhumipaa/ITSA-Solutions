#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num[6]={0,0,0,0,0,0};
    int dice,check=0,count=0,score=0;
    for(int i=0;i<4;i++){
        scanf("%d",&dice);
        num[dice-1]++;
    }
    for(int i=0;i<6;i++){
        if(num[i]==2){
            check=1;
            count++;
            if(count==2){
                score=(i+1)*2;
            }
        }
        if(num[i]==3){
            check=0;
        }
        if(num[i]==4){
            check=2;
            printf("WIN");
        }
        if(num[i]==1){
            score+=(i+1);
        }
    }
    if(check==1){
            printf("%d",score);
        }else if(check==0){
            printf("R");
        }


	return 0;
}