#include <bits/stdc++.h>
using namespace std;

int s, v[500005], fix[500005];

int f(int n,int k){
    queue<int> q; q.push(n); v[n]=0;
    while(q.size()<=500000 && k<=500000){
        if(v[k]==s || fix[k]) return s;
        s++, k+=s;

        int sz=q.size();
        while(sz--){
            int t=q.front(); q.pop();
            if(t+1<=500000 && v[t+1]!=s && !fix[t+1]){
                if(v[t+1]==s-1) fix[t+1]=1;
                v[t+1]=s, q.push(t+1);
            }
            if(t-1>=0 && v[t-1]!=s && !fix[t-1]){
                if(v[t-1]==s-1) fix[t-1]=1;
                v[t-1]=s, q.push(t-1);
            }
            if(t*2<=500000 && v[t*2]!=s && !fix[t*2]){
                if(v[t*2]==s-1) fix[t*2]=1;
                v[t*2]=s, q.push(t*2);
            }
        }
    }
    return -1;
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<500005;i++) v[i]=-2, fix[i]=0;

    printf("%d\n",f(n, k));
    return 0;
}
