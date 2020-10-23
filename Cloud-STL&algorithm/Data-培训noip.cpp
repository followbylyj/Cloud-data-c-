#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
struct stu{
	string name;
	int age;
	int socre;
}peo[100];
int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
   		cin>>peo[i].name>>peo[i].age>>peo[i].socre;
		peo[i].age++;
		peo[i].socre=peo[i].socre*1.2;
		if(peo[i].socre>=600)
			peo[i].socre=600;
   }
	for(int i=1;i<=n;i++){
		cout<<peo[i].name<<" "<<peo[i].age<<" "<<peo[i].socre<<endl;
		
		
	}
    return 0;
}

 
