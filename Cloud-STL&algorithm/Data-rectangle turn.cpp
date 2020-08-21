
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main()
{
	int tot=0;
    int n,m,dui;
    cin>>m>>n;
    
    
    for(int i=1;i<=m;i++){
    	for(int j=1;j<=n;j++){
    		cin>>a[i][j];	
			
		}
    }
    for(int i=m;i>=1;i--){
    	for(int j=n;j>=1;j--){
    		cout<<setw(5)<<a[i][j];	
			
		}
		cout<<endl;
	}

    return 0;
}

