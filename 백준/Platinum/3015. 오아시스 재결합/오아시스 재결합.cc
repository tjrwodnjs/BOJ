#include <bits/stdc++.h>
using namespace std;

int n,arr[500005];
long long cnt;
stack<pair<int,int>> st;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin>>n;
  for(int i=1;i<=n;i++) cin>>arr[i];
  for(int i=1;i<=n;i++){
    while(!st.empty() && st.top().first < arr[i]){
        cnt += st.top().second;
        st.pop();
    }

    int t = 0;
    if(!st.empty()){
        if(st.top().first == arr[i]){
            t = st.top().second;
            cnt+=t;
            st.pop();
            if(!st.empty()) cnt++;
        }
        else cnt++;
    }
    st.push({arr[i], t+1});
  }
  cout<<cnt;
}
