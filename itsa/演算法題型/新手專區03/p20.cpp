#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> num;
    for(int i=0;i<3;i++){
        int a;
        cin>>a;
        num.push_back(a);
    }
    sort(num.begin(),num.end());
    if(num[0]+num[1]<=num[2]){
        cout<<"Not Triangle";
        return 0;
    }
    if(num[0]*num[0]+num[1]*num[1]==num[2]*num[2])cout<<"Right Triangle";
	if(num[0]*num[0]+num[1]*num[1]>num[2]*num[2])cout<<"Acute Triangle";
	if(num[0]*num[0]+num[1]*num[1]<num[2]*num[2])cout<<"Obtuse Triangle";
	return 0;
}
