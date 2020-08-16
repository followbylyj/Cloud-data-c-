#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
string a1,b1;
int a[10000],b,c[10000],lena,lenb,lenc,i,x=0; 
int main()
{
   memset(a,0,sizeof(a1));
   
	memset(c,0,sizeof(c));
	getline(cin,a1);
	cin>>b;
	lena=a1.length();
	for(i=0;i<=lena-1;i++){
		a[i+1]=a1[i]-48;		
	} 
	for(i=1;i<=lena;i++){
		c[i]=(x*10+a[i])/b;
		x=(x*10+a[i])%b;
	}
	lenc=1;
	while(c[lenc]==0&&lenc<lena){
		lenc++;
		
	}
	for(int i=lenc;i<=lena;i++){
		cout<<c[i];
		
	}
	cout<<endl;
    return 0;
}

