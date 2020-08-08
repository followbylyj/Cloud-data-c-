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
   for(int i=n;i<=m;i++){
   	
   	if(isprime(i)){
   		cout<<setw(12)<<i;
   		bj++;
   		if(bj%6==0){
   			cout<<endl;
		   } 
	   }
   } 
 
    return 0;
}
bool isprime(int m){
	for(int i=2;i*i<=m;i++){
		if(m%i==0)return false;
		
	}
	return true;
}
