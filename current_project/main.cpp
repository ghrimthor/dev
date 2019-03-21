#include <iostream>
using namespace std;

//function
void printNumber(int x){
  cout << "I am printing an integer" << x << endl;
}

//function overloading
void printNumber(float x){
  cout << "I am printing a float" << x << endl;
}

int main(){

      int a = 54;
      float b = 32.987465;

      printNumber(a);
      printNumber(b); // I can use the same function for different datatype

  }


}
