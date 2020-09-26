#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int n,sum=0;
	cin>>n;
	do{
		if(n%2==0)n/=2;
		else n=n*3+1;
	sum++;
	}while(n!=1);
	cout<<sum;
   return 0;
}
