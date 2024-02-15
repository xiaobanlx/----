#include <iostream>
using namespace std;
int main()
{
  // 请在此输入您的代码
  int a;
  cin>>a;
  char shape[1000];
  for(int i=0;i<=a;i++)
  {
    cin>>shape[i];
    cout<<shape[i]<<" "<<endl;
    if(shape[i]=="yuanxing")
    shape[i]=1;
    if(shape[i]=="zhengfangxing")
    shape[i=2];
    if(shape[i]=="changfangxing")
    shape[i]=3;
    if(shape[i]=="sanjiaoxing")
    shape[i]=4;
    if(shape[i]=="tuoyuanxing")
    shape[i]=5;
    if(shape[i]=="liubianxing")
    shape[i]=6;
    int sum=0;
    sum+=shape[i];
  }
  cout<<sum<<endl;
  return 0;
}