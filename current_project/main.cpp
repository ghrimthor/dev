#include <iostream>
using namespace std;

//sizeof


int main(){

  char c;
  cout <<  sizeof(c) << endl;

  int c;
  cout <<  sizeof(c) << endl;

  double c;
  cout << sizeof(c) << endl;

  double arr[10];
  cout << sizeof(arr) << endl;

  cout << sizeof(arr) / sizeof(arr[0]) << endl; //number of elements in       array arr
}
