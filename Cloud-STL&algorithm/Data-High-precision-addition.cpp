#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
string a1,b1;
int a[10000],b[10000],c[10000],lena,lenb,lenc,i,x; 
int main()
{
   memset(a,0,sizeof(a));
   memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	getline(cin,a1);
	getline(cin,b1);
	lena=a1.length();
	lenb=b1.length();
	for(int i=0;i<=lena-1;i++){
		a[lena-i]=a1[i]-48;
	}
	for(int i=0;i<=lenb-1;i++){
		b[lenb-i]=b1[i]-48;
	}
	lenc=1;
	x=0;
	while(lenc<=lena||lenc<=lenb){
		c[lenc]=a[lenc]+b[lenc]+x;
		x=c[lenc]/10;
		c[lenc]%=10;
		lenc++;
	}
	c[lenc]=x;
	while(c[lenc]==0){
		lenc--;
	}
	if(c[lenc]==0)
	lenc--;
	for(int i=lenc;i>=1;i--)
	cout<<c[i];
	
	cout<<endl;
    return 0;
}

