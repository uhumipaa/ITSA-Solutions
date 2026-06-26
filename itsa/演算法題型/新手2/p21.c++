#include <iostream>
using namespace std;

int main(void)
{
	int n,sum=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(i%2==0&&i%3==0&&i%12!=0)sum+=i;
    }
	cout<<sum;
	
	return 0;
}
