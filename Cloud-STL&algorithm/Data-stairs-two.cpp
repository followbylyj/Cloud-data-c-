#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int a[1050];
int main()
{
    int n,k;
    cin>>n;
	a[1]=1;
	a[2]=2;
	for(int i=3;i<=n;i++){
		a[i]=a[i-2]+a[i-1];
	} 
    cout<<a[n];
     
    
    return 0;
}
