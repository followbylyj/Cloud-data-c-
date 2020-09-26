#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a[100000],b,c,d;
	a[0]=4,a[1]=7;
	for(long long i=2;i<=10000;i++){
		a[i]=a[i-2]+a[i-1];
	}
	cin>>b>>c>>d;
	cout<<a[b-1]<<" "<<a[c-1]<<" "<<a[d-1];
	return 0;
}
