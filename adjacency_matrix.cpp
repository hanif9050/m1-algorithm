#include<bits/stdc++.h>
using namespace std;

int main(){
        int n,e;
        cin>>n>>e;
        int mat[n][n];
        memset(mat,0,sizeof(mat));
        while(e--){
            int a,b;
            cin>>a>>b;
            mat[a][b]=1;
            mat[b][a]=1;
        }
        if(mat[2][3]==1){
            cout<<"Connection found";
        }else{
            cout<<"Connection not found";
        }
    return 0;
}
