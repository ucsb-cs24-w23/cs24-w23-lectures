//example.cpp
#include <iostream>
#include <vector>
#include <queue>
#include <time.h>
#include <algorithm>

using namespace std;

void visualize(vector<int>& nums){
     for(auto item: nums){
        for(int i = 0; i< item;i++){
             cout<<"-";
         }
        cout<<endl;
    }
    cout<<endl;

}
void mystery(vector<int>& v){
    for (int i = 0; i < v.size(); i++){ 
        int index = i;
        for (int j = i + 1; j < v.size(); j++){
            if(v[j] > v[index]){
                index = j;
            }
        }
        if(index != i){
            int temp = v[index];
            v[index] =  v[i];
            v[i] = temp;    
        }
    }
}
void simple_sort(vector<int>& v){
    sort(v.begin(), v.end());
}
void simpe_heap_sort(vector<int>& v){
    priority_queue<int> pq; // O(1)
    for(auto& elem: v){
        pq.push(elem); //O(log n)
    }
    // O(nlog n)
    
    int i = 0;
    while(!pq.empty()){
        v[i] = pq.top(); // store max element : O(1)
        pq.pop(); //delete the top element - element with max value: O(log n)
        i++;
    }
    // O(n logn)
   // overall: O(n logn)

}


int main(int argc, char const *argv[])
{
    srand(time(NULL));
    vector<int> v;
    for(int i = 0; i< 10; i++){
        v.push_back(rand() % 50 + 1);
    }
    cout<<"Before"<<endl;
    visualize(v);
    simple_sort(v);
    cout<<"After"<<endl;
    visualize(v);

    return 0;
}





