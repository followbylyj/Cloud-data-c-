#include <stdio.h>
#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int n,i,j,k,sum=0;
    int a[1000],b[1001];
    std::ios::sync_with_stdio(false);
	cin>>n;
	memset(b,0,sizeof(b));
	for(i=0;i<n;i++)
		{
			cin>>k;b[k]++;
		}
	for(i=0;i<1001;i++){
		for(int j=0;j<b[i];j++)
			cout<<i<<" ";sum++;
			if(sum==10)cout<<endl;
	}
	
    
    return 0;
}


