#include <bits/stdc++.h>
using namespace std;

int t,n;
string s,sa;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>t;
    while(t--){
        cin>>s>>n>>sa;
        deque<int> dq;

        int t=0;
        if(sa[1] != ']'){
            for(char c:sa){
                if(c=='[') continue;
                else if(c==',' || c==']') dq.push_back(t), t=0;
                else{
                    t *= 10;
                    t += c - '0';
                }
            }
        }

        bool chk=true, d=true;
        for(char c:s){
            if(c=='R') d=!d;
            else{
                if(dq.empty()) chk=false;
                if(d) dq.pop_front();
                else dq.pop_back();
            }
        }
        if(chk){
            cout<<'[';
            while(!dq.empty()){
                if(d){
                    cout<<dq.front();
                    dq.pop_front();
                }
                else{
                    cout<<dq.back();
                    dq.pop_back();
                }

                if(!dq.empty()) cout<<',';
            }
            cout<<"]\n";
        }
        else cout<<"error\n";
    }
    return 0;
}
