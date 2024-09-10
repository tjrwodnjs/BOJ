#include <bits/stdc++.h>
using namespace std;

int n,l,a;
deque<pair<int,int>> dq;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>l;
    for(int i=1;i<=n;i++){
        cin>>a;
        while(!dq.empty() && dq.back().first >= a) dq.pop_back();
        dq.push_back({a,i});

        while(!dq.empty() && dq.front().second <= i-l) dq.pop_front();
        cout<<dq.front().first<<' ';
    }
    return 0;
}
