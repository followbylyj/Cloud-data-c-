#include<cstdio>
int a[21][21];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		a[i][1]=a[i][i]=1;//����ֵ
	for(int i=1;i<=n;i++)
		for(int j=2;j<i;j++)//��Ϊa[i][1]��a[i][i]�Ѿ���ֵ���ˣ�����ѭ����2~n-1
			a[i][j]=a[i-1][j]+a[i-1][j-1];
	for(int i=1;i<=n;i++)
	{
		
			printf("%d ",a[n][i]);
		
	}
}
