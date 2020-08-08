#include <iostream>
#include <vector>
#include <bits/stdc++.h>
int sum(int m);
int sumc(int m);
using namespace std;

int main()
{
   int n;
   cin>>n;
   cout<<sum(n)<<endl<<sumc(n);
   
    return 0;
}
int sum(int m){
	if(m==1){
		return 1;
	}
	else
		return m+sum(m-1); 
}
int sumc(int m){
	if(m==1){
		return 1;
	}
	else
		return m*sumc(m-1);
}
