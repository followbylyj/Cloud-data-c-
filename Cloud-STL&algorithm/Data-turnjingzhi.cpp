#include<bits/stdc++.h>
#include<stdio.h>
#define mod 1000007
using namespace std;
long long m;
string n;
int main(){
	cin>>m;
	cin>>n;
	
	long long cnt=0;
	for(long long i=0;i<n.size();i++){
		char key=n[i];
		if(key>='0'&&key<='9'){
			cnt=(cnt*m%mod+key-'0')%mod;
		}
		else
			cnt=(cnt*m%mod+key-'A'+10)%mod;
	}
	cout<<cnt%mod<<endl;
	return 0;
}
