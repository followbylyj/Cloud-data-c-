#include<cstdio>
int a[21][21];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		a[i][1]=a[i][i]=1;//赋初值
	for(int i=1;i<=n;i++)
		for(int j=2;j<i;j++)//因为a[i][1]、a[i][i]已经赋值过了，所以循环是2~n-1
			a[i][j]=a[i-1][j]+a[i-1][j-1];
	for(int i=1;i<=n;i++)
	{
		
			printf("%d ",a[n][i]);
		
	}
}
