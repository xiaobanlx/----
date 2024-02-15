//
#include <iostream>
using namespace std;
int main()
{
  int n,m;
  string s;
  cin>>n>>m>>s;
  string a;
  for(int i=0;i<n;i++){
    while(!a.empty()&&m&&s[i]<a.back()){
      a.pop_back();
      m--;
    }
    a.push_back(s[i]);
  }
  for(int i=0;i<a.size();i++){
    cout<<a[i];
  }
  return 0;
}