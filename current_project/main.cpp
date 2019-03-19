#include <iostream>
#include <string>
using namespace std;


class FirstClass{

  private:  // declare variable private usually
    string name; // init of name variable

  public:  // anything after that usable outside the class

    void setName(string str){ //set function to set our variable name
      name = str;
    }
    string getName(){ //get function to get our variable name
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
