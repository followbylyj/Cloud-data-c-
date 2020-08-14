#include<bits/stdc++.h>
using namespace std;
int h[2000000]={0},x[2000000]={0},y[2000000]={0},maxn=0,n,len1,len2,len=1;
char a1[100],b1[100];
int a[1000];
int main(){
	cin>>a1;

	len1=strlen(a1);

	for(int i=0;i<len1;i++){
		a[len1-i]=a1[i]-'0';
	}
	cout<<len1<<endl; 
	for(int i=len1;i>=1;i--){
		cout<<a[i]<<" ";
	}
	

	return 0;
}
