#include <stdio.h>

#include<bits/stdc++.h>
using namespace std;
int a[100][100]={0}; 
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=n;i++){
    		a[1][i]=i;
	} 
	for(int i=1;i<=m;i++){
    		a[i][1]=i;
	} 
	for(int i=2;i<=m;i++){
    	for(int j=2;j<=n;j++)
    		a[i][j]=a[i-1][j]+1;
    
	} 
	for(int i=1;i<=m;i++){
    	for(int j=1;j<=n;j++)
    		cout<<setw(4)<<a[i][j];
    		
    		
    	cout<<endl;	
	} 
    return 0;
}

