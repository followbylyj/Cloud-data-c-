#include<bits/stdc++.h>
#include <iostream>
using namespace std;
struct tree
{
    int Begin;
    int End;
    int T;
}t[50000];
bool cmp(tree a,tree b)
{
    return a.Begin<b.Begin;
}
int main()
{
    int treesum=0;
    int m,n;
    int people;
    scanf("%d%d",&n,&people);
    for(int i=1;i<=people;i++)
        scanf("%d%d%d",&t[i].Begin,&t[i].End,&t[i].T);
    sort(t+1,t+people+1,cmp);
    int tree_end=t[1].End;
    treesum+=t[1].T;
    for(int i=2;i<=people;i++)
    {
        if(t[i].Begin<=tree_end)
        {
            if(t[i].End<=tree_end)
            {
                if(t[i-1].T>=t[i].T)
                    continue;
                else
                    treesum+=t[i].T-t[i-1].T;
            }
            else
            {
                int ans=tree_end-t[i].Begin+1;
                if(ans>=t[i].T)
                    continue;
                else
                {
                    treesum+=t[i].T-ans;
                    tree_end=tree_end+t[i].T-ans;
                }
            }
        }
        else
        {
            treesum+=t[i].T;
            tree_end=t[i].End;
        }
    }
    printf("%d\n",treesum);
    return 0;
}
