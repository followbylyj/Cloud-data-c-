#include <iostream>
#include <vector>
#include <bits/stdc++.h>
long long f[100];
using namespace std;
int n;
long long fac(int m);

//int main(){
//	cin>>n;
//	memset(f,-1,sizeof f);
//	f[1]=f[2]=1;
//	cout<<fac(n)<<endl;
//	return 0;
//} 
//long long fac(int m){
//	long long p;
//	if(f[n]!=-1)return f[n];
//	p=fac(n-1)+fac(n-2);
//	return p;
int main()
{
   
  cin>>n;
      	f[1]=f[2]=1;
   for(int i=3;i<=n;i++){
	f[i]=f[i-1]+f[i-2];
   }
 	cout<<f[n]<<endl;
   
   return 0;
}

