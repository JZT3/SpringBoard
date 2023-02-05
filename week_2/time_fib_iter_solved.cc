#include <iostream>
#include <iomanip>
#include <chrono>

using namespace std;

int fib(int N){
  int num1 = 1;
  int num2 = 0;
  int fib = 0;

  for(int i=0;i<=N;i++){
    fib=num1+num2;
    num1=num2;
    num2=fib;}

  return fib;
}

int main(){
  for (int N=0; N<20; ++N){
      auto start = chrono::high_resolution_clock::now();

      int64_t f = fact(N);

      auto end = chrono::high_resolution_clock::now();
      auto elapsed = chrono::duration<double>(end-start).count();

      cout << "N=" << setw(2) << N << " "
           << "N!=" << setw(18) << f << " "
           << "elapsed=" << scientific << setprecision(6) << elapsed << " [sec]" << endl;
    }

    return 0;
}
