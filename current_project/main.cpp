#include <iostream>
using namespace std;

//sizeof


int main(){

  int arr[5];
  int *pointer0 = &arr[0];
  int *pointer1 = &arr[1];
  int *pointer2 = &arr[2];

  cout << "pointer0 is at " << pointer0 << endl;
  cout << "pointer1 is at " << pointer1 << endl;
  cout << "pointer2 is at " << pointer2 << endl;

}
