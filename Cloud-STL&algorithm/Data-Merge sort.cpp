#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
 int a[10000],r[10000];
void msort(int,int);
inline int read(){
   int s=0,w=1;
   char ch=getchar();
   while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
   while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
   return s*w;}

int main()
{
    int n,i;
    n=read();
    
    for(i=1;i<=n;i++){
    	cin>>a[i];
	}
	msort(1,n);
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
		if(i==10)cout<<endl;
		}    
    return 0;
}
void msort(int s,int t){
	if(s==t)return;
	int mid=(s+t)/2;
	msort(s,mid);
	msort(mid+1,t);
	int i=s,j=mid+1,k=s;
	while(i<=mid&&j<=t){
		if(a[i]<=a[j]){
			r[k]=a[i];k++;i++;
		}
		else{
			r[k]=a[i];k++;j++;
		}
	}
	while(i<=mid){
		r[k]=a[i];k++;i++;
	}
	while(j<=t){
		r[k]=a[j];k++;j++;
		
	}
	for(int i=s;i<=t;i++){
		a[i]=r[i];
	}
}

