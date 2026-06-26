#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
    int w,height;
    cin>>w>>height;
    double h = (double)height/100;
    double bmi = (double)w/h/h;
    cout<<fixed<<setprecision(2);
    cout<<bmi;
	
	return 0;
}
