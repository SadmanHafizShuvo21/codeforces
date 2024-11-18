#include <bits/stdc++.h>
using namespace std;
const int MAX_VERTICES = 100; // Maximum number of vertices
vector<list<int>> adj(MAX_VERTICES); // Adjacency list
int V,E; // Number of vertices & Edges declared in globally

// Function to insert an edge into the graph
void insertEdge(int u, int v) {
    adj[u].push_back(v);
    // Uncomment the next line for an undirected graph
    // adj[v].push_back(u);
}

// Function to display the graph
void display() {
    for (int i = 0; i < V; ++i) {
        cout << "Vertex " << i << ":";
        for (int neighbor : adj[i]) {
            cout << " -> " << neighbor;
        }
        cout << "\n";
    }
}

int main() {
    cout << "Enter the number of vertices: ";
    cin >> V; // Input number of vertices
    cout<<"Enter the number of Edges: ";
    cin>>E;
    for(int i=0;i<E;i++){
        int vertics,edges;
        cin>>vertics>>edges;
        insertEdge(vertics,edges);
    }
    // Example edges
    // insertEdge(0, 1);
    // insertEdge(0, 4);
    // insertEdge(1, 2);
    // insertEdge(1, 3);
    // insertEdge(1, 4);
    // insertEdge(2, 3);
    // insertEdge(3, 4);

    // Display the graph
    display();

    return 0;
}
