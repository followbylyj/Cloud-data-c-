#include<bits/stdc++.h>
using namespace std;

const int mnx = 301;

int n, k; 
int heapsize;
int heap[100000001];

void put(int d)
{
	int now,next;
	heap[++heapsize]=d;
	now=heapsize;
	while(now>1)
	{
		next=now>>1;
		if(heap[now]>=heap[next])return;
		swap(heap[now],heap[next]);
		now=next;	
	}
 } 

int get()
{
	int now,next,res;
	res=heap[1];
	heap[1]=heap[heapsize--];
	now=1;
	while(now * 2 <= heapsize)
	{
		next = now * 2;
		if( next<heapsize && heap[next+1]<heap[next])next++;
		if(heap[now]<=heap[next])return res;
		swap(heap[now],heap[next]);
		now=next;
	}
	return res;
}
int main()
{
	int i,x,y,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
	
	cin>>x;
	put(x);}
	for(int i=1;i<n;i++){
	
		cout<<get()<<" "; 
		if(i%10==0)
				cout<<endl;}
		cout<<get()<<endl;
	
			
	return 0;
}
