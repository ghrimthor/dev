#include <iostream>
using namespace std;


int main(){
  int fish = 5;
  cout << &fish << endl; //access memory adress of fish

  int *fishPointer;
  fishPointer = &fish;

  cout << fishPointer << endl;
}
