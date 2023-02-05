/*
Write a function that, given a positive integer N, RETURNS:
“fizz” if N is divisible by 3
“buzz” if N is divisible by 5
“fizzbuzz” if N is divisible by both 3 and 5
N if none of the above conditions are true
*/

#include <iostream>
using namespace std;

int main() {
  int n;

  cout<<"Enter a number: ";
  cin>>n;

  if(n%3==0 && n%5==0){
    cout<<"fizzbuzz";}
    
  else if(n%5==0){
    cout<<"buzz";}

  else if(n%3==0){
    cout<<"fizz";}

  else{
    cout<<n;
  }
}
