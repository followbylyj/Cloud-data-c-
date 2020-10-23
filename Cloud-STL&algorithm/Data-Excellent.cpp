#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
struct student{
	int chinese,math,English,tot;
	string name;
}exam[1001];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>exam[i].name>>exam[i].chinese>>exam[i].math>>exam[i].English;
		exam[i].tot=exam[i].chinese+exam[i].math+exam[i].English;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(exam[i].name>exam[j].name){
				swap(exam[i].name,exam[j].name);
				swap(exam[i].chinese,exam[j].chinese);
				swap(exam[i].math,exam[j].math);
				swap(exam[i].English,exam[j].English);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(abs(exam[i].chinese-exam[j].chinese)<=5&&abs(exam[i].math-exam[j].math)<=5&&abs(exam[i].English-exam[j].English)<=5&&abs(exam[i].tot-exam[j].tot)<=10)
				cout<<exam[i].name<<" "<<exam[j].name<<endl;
		}
	}
	return 0;
}
