#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
 int a[10000];
int qsortl(int,int);
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
	qsortl(1,n);
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
		if(i==10)cout<<endl;
		}    
    return 0;
}
int qsortl(int l,int r){
	int i,j,mid;
	i=l;j=r;
	mid=a[(l+r)/2];
	do{
		while(a[i]<mid)i++;
		while(a[j]>mid)j--;
		if(i<=j){
			swap(a[i],a[j]);
			i++;j--;
			
		}
	}while(i<=j);
	if(l<j)qsortl(l,j);
	if(i<r)qsortl(i,r);
	
}

