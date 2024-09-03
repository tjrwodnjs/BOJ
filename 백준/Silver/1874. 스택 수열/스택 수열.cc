#include <bits/stdc++.h>
using namespace std;

int n, arr[100005];
stack<int> st;
vector<string> vt;

int main() {
  cin>>n;
  for(int i=0;i<n;i++) cin>>arr[i];

  int idx = 0;
  for(int i=1;i<=n;i++){
    st.push(i);
    vt.push_back("+");
    while(!st.empty() && st.top() == arr[idx]){
      st.pop();
      vt.push_back("-");
      idx++;
    }
  }

  if(idx != n) cout<<"NO"<<'\n';
  else
    for(auto s:vt)
      cout<<s<<'\n';
}
