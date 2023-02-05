/*
Write a function that, given a positive integer N, PRINTS:
“fizz” if N is divisible by 3
“buzz” if N is divisible by 5
“fizzbuzz” if N is divisible by both 3 and 5
N if none of the above conditions are true
*/

#include <iostream>
using namespace std;

int main() {
  unsigned int n;
  int i=0;

  cout<<"Enter a number: ";
  cin>>n;

  while(i<=n){
    if(i%5==0 && i%3==0){
      cout<<"fizzbuzz"<<endl;  
    }
  
    else if(i%5==0){
      cout<<"buzz"<<endl;
    }
  
    else if(i%3==0){
      cout<<"fizz"<<endl;
    }
  
    else{
      cout<<i<<endl;
    }
    i++;
  }
  
  
}
