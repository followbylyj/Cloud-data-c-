#include<iostream>
#include<cstdio>

using namespace std;

int n;
int a,b;
int c,d;
int e,f;

int Zongmoney(int bag,int money){
	int hf;
	int sum;
	sum=n/bag;
	hf=sum*money;
	if(n%bag!=0){
		
		hf+=money;
	}
	return hf;
}

int main(){
	
	cin>>n;
	cin>>a>>b>>c>>d>>e>>f;
	int hj;
	int x,y,z;
	x=Zongmoney(a,b);
	y=Zongmoney(c,d);
	z=Zongmoney(e,f);
	hj=min(x,min(y,z));
	cout<<hj<<endl;
	return 0;
}
