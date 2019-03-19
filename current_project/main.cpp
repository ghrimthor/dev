#include <iostream>
using namespace std;


class FirstClass{
  public:  // anything after that usable outside the class
    void coolSaying() {
        cout << "Hello Class" << endl;
    }
};

void printSomething(){
  cout << "Hello World" << endl;
}

int main() {
  /* code */
  FirstClass firstObject;
  firstObject.coolSaying();
  printSomething();

}
