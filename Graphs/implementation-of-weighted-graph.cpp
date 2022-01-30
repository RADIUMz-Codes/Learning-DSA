#include <bits/stdc++.h>
using namespace std;
/* -------------------------------------------------------------------------- */
/*                       Implemetation of Wighted Graph                       */
/* -------------------------------------------------------------------------- */

class Graph{
    /* ----------------------------- Adjecency List ----------------------------- */
    map<string, list<pair<string,int>>> l;
public:
    void addEdge(string x, string y, bool bidr, int wt){
        l[x].push_back(make_pair(y,wt));
        if(bidr){
            l[y].push_back(make_pair(x,wt));
        }
    }
    void printGraph(){
        for(auto e:l){
            cout<<e.first<<" -> ";
            for(auto v:e.second){
                cout<<"("<<v.first<<", "<<v.second<<")"<<", ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Graph g;
    g.addEdge("A","B", true, 20);
    g.addEdge("B","C", false, 30);
    g.addEdge("A","C", true, 40);
    g.addEdge("C","D", true, 50);
    g.printGraph();
}