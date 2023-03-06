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



int main(int argc, char const *argv[])
{
    srand(time(NULL));
    vector<int> v;
    for(int i = 0; i< 10; i++){
        v.push_back(rand() % 50 + 1);
    }
    cout<<"Before"<<endl;
    visualize(v);
    mystery(v);
    cout<<"After"<<endl;
    visualize(v);

    return 0;
}





