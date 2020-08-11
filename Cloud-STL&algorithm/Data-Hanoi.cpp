#include <stdio.h>

#include<bits/stdc++.h>
using namespace std;
void Hanoi(int n, char a,char b,char c);
void Move(int n, char a, char b);
int counta;
int main()
{
    int n=8;
    int a;

    scanf(" %d",&a);
    Hanoi(a, 'a', 'b', 'c');

    return 0;
}
void Hanoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        Move(n, a, c);
    }
    else
    {
        Hanoi(n - 1, a, c, b);
        Move(n, a, c);
        Hanoi(n - 1, b, a, c);
    }
}
void Move(int n, char a, char b)
{
    counta++;
    cout<<"move "<<n<<" "<<"from "<<a<<" "<<"to "<<b<<endl;;
}
