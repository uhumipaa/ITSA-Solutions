#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int a,b;
    cin>>a>>b;
    double area = (double)a * (double)b /2;
    cout<<fixed<<setprecision(1);
	cout<<"Triangle area:"<<area<<endl;
	
	return 0;
}
