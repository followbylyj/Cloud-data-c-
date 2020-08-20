#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int len,mark[102];                                                             //用来给中序遍历做标记
char s1[102],s2[102];                                                    //储存遍历


void postOrder(string s1,string s2)
{
    if(!s1.size()) return;
    int root  = s2.find(s1[0]);
    postOrder(s1.substr(1,root),s2.substr(0,root));
    postOrder(s1.substr(root+1),s2.substr(root+1));
    cout<<s1[0];
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
        postOrder(s1,s2);
        cout<<endl;
    
    return 0;
}

