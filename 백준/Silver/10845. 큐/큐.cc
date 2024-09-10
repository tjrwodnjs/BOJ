#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int n;
int main()
{
    cin>>n;
    while(n--){
        int a;
        string b;
        cin>>b;
        if(b=="push"){
            cin>>a;
            q.push(a);
        }
        if(b=="pop"){
            if(q.empty()) cout<<"-1"<<'\n';
            else{
                cout<<q.front()<<'\n';
                q.pop();
            }
        }
        if(b=="size") cout<<q.size()<<'\n';
        if(b=="empty") cout<<q.empty()<<'\n';
        if(b=="front"){
            if(q.empty()) cout<<"-1"<<'\n';
            else cout<<q.front()<<'\n';
        }
        if(b=="back"){
            if(q.empty()) cout<<"-1"<<'\n';
            else cout<<q.back()<<'\n';
        }
    }
    return 0;
}
