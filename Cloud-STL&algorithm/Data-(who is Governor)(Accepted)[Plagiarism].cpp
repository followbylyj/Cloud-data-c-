#include <bits/stdc++.h>
using namespace std;

int n;
stack <int>z;

int main(){
	//freopen("test.out","w",stdout);
	std::ios::sync_with_stdio(false);
	for(cin>>n;n!=0;cin>>n){
		if(n==1){
			if(z.size()==300){
				cout<<endl<<"the stack is full!";
				break;
			}
			cin>>n;
			z.push(n);
		}
		else if(n==2){
			if(z.empty()){
				cout<<endl<<"the stack is empty!";
				break;
			}
			cout<<z.top()<<" ";
			z.pop();
		}
	}
	cout<<endl;
	while(!z.empty()){
		cout<<z.top()<<" ";
		z.pop();
	}
	
	
	return 0;
}
