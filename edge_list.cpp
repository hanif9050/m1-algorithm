#include<bits/stdc++.h>
using namespace std;
int main(){
        vector<pair<int,int>>edge;
        int n,e;
        cin>>n>>e;
        while (e--)
        {
            int a,b;
            cin>>a>>b;
            edge.push_back({a,b});
        }
        for(auto p:edge){
            cout<<p.first<<" "<<p.second<<endl;
        }
        
    return 0;
}
