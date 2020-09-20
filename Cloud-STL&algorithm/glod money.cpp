
#include<bits/stdc++.h>
int a[10001];
int main(){
    int n,m,j,k,i,sum=0;
    int x,y;
    j=0;
    k=1;
    for(i=1;i<=10000;i++){
        if(k==j){
            j=0;
            k++;
        }
        j++;
        a[i]=k;
    }
    scanf("%d",&n);
    i=0;
    while(i<n){
        i++;
        sum+=a[i];
    }
    printf("%d\n",sum);
    return 0;
}
