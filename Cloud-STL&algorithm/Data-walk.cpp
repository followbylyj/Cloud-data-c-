#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int n;
int main()
{
  	int a[1000];
  	cin>>n;
  	a[1]=3;
  	a[2]=7;
  	for(int i=3;i<=n;i++){
  		a[i]=2*a[i-1]+a[i-2];
	  }
	cout<<a[n];
    return 0;
}

