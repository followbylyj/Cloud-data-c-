#include <iostream>
#include <vector>
#include <bits/stdc++.h>
bool isprime(int m);
using namespace std;

int main()
{
   int n,bj=0,m;
   cin>>n>>m;
   if(n==1){
   	n++;
   }
   for(int i=n;i<=m-2;i++){
   	
   	if(isprime(i)&&isprime(i+2)){
   		cout<<i<<" "<<i+2<<endl;
   		bj=1;
	   }
   } 
   if(bj==0)cout<<"empty";
    return 0;
}
bool isprime(int m){
	for(int i=2;i*i<=m;i++){
		if(m%i==0)return false;
		
	}
	return true;
}
