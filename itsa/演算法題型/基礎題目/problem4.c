#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
    int hour1,hour2,min1,min2,time,count=0;
    scanf("%d%d",&hour1,&min1);
    scanf("%d%d",&hour2,&min2);
    time=(hour2-hour1)*2;
    if(min1>min2){
        time--;
    }else if((min2-min1)>=30){
        time++;
    }
    count += time*30;
    if(time>4){
        time-=4;
        count += time*10;
        if(time>4){
            time-=4;
            count += time*20;
        }
    }
    printf("%d",count);
	return 0;
}