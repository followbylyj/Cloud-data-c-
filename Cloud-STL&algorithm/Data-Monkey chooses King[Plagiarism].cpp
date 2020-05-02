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
    if(m==1)//只有一只猴子时猴王为1 
       king=1;
    p=q=(linklist)malloc(sizeof(node));//给新节点分配空间 
    head=p;//head指向首元素节点 
    head->num=1;//给第一只猴子编号 
    for(i=1;i<m;i++){//建立m只猴子围成的圆圈 
        p=(linklist)malloc(sizeof(node));//p为等待插入的节点 
        p->num=i+1;//p的编号为i+1 
        q->next=p;//q始终记录尾节点(实质是链表的尾插法) 
        q=p;
    }
    q->next=head;//链表尾指向链表头 

    p=head;//开始计数 
    for(i=1;i<m;i++){//循环m-1轮，淘汰m-1只猴子 
        for(j=1;j<n-1;j++){//让p指向要淘汰的元素的前驱元素 
            p=p->next;
        }
            q=p->next;//q指向要淘汰的猴子 
            
            p->next=q->next;//删除q 
            p=q->next;//一定要让下一次计数起点为被删除元素的后继 
            free(q);//释放q 
    }
    king=p->num;
    free(p);
    cout<<king<<endl;
}

