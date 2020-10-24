#include<bits/stdc++.h>
using namespace std;
void printt(int n){
	if(n==0)cout<<endl;
	else{
		for(int i=1;i<=n;i++){
			cout<<setw(3)<<n;
		}
		cout<<endl;
		printt(n-1);
		
		for(int i=1;i<=n;i++){
			cout<<setw(3)<<n;
		}cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	printt(n);
	return 0;
}
