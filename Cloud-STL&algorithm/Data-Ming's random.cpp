#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;


int main()
{
   int n,m=0,i,x;
   int b[1001]={0};
   cin>>n;
  for(i=1;i<=n;i++){
		cin>>x;
		if(b[x]==0)m++;
		b[x]++;  	
  }
  cout<<m<<endl;
  for(i=0;i<=1000;i++)
  		if(b[i]>0)cout<<i<<" ";
  	cout<<endl;
    return 0;
}

