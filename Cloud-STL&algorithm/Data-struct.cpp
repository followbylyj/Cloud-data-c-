#include<iostream>
#include<cstdio>
#include<iomanip>
#include<string>
using namespace std;
 
struct student{ //����һ������Ϊ student �Ľṹ�� �������ĸ����ݳ�Ա 
    string bj;
    int zh; 
    char xb;
};

 // ��student�ṹ�����������������������stu ����stu�����ÿ����Ԫ�����ĸ��������ͣ�����student������ĸ���Ա 
 
int n,wr;

int main(){
    cin>>n;
	student stu[n+1];
    for(int i=1;i<=n;i++)  
        cin>>stu[i].bj>>stu[i].zh>>stu[i].xb; //��ÿ��stu[i]��Ԫ��� ��Ա�������� 

    cin>>wr;
    cin>>stu[wr].bj>>stu[wr].zh>>stu[wr].xb;

    for(int i=1;i<=n;i++){
	
        cout<<stu[i].bj<<" "<<stu[i].zh<<" "<<stu[i].xb<<endl;
        }
    return 0;  
}
