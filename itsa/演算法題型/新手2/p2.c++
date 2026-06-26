#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int a,b,c;
    cin>>a>>b>>c;
    double area = (double)(a + b)*(double)c /2;
    cout<<fixed<<setprecision(1);
	cout<<"Trapezoid area:"<<area<<endl;
	
	return 0;
}
