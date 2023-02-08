#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>

using namespace std;

double Fib(int n){
   if(n == 1) return 1;
   if(n == 2) return 1;
   return Fib(n-1) + Fib(n-2);

}

double FibIterative(int n){
    if(n<3) return 1;

    double *arr = new double[n];

    for( int i = 0; i<n;i++){
        arr[i]=0;
    }
    arr[0]= arr[1]= 1; 
    for(int i = 2; i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n-1];

}


int main(int argc, char *argv[]){
  if(argc != 3){
    cerr<<"Usage : "<<argv[0] <<" i/r number"<<endl;
    exit(1);
  }

   clock_t t;
   int n = atoi(argv[2]);
   string algo = string(argv[1]);
   cout.setf(ios::fixed);
   double result;
   
   for(int i=1; i<= n; i++){
      t = clock();
      if(algo=="r"){
        result = Fib(i);
      }else{
        result = FibIterative(i);
      }
      t = clock() - t;
      cout.width(10);
      cout.precision(0);
      cout<<" Fibonacci of "<< setw(2)<< i << " is: " <<setw(45)<<result;
      cout.precision(2);
	  if((double) t*1000/CLOCKS_PER_SEC<1)
      cout<<" Time : "<<setw(4)<<((double)t)*1000000/CLOCKS_PER_SEC<<" microsec"<<endl;
	  else
      cout<<" Time : "<<setw(4)<<((double)t)*1000/CLOCKS_PER_SEC<<" ms"<<endl;

   }
     
}

