#include<bits/stdc++.h>
using namespace std;
template <typename T>   // creating universal graph for any type 

class graph {

    public:
    map<T,list<T> > adj;

    void createEdges(T u,T v,int direction) {
        adj[u].push_back(v);

        if(!direction) {            // if direction == 0 (it is undirected graph) direction == 1 (directed graph)
            adj[v].push_back(u);
        }
    }

    void adjListDisplay() {
    for(auto i:adj) {
        cout << i.first << "-" << " ";
        for(auto j : i.second) {
            cout << j <<" ";
        }

        cout << endl;
    }
}

};


int main() {
    int node;
    cout << "Enter the no. of nodes " << endl;
    cin >> node;

    int edge;
    cout << "Enter the no. of edges " << endl;
    cin >> edge;

    graph<int> g;   // here declare the type of graph 
    
    cout << "Enter the data for edges " << endl;

    for(int i = 1; i <= edge; i++) {
        int u,v;
        cin >> u >> v;

        //Creating an undirected graph
        g.createEdges(u,v,0);
    }
    
    cout << "Here is your graph implemented by Adjacency List" << endl;
    g.adjListDisplay();

}

