#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int num[3];
    for(int i =0;i<3;i++){
        cin>>num[i];
    }
    cout<<max({num[0],num[1],num[2]});
	
	
	return 0;
}
