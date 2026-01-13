#include <stdio.h>

#include <stdlib.h>

int cmp(const void *a,const void *b){
    return *(int *)a-*(int *)b;
}

int main(int argc, char *argv[]) {
    int n,t,m,k;
    scanf("%d",&n);
    for(int a=0;a<n;a++){
        int cost=0,check=1;
        scanf("%d%d%d",&t,&m,&k);
        int *goods = malloc(sizeof(int)*k);
        for(int i=0;i<k;i++){
            scanf("%d",&goods[i]);
        }
        qsort(goods,k,sizeof(int),cmp);
        for(int i=0;i<m;i++){
            cost+=goods[i];
            if(cost>t){
                printf("Impossible\n");
                check=0;
                break;
            }
        }
        if(check)printf("%d\n",cost);
        free(goods);
    }
}