#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for (int i=0;i<n;i++) 
    {
        for (int j=0;j<n-i;j++)
        {
            cout<<setw(3)<<n-i;
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i=1;i<=n;i++) 
    {
        for (int j=0;j<i;j++)
        {
            cout<<setw(3)<<i;
        }
        cout<<endl;
    }
	return 0;
}
