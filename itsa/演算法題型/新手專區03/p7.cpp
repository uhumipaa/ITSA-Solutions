#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int n,max=-999999;
    cin>>n;
    int num[n];
    for(int i =0;i<n;i++){
        cin>>num[i];
        if(num[i]>max)max=num[i];
    }
    cout<<max;
	
	
	return 0;
}
