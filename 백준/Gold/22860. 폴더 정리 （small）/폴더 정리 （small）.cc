#include <bits/stdc++.h>
using namespace std;
map<string,vector<string>> File, Folder;
int main()
{
    int n,m,k;
    cin>>n>>m;
    for(int i=0;i<n+m;i++){
        string a,b;
        int c;
        cin>>a>>b>>c;
        if(c) Folder[a].push_back(b);
        else File[a].push_back(b);
    }
    cin>>k;
    while(k--){
        string s,folder;
        set<string> st;
        cin>>s;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == '/') break;
            folder = s[i] + folder;
        }

        int cnt=0;
        queue<string> q;
        q.push(folder);
        while(!q.empty()){
            string now = q.front();
            q.pop();
            for(auto i:Folder[now])
                q.push(i);
            
            cnt+=File[now].size();
            for(auto i:File[now])
                st.insert(i);
        }

        printf("%d %d\n",st.size(),cnt);
    }
    return 0;
}