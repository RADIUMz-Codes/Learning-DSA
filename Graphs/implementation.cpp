#include <iostream>
#include <list>
using namespace std;

/* -------------------------------------------------------------------------- */
/*                            Graph Implementation                            */
/* -------------------------------------------------------------------------- */
class Graph{
	int V;
	list<int> *l;
public:
	Graph(int V){
		this-> V = V;
		l = new list<int> [V];
	}
	void addEdge(int x, int y){
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void printGraph(){
		for(int i =0;i<V;i++){
			cout<<"Vertex "<<i<<" -> ";
			for(auto x:l[i]){
				cout<<x<<", ";
			}
			cout<<"\n";
		}
	}
};

int main()
{
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(2,3);
	g.addEdge(1,3);
	g.printGraph();
}