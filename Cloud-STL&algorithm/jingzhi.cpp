#include<bits/stdc++.h>
#define MAXSIZE  500
using namespace std;
int funa(int an)
{
    int n,na=0;
    for(int i=1;;i++)
    {
        if((int)(an/pow(10,i))==0)
    {
        n=i;break;
    }
    }
    for(int i=1;i<=n;i++)
    {
        na+=(int)(an/pow(10,i-1))%10*pow(10,n-i);
    }
    return na;
}

int main()
{
    using namespace std;
    int number,flag=0,test;
    int arry[MAXSIZE];
    cin>>number;
    
	test=funa(number);
  while(test)
    {
    arry[flag]=test%2;
     test/=2;
       flag++;
  }
   for(int i=flag-1;i>=0;i--)
   {
       cout<<arry[i];
    }
    cout<<endl;
    return 0;
}
