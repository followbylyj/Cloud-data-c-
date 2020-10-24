#include<bits/stdc++.h>
using namespace std;
void hanio(int n,char a,char b,char c){
	if(n>0){
		hanio(n-1,a,c,b);
		cout<<"move "<<n<<" from "<<a<<" to "<<c<<endl;
		hanio(n-1,b,a,c);
	}
	
}
int main(){
	int n;
	cin>>n;
	hanio(n,'a','b','c');
	return 0;
}
