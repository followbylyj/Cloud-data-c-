#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define maxsize 10
#include<iostream> 
typedef int status;
typedef int elemtype;
using namespace std;
typedef struct node{
    elemtype num;
    struct node * next;
}node;

typedef struct node* linklist;

int main(void){
    linklist p,q,head;
    int m,n,king,i,j;
    scanf("%d %d",&m,&n);
    if(m==1)//ֻ��һֻ����ʱ����Ϊ1 
       king=1;
    p=q=(linklist)malloc(sizeof(node));//���½ڵ����ռ� 
    head=p;//headָ����Ԫ�ؽڵ� 
    head->num=1;//����һֻ���ӱ�� 
    for(i=1;i<m;i++){//����mֻ����Χ�ɵ�ԲȦ 
        p=(linklist)malloc(sizeof(node));//pΪ�ȴ�����Ľڵ� 
        p->num=i+1;//p�ı��Ϊi+1 
        q->next=p;//qʼ�ռ�¼β�ڵ�(ʵ���������β�巨) 
        q=p;
    }
    q->next=head;//����βָ������ͷ 

    p=head;//��ʼ���� 
    for(i=1;i<m;i++){//ѭ��m-1�֣���̭m-1ֻ���� 
        for(j=1;j<n-1;j++){//��pָ��Ҫ��̭��Ԫ�ص�ǰ��Ԫ�� 
            p=p->next;
        }
            q=p->next;//qָ��Ҫ��̭�ĺ��� 
            
            p->next=q->next;//ɾ��q 
            p=q->next;//һ��Ҫ����һ�μ������Ϊ��ɾ��Ԫ�صĺ�� 
            free(q);//�ͷ�q 
    }
    king=p->num;
    free(p);
    cout<<king<<endl;
}

