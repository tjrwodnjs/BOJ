#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) q.push(i);
    while(q.size()>1){
        q.pop();

        if(q.size()==1) break;
        q.push(q.front());
        q.pop();
    }
    cout<<q.front();
    return 0;
}
