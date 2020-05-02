#include<cstdio>
using namespace std;

int n,a[80005],stk[80005],p;
long long ans;

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        scanf("%d",&a[i]);
    a[n+1]=0x3f3f3f3f;
    stk[p++]=n+1;
    for(int i=n;i>=1;--i){
        while(a[stk[p-1]]<a[i]) --p;
        ans+=stk[p-1]-i-1;
        stk[p++]=i;
    }
    printf("%lld\n",ans);
    return 0;
}
