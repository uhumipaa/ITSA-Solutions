#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
	int a;
    cin>>a;
        
    double km = a*1.6;
    km = round(km * 10.0) / 10.0;
    cout<<fixed<<setprecision(1);
	cout<<"km="<<km<<endl;
    
	return 0;
}
