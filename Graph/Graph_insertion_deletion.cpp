#include<bits/stdc++.h>
using namespace std;
const int MAX_VERTICES = 100; 
std::vector<std::list<int>> adj(MAX_VERTICES); 
int V,E;

// Function to insert an edge into the graph
void insertEdge(int u, int v) {
    adj[u].push_back(v);
    
}
// Function to delete an edge from the graph
void deleteEdge(int u, int v) {
    // Remove edge u -> v
    adj[u].remove(v);
    
}

// Function to delete a vertex from the graph
void deleteVertex(int vertex) {
    for (int i = 0; i < V; ++i) {
        adj[i].remove(vertex);
    }
    // Clear the adjacency list for the vertex
    adj[vertex].clear();
}

// Function to display the graph
void display() {
    for (int i = 0; i < V; ++i) {
        std::cout << "Vertex " << i << ":";
        for (int neighbor : adj[i]) {
            std::cout << " -> " << neighbor;
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "Enter the number of vertices: ";
    std::cin >> V; // Input number of vertices
    cout<<"Enter the number of Edges: ";
    cin>>E;
    for(int i=0;i<E;i++){
        int a,b;
        cin>>a>>b;
        insertEdge(a,b);
    }
    // Example edges
    // insertEdge(0, 1);
    // insertEdge(0, 4);
    // insertEdge(1, 2);
    // insertEdge(1, 3);
    // insertEdge(1, 4);
    // insertEdge(2, 3);
    // insertEdge(3, 4);

    // Display the initial graph
    std::cout << "Initial graph:" << std::endl;
    display();

    // Deleting an edge
    std::cout << "\nDeleting edge 1 -> 3." << std::endl;
    deleteEdge(1, 3);
    display();

    // Deleting a vertex
    std::cout << "\nDeleting vertex 1." << std::endl;
    deleteVertex(1);
    display();

    return 0;
}
