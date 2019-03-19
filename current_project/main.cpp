#include <iostream>
#include <string>
using namespace std;


class FirstClass{
  private:  // declare variable private usually
    string name; // init of name variable

  public:  // anything after that usable outside the class
    FirstClass(string str){ // this is a constructor same name as the class but a function (never have a return type, no void to put)
      setName(str);
        }
    void setName(string str){ //set function to set our variable name
      name = str;
    }
    string getName(){ //get function to get  our variable name
      return name;
    }
};


int main() {
  /* code */
  FirstClass firstObject("Yannick Martz Junior");
    cout << firstObject.getName();


}
