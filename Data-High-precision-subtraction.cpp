#include<bits/stdc++.h>
using namespace std;
int h[2000000]={0},x[2000000]={0},y[2000000]={0},maxn=0,n,len1,len2,len=1;
string s1,s2;
int main(){
	getline(cin,s1);
	getline(cin,s2);
	len1=s1.length();
	len2=s2.length();
	for(int i=0;i<len1;i++){
		x[len1-i]=s1[i]-'0';
	}
	for(int i=0;i<len2;i++){
		y[len2-i]=s2[i]-'0';
	}
	if(len1>len2)	maxn=0;
	else if(len1<len2)	maxn=1;
	else{
		for(int i=len1;i>=1;i--){
			if(x[i]>y[i]){
				maxn=0;
				break;
			}
			else if(x[i]<y[i]){
				maxn=1;
				break;
			}
		}
	}
	while(len<=len1||len<=len2){
		if(maxn==0)
			h[len]+=x[len]-y[len];
		else
			h[len]+=y[len]-x[len];	
		if(h[len]<0){
			h[len+1]--;
			h[len]+=10;
		}		
		len++;
	}
	len--;
	if(h[len]==0)	len--;
	if(maxn==1)	cout<<'-';
	for(int i=len;i>=1;i--){
		cout<<h[i];
	}
//	cout<<maxn;
	return 0;
}//憨憨水题计划
