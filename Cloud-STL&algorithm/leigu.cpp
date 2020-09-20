#include<bits/stdc++.h>
using namespace std;
int n;
int judge(int a,int cnt);
bool prime(int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if (a%i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    judge(2,1);
    judge(3,1);
    judge(5,1);
    judge(7,1);
}
int judge(int a,int cnt)
{
    int b;
    if (cnt==n) 
    {
        cout<<a<<endl;
        return 0;
    }
    for(int i=1;i<=9;i+=2)
    {
        if (i==5)
            continue;
        b=a*10+i;
        if(prime(b))
        {
            judge(b,cnt+1); 
        }
    }
}
 
 
