#include<bits/stdc++.h>
#define MAXSIZE  500
using namespace std;
int main()
{
   	int first,second;
   	int allm;
   	int zoem=0,micm=0;
   	cin>>allm>>first>>second;
   	int remoney=first+second;
   	int kdou=allm/remoney;
   	int shen=allm%remoney;
   	
   	if(kdou%2==0){
   		zoem+=(kdou/2*remoney);
   		micm+=(kdou/2*remoney);
   }
   if(kdou%2!=0) {
   
   		int kp=(kdou+1)/2;
   		zoem+=kp*first+(kp-1)*second;
   		micm+=kp*second+(kp-1)*first;}
   if(shen>=0){
	   
   		if(kdou%2==0)zoem+=shen;
   		else micm+=shen;}
	   
   

   	if(zoem>micm)cout<<"Zoe wins!"<<endl;
   	else if(zoem<micm)cout<<"Michael wins!"<<endl;
   	else cout<<"No winner!"<<endl;
   	cout<<"Michael:"<<micm<<endl;
   	cout<<"Zoe:"<<zoem<<endl;
    return 0;
}
