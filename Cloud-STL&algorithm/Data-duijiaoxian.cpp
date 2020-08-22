
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int a[1000][1000];
int main()
{
	int tot=0;
    int n,m,dui;
    cin>>n;
    
    
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		cin>>a[i][j];	
			
		}
    }
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		if(i==j)tot+=a[i][j];
			if(i!=j&&i+j==n+1)tot+=a[i][j];
			
		}
		
	}
	cout<<tot;
    return 0;
}

