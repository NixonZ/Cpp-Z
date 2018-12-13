#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  for(int i=1;i<=5;i++)
    v.push_back(i);
  cout<<"Output of begin() and end()\n";
  for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<',';
  cout<<"\nOutput of cbegin() and cend()\n";
  for(auto i=v.cbegin();i!=v.cend();i++)
    cout<<*i<<',';
  cout<<"\nOutput of rbegin() and rend()\n";
  for(auto i=v.rbegin();i!=v.rend();i++)
    cout<<*i<<',';
  cout<<"\nOutput of crbegin() and crend()\n";
  for(auto i=v.crbegin();i!=v.crend();i++)
    cout<<*i<<',';
  cout<<"\nSize=" <<v.size()
      <<"\nMax Size=" <<v.max_size()
      <<"\nCapacity=" <<v.capacity();
  cout<<"\nEnter the new size of vector:";
  int n;
  cin>>n;
  v.resize(n);
  cout<<"New size="<<v.size();
  if(v.empty())
    cout<<"\nVector is empty";
  else
    cout<<"\nVector is not empty\n";
  v.shrink_to_fit();
  for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<',';
  cout<<endl<<v[3]<<endl;
  int *pos=v.data();
  cout<<*pos<<endl;
  v.assign(5,10); //fills vector with 10 five times
  for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<',';
  v.insert(v.begin()+3,9);
  cout<<endl;
  for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<',';
  v.erase(v.end());
  cout<<endl;
  for(auto i=v.begin();i!=v.end();i++)
    cout<<*i<<',';
  cout<<endl;
}
