#include <iostream>
#include  <ctime>
using namespace std;
int main()
{
    // ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
    time_t now=time(0);
     cout << "1970 ��Ŀǰ��������:" << now << endl;
      tm *ltm = localtime(&now);
 
   // ��� tm �ṹ�ĸ�����ɲ���
   cout << "��: "<< 1900 + ltm->tm_year << endl;
   cout << "��: "<< 1 + ltm->tm_mon<< endl;
   cout << "��: "<<  ltm->tm_mday << endl;
   cout << "ʱ��: "<< ltm->tm_hour << ":";
   cout << ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
    // �� now ת��Ϊ�ַ�����ʽ
    char*dt=ctime(&now);
    cout<<"�������ں�ʱ�䣺"<<dt<<endl;
}