#include <iostream>
using namespace std;

int main(void)
{
	int h[2],m[2];
    cin>>h[0]>>m[0];
    cin>>h[1]>>m[1];
    int value = (h[1]-h[0])*60+m[1]-m[0];
    value/=30;
    int num = value*30;
    if(value>4){
        value-=4;
        num+=value*10;
    }
    if(value>4){
        value-=4;
        num+=value*20;
    }
	cout<<num;
	
	return 0;
}
