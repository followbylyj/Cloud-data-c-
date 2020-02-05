#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	int n,i,j;
	

	
	cin>>n;
	int a[n+1];
	for (i=1;i<=n;i++)
	{
		
		cin>>a[i];
	}
	
	sort(a+1,a+n+1);
	
	for (i=1;i<=n;i++) 
	{
		cout<<a[i]<<" ";
		if(i%10==0)
				cout<<endl;
	} 
	return 0;
}
