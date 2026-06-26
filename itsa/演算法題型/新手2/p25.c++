#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
	double x[2],y[2];
    cin>>x[0]>>y[0];
    cin>>x[1]>>y[1];
    cout<<fixed<<setprecision(2);
    cout<<sqrt(pow((x[1]-x[0]),2)+pow((y[1]-y[0]),2));
	
	return 0;
}
