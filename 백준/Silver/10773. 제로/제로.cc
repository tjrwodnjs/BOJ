#include <bits/stdc++.h>
using namespace std;
int n,a;
stack<int> st;
int main() { 
  scanf("%d", &n);
  for(int i=0;i<n;i++){
    scanf("%d", &a);
    if(a==0)
      st.pop();
    else
      st.push(a);
  }
  int sum=0;
  while(!st.empty()){
    sum+=st.top();
    st.pop();
  }
  printf("%d",sum);
}