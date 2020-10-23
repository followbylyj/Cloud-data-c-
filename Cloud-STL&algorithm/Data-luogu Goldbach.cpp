#include <iostream>
#include <vector>
#include <bits/stdc++.h>
bool isprime(int m);
using namespace std;
void num(int n)
{
    printf("%d=",n);
    int i;
    for(i=2;i<n;i++)
    {
        if(isprime(i)==true&&isprime(n-i)==true)
                {printf("%d+%d\n",i,n-i); break;}
    }
}
int main()  
{  
   int n;
   cin>>n;
   for(int i=4;i<=n;i++){
   		if(i%2==0)
   		num(i);
   }
    return 0;  
}  
bool isprime(int m){
	for(int i=2;i*i<=m;i++){
		if(m%i==0)return false;
		
	}
	return true;
}
