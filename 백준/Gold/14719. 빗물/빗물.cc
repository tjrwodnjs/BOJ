#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> vt;
int arr[505];
int main()
{
    int n,m,a,cnt=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++) scanf("%d",&arr[i]);
    for(int i=1;i<=n;i++){
        int pv=-1;
        for(int j=1;j<=m;j++){
            if(arr[j]>=i){
                if(pv==-1) pv=j;
                else cnt+=j-pv-1, pv=j;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}