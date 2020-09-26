#include<bits/stdc++.h>
#define MAXSIZE  500
using namespace std;

int main()
{
    using namespace std;
    int number,flag=0;
    int arry[MAXSIZE];
    cin>>number;
    while(number)
    {
       arry[flag]=number%2;
       number/=2;
       flag++;
    }
    for(int i=flag-1;i>=0;i--)
    {
        cout<<arry[i];
    }
    cout<<endl;
    return 0;
}
