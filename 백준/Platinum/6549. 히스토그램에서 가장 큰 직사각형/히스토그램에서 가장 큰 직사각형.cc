#include <bits/stdc++.h>
using namespace std;
int arr[1000005];
int main()
{
    while(1){
        int n;
        cin>>n;

        if(n==0) break;

        for(int i=1;i<=n;i++) cin>>arr[i];
        arr[n+1]=0;

        stack<int> st; st.push(0);
        long long Max=0;
        for(int i=1;i<=n+1;i++){
            while(arr[st.top()] > arr[i]){
                int t=arr[st.top()]; st.pop();
                Max = max(Max, 1LL * t * (i - st.top() - 1));
            }
            st.push(i);
        }
        cout<<Max<<'\n';
    }
    return 0;
}
