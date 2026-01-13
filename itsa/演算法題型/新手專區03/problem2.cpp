#include <iostream>
using namespace std;

int main(void)
{
	char c;
    cin>>c;
    if(c<'a')c+=('a'-'A');
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        cout<<"母音";
    }else{
        cout<<"子音";
    }
	
	return 0;
}
