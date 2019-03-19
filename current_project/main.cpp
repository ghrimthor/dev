#include <iostream>
#include <string>
using namespace std;


class FirstClass{

  private:  // declare variable private usually
    string name;

  public:  // anything after that usable outside the class

    void setName(string str){ //setter function
      name = str;
    }
    string getName(){ //
      return name;
    }

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
  firstObject.setName("Yannick Martz \n");
  cout << firstObject.getName();

  firstObject.coolSaying();
  printSomething();

}
