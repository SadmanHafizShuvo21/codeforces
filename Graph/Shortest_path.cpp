#include<bits/stdc++.h>
using namespace std;
#define inf 1e9+7;
int main() {
    int m=4;
    int p[m][m];
    int A[m][m];
/*7 5 0 0 input
  7 0 0 2
  0 3 0 0
  4 0 1 0*/
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==0){
                p[i][j]=inf;
            }
            else{
                p[i][j]=A[i][j];
            }
        }
    }
    
    for(int k=0;k<m;k++){
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                p[i][j]=min(p[i][j], (p[i][k] + p[k][j]));
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<p[i][j]<<" ";
        }
        cout<<"\n";
    }
}