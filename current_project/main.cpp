#include <iostream>
#include <string>
using namespace std;


class FirstClass{
  private:  // declare variable private usually
    string name; // init of name variable

  public:  // anything after that usable outside the class
    FirstClass(){ // this is a constructor same name as the class but a function (never have a return type, no void to put)
      cout << "This is a constructor, will get print automatically when an object from the class is used. It is usually used to init variables" << endl;
    }
    void setName(string str){ //set function to set our variable name
      name = str;
    }
    string getName(){ //get function to get our variable name
      return name;
    }
};


int main() {
  /* code */
  FirstClass firstObject;
  firstObject.setName("Yannick Martz \n");
  cout << firstObject.getName();


}
