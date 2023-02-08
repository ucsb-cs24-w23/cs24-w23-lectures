#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>

using namespace std;

int sumArray(int arr[], int N){
  int result=0;
  for(int i=0; i < N; i++)
    result+=arr[i];
  return result;
}

/* Counting steps:
  Initialize                      : 
  Body of loop                    : 
  Loop  increment and check       : 
  Number of iterations of the loop: 
  Return statement                : 
  Total: 
*/




bool searchArray(int arr[], int element, int N){
  for(int i=0; i < N; i++){
    if(arr[i]==element){
      return true;
    }
  }
  return false;
}


bool binarySearch(int arr[], int element, int N){
//Precondition: input array arr is sorted in ascending order
  int begin = 0;
  int end = N-1;
  int mid;
  while (begin <=  end){
    mid = (end + begin)/2;
    if(arr[mid]==element){
      return true;
    }else if (arr[mid]< element){
      begin = mid + 1;        
    }else{
      end = mid - 1;
      
    }
  }
  
  return false;
}



int main(int argc, char *argv[]){
  if(argc < 2){
    cerr<<"Usage : "<<argv[0] <<" sequence of numbers"<<endl;
    exit(1);
  }
  int *arr = new int[argc-1];
  for(int i = 0 ; i < argc -1; i++)
    arr[i] = atoi(argv[i+1]);

  int sum = sumArray(arr, argc-1);

  int searchElem = 10;
  bool result1 = searchArray(arr, searchElem, argc-1);  
  string result2 = binarySearch(arr, searchElem, argc-1)? " exists": " does not exist";

  cout << "The sum of the elements is: "<<sum<<endl;
  cout <<searchElem<< result2  << " in the array"<<endl;
  return 0;

}

