#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int a[1050];
int main()
{
	int n,k=-1;
	cin>>n;
    a[1]=1;
    a[2]=3;
    for(int i=3;i<=n;i++){
    	a[i]=(a[i-1]*2+k)%12345;
    	if(i%2==0)k+=2;
    	else
    		k-=2;
    	
	}
	cout<<a[n];
    
    return 0;
}
