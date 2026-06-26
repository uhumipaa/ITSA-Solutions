#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int n;
    cin>>n;
    double value = (double)n*0.9;
    if(n>=1500)value*=0.79;
    else if(n>=800&&n<1500)value*=0.9;
	cout<<fixed<<setprecision(1);
    cout<<value;
	
	return 0;
}
