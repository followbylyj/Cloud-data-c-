#include<bits/stdc++.h>
using namespace std;
struct P {
	double ss,xs;
	P operator +(const P &c2) {
		P c;
		c.ss=ss+c2.ss;
		c.xs=xs+c2.xs;
		return c;
	}
	P operator -(const P &c2) {
		P c;
		c.ss=ss-c2.ss;
		c.xs=xs-c2.xs;
		return c;
	}
	P operator *(const P &c2) {
		P c;
		c.ss=(ss*c2.ss)-(xs*c2.xs);
		c.xs=(xs*c2.ss)+(ss*c2.xs);
		return c;
	}
	P operator /(const P &c2) {
		P c;
		c.ss=(ss*c2.ss+xs*c2.xs)/(c2.ss*c2.ss+c2.xs*c2.xs);
		c.xs=((xs*c2.ss-ss*c2.xs)/(c2.ss*c2.ss+c2.xs*c2.xs));
		return c;
	}
};

P a,b,c;
char fh;
char fh1='+';
int main() {
	cin>>a.ss>>a.xs>>b.ss>>b.xs;
	cin>>fh;
	if(fh=='+')c=a+b;
	if(fh=='-')c=a-b;
	if(fh=='*')c=a*b;
	if(fh=='/') {
		c=a/b;
		if(c.ss>0)c.ss=floor(c.ss+0.5);
		if(c.ss<0)c.ss=ceil(c.ss-0.5);
		if(c.xs>0)c.xs=floor(c.xs+0.5);
		if(c.xs<0)c.xs=ceil(c.xs-0.5);
	}
	if(c.ss!=0) {
		cout<<c.ss;
		if(c.xs>0&&c.xs!=1)cout<<'+'<<c.xs<<'i';
		if(c.xs<0&&c.xs!=-1)cout<<c.xs<<'i';
		if(c.xs==1)cout<<"+i";
		if(c.xs==-1)cout<<"-i";
	}
	if(c.ss==0&&c.xs==0)cout<<0;
	if(c.ss==0)cout<<c.xs<<'i';
	return 0;
}
