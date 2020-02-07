#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int n,m,sum=0;
int q1[1000001],q2[1000001];
int a[1000001];
int maxn[25000];

int main()
{
	cin>>m;
    do{
    	cin>>n;
    	sum++;
    	maxn[sum]=n;
	}while(n!=-1);
    
    int h=1,t=0;
    for(int i=1;i<=sum-1;i++)
    {
        while(h<=t&&q2[h]+m<=i) h++;
        while(h<=t&&maxn[i]>maxn[q2[t]]) t--;
        q2[++t]=i;
        if(i>=m) cout<<maxn[q2[h]]<<endl;
    }
    
			
    return 0;
}

