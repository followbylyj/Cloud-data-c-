#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int fio(int n){
	if((n==1)||(n==2))
		return 1;
	else if(n==0)
		return 0;
	else
		return fio(n-2)+fio(n-1);
}
int main()
{
	int m,tot;
    cin>>m;
    tot=fio(m);
    cout<<tot;
	return 0; 
}
