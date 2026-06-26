#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void)
{
	int num[3];
    int valid = 0;
    cin>>num[0]>>num[1]>>num[2];
    int a = max({num[0],num[1],num[2]});
	for(int i=0;i<3;i++){
        
        for(int j=0;j<3;j++){
            if(i==j)continue;
            if(num[i]+num[j]<=a){
                valid =1;
                break;
            }
        }
        
    }
    if(!valid)cout<<"fit";
    else cout<<"unfit";
	
	return 0;
}
