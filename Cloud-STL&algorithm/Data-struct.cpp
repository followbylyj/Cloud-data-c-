#include<iostream>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;
 
struct student{ //定义一个名称为 student 的结构体 ，包含四个数据成员 
    string bj;
    int zh; 
    char xb;
};

 // 以student结构体这个数据类型来定义数组stu 。则stu数组的每个单元包含四个数据类型，就是student里面的四个成员 
 
int n,wr;

int main(){
    cin>>n;
	student stu[n+1];
    for(int i=1;i<=n;i++)  
        cin>>stu[i].bj>>stu[i].zh>>stu[i].xb; //给每个stu[i]单元里的 成员读入数据 

    cin>>wr;
    cin>>stu[wr].bj>>stu[wr].zh>>stu[wr].xb;

    for(int i=1;i<=n;i++){
	
        cout<<stu[i].bj<<" "<<stu[i].zh<<" "<<stu[i].xb<<endl;
        }
    return 0;  
}
