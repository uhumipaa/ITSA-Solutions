#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int n,sum=0,org;
    cin>>n;
    org=n;
    sum += pow(n/100,3);
    n%=100;
    sum += pow(n/10,3);
    n%=10;
    sum += pow(n,3);
    if(sum==org)cout<<"YES";
    else cout<<"NO";
	
	
	return 0;
}
