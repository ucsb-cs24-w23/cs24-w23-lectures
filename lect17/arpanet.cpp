
#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <list>
#include <map>
using namespace std;

class graph{
    public:
        graph(vector<string> nodes){
            for (auto n: nodes){
                adjlist[n] = list<string>();
            }
        }
        void addedge(string from, string to){
            adjlist[from].push_back(to);
            adjlist[to].push_back(from);
        }
        void display(){
            cout << "display graph\n";
            for(auto n : adjlist){
                cout << n.first << " : ";
                for(auto e : n.second){
                    cout << e << " ";
                }
                cout << endl;

            }
        }

        void bfs(string source);
           
    private:
        map<string, list<string>> adjlist; //balanced bst 

};

void graph::bfs(string source){
    queue<string> q;
    map<string, bool> visited;
    for(auto e: adjlist){
        visited[e.first] = false;
    }
    visited[source] = true;
    q.push(source);
    while(!q.empty()){
        string u = q.front();
        cout << " visited :" << u << endl;
        for(auto e: adjlist[u]){
            if(!(visited[e])){
                q.push(e);
                visited[e] = true;
            }

        }
        q.pop();
    }



}

int main(int argc, char const *argv[])
{
        vector <string> v {"UCSB", "UCLA", "SRI", "UTAH"};
        graph g(v);
        g.addedge("UCLA", "SRI");
        g.addedge("UCLA", "UCSB");
        g.addedge("SRI", "UCSB");
        g.addedge("SRI", "UTAH");
        g.display();
        g.bfs("UCSB");

        return 0;
}

