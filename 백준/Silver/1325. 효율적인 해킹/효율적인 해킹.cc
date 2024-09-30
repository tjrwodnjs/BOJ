#include <bits/stdc++.h>
using namespace std;
int n,m,v[10005];
vector<int> vt[10005];
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
        int a,b; scanf("%d%d",&a,&b);
        vt[b].push_back(a);
    }
    int Max=0;
    vector<int> res;

    for(int i=1;i<=n;i++){
        fill(v,v+10005,0);
        int cnt=1;
        queue<int> q; q.push(i); v[i]=1;
        while(!q.empty()){
            int t=q.front(); q.pop();
            for(auto nx:vt[t]){
                if(!v[nx]) v[nx]=1, q.push(nx), cnt++;
            }
        }

        if(cnt>Max){
            res.clear();
            res.push_back(i);
            Max=cnt;
        }
        else if(cnt==Max) res.push_back(i);
    }
    for(auto i:res) printf("%d ",i);
    return 0;
}
