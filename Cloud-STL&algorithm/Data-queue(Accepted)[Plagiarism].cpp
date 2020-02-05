#include<bits/stdc++.h>
using namespace std;

const int mnx = 301;

int n, k; 

queue <int> q, chudui;

inline int read()
{
	int x = 0, f = 1;
	char c = getchar();
	for (; !isdigit(c); c = getchar())
	if (c == '-') f = -1;
	for (; isdigit(c); c = getchar())
	x = x * 10 + c - '0';
	return x * f;
}

int chu()
{
	if (!chudui.empty())
	{
		for (int i = 0, size = chudui.size(), name; i < size; i++) 
		{
			name = chudui.front();
			printf("%d ", name);
			chudui.pop();
		}
		printf("\n");
	}
	else printf("\n");
}

int main()
{
	do
	{
		n = read();
		if (n == 1) q.push(read());
		if (n == 2)
		{
			if (q.size() == 0){
				chu();
				printf("the queue is empty!");

				return 0;
			} 
			k = q.front();
			chudui.push(k);
			q.pop();
		} 
		if (q.size() > 300){
			chu();
			printf("the queue is full!");	
			return 0;
		} 
	
	} while(n != 0);
	
  	chu();
	
	if(!q.empty())
	for (int i = 0, size = q.size(), name; i < size; i++)
	{
		name = q.front();
		printf("%d ", name);
		q.pop();
	}
	return 0;
}
