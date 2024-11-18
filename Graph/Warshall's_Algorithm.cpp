

// #include <iostream>
// using namespace std;

// // defining the number of vertices
// #define nV 4

// #define INF 999

// void printMatrix(int matrix[nV][nV]);

// // Implementing floyd warshall algorithm
// void floydWarshall(int graph[nV][nV]) {
//   int matrix[nV][nV], i, j, k;

//   for (i = 0; i < nV; i++)
//     for (j = 0; j < nV; j++)
//       matrix[i][j] = graph[i][j];

//   // Adding vertices individually
//   for (k = 0; k < nV; k++) {
//     for (i = 0; i < nV; i++) {
//       for (j = 0; j < nV; j++) {
//         if (matrix[i][k] + matrix[k][j] < matrix[i][j])
//           matrix[i][j] = matrix[i][k] + matrix[k][j];
//       }
//     }
//   }
//   printMatrix(matrix);
// }

// void printMatrix(int matrix[][nV]) {
//   for (int i = 0; i < nV; i++) {
//     for (int j = 0; j < nV; j++) {
//       if (matrix[i][j] == INF)
//         printf("%4s", "INF");
//       else
//         printf("%4d", matrix[i][j]);
//     }
//     printf("\n");
//   }
// }

// int main() {
//   int graph[nV][nV] = {{0, 3, INF, 5},
//              {2, 0, INF, 4},
//              {INF, 1, 0, INF},
//              {INF, INF, 2, 0}};
//   floydWarshall(graph);
// }

#include<bits/stdc++.h>
using namespace std;
#define inf 1e9+7;
int main() {
    int m=4;
    int p[m][m];
    int A[m][m];
    // Input
    /*0 3 999 5
      2 0 999 4
      999 1 0 999
      999 999 2 0*/
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==0){
                p[i][j]=0;
            }
            else{
                p[i][j]=1;
            }
        }
    }
    
    for(int k=0;k<m;k++){
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                
                p[i][j] = p[i][j] || (p[i][k] && p[k][j]);
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