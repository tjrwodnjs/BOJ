#include <bits/stdc++.h>
using namespace std;

int t, arr[1000005], p[1000005];
stack<int> st;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  for(int i=0;i<1000005;i++) p[i] = -1;
  
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> arr[i];
    while (!st.empty() && arr[st.top()] < arr[i]) {
      p[st.top()] = arr[i];
      st.pop();
    }
    st.push(i);
  }
  for(int i=1;i<=t;i++) cout<<p[i]<<' ';
}
