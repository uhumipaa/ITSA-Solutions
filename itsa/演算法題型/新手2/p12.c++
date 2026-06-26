#include <iostream>
using namespace std;

int main(void)
{
    int n;
	cin>>n;
	cout<<"NT10="<<n/10<<endl;
    n%=10;
    cout<<"NT5="<<n/5<<endl;
    n%=5;
    cout<<"NT1="<<n<<endl;
	
	return 0;
}
