#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int special,reward[3],n,number,goal[7],count=0;
    scanf("%d%d%d%d",&special,&reward[0],&reward[1],&reward[2]);
    scanf("%d",&n);
    for(int i=0;i<7;i++)goal[i]=0;
    for(int i=0;i<n;i++){
        int check=0;
        scanf("%d",&number);
        if(special-number==0){
            goal[0]++;
            count+=2000000;
            continue;
        }
        for(int k=0;k<3;k++){
            if(reward[k]-number==0){
            goal[1]++;
            count+=200000;
            check=1;
            break;
        }
        }
        if(check)continue;
        for(int k=0;k<3;k++){
            if(reward[k]%10000000-number%10000000==0){
            goal[2]++;
            count+=40000;
            check=1;
            break;
        }
        }
        if(check)continue;
        for(int k=0;k<3;k++){
            if(reward[k]%1000000-number%1000000==0){
            goal[3]++;
            count+=10000;
            check=1;
            break;
        }
        }
        if(check)continue;
        for(int k=0;k<3;k++){
            if(reward[k]%100000-number%100000==0){
            goal[4]++;
            count+=4000;
            check=1;
            break;
            }
        }
        if(check)continue;
        for(int k=0;k<3;k++){
            if(reward[k]%10000-number%10000==0){
            goal[5]++;
            count+=1000;
            check=1;
            break;
        }
        }
        if(check)continue;
        for(int k=0;k<3;k++){
            if(reward[k]%1000-number%1000==0){
            goal[6]++;
            count+=200;
            check=1;
            break;
        }
        }
        if(check)continue;
    }
    for(int i=0;i<7;i++){
        printf("%d",goal[i]);
        if(i<6)printf(" ");
    }
    printf("\n%d\n",count);


	return 0;
}