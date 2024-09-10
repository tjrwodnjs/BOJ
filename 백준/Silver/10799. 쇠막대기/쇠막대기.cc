#include <bits/stdc++.h>
using namespace std;

int n;
long long cnt=0;
string s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>s;

    bool chk=true;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            if(s[i+1]==')') cnt+=st.size(), i++;
            else st.push('(');
        }
        else st.pop(), cnt++;
    }
    cout<<cnt;
    return 0;
}
