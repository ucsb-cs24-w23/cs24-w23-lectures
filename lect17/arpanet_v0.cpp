
#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <list>
using namespace std;

class graph{
    public:
        graph(int n){
            adjlist = vector<list<int>>(n, list<int>());
        }
        void addedge(int from, int to){
            adjlist[from].push_back(to);
            adjlist[to].push_back(from);
        }
        void display(){
            cout << "display graph\n";
            for(int i = 0; i < adjlist.size(); i++){
                cout << i << " : ";
                for(auto e : adjlist[i]){
                    cout << e << " ";
                }
                cout << endl;

            }
        }
        
        
    private:
        vector<list<int>> adjlist;

};

int main(int argc, char const *argv[])
{
        graph g(4);
        g.addedge(0, 1);
        g.addedge(0, 2);
        g.addedge(1, 2);
        g.addedge(2, 3);
        g.display();

        return 0;
}

