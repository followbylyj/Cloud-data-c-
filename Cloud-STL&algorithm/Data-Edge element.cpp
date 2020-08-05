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
			if((i==1)||(j==1)||(i==m)||(j==n))	
				tot+=a[i][j];
		}
    }
    cout<<tot;
    return 0;
}

