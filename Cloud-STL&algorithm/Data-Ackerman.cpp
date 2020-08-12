#include <stdio.h>

#include<bits/stdc++.h>
using namespace std;
int ack(int x,int y);
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<ack(m,n)<<endl;

    return 0;
}
int ack(int x,int y){
	if(x==0)return y+1;
	if(y==0)return ack(x-1,1);
	if((x!=0)&&(y!=0))return ack(x-1,ack(x,y-1));
}

