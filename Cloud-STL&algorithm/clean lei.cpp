#include<bits/stdc++.h>
using namespace std;
char c[110][110];
int x[110][110];
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    	{
    		for(int j=1;j<=m;j++)
    			cin>>c[i][j];
		}
  
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(c[i][j]=='?')
                x[i][j]=(int)(c[i+1][j]=='*')+(c[i-1][j]=='*')+(c[i][j+1]=='*')+(c[i][j-1]=='*')
                   +(c[i+1][j+1]=='*')+(c[i+1][j-1]=='*')+(c[i-1][j+1]=='*')+(c[i-1][j-1]=='*');
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            if(c[i][j]=='?')printf("%d",x[i][j]);
            else putchar('*');
        puts("");
    }
    return 0;
}



