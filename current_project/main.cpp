#include <iostream>
#include <cmath>

using namespace std;

int main(){

  int age = 21;

  switch(age){

    case 16:
      cout << "Hey you can drive now!" << endl;
    break;

    case 18:
      cout << "You are 18" << endl;
    break;

    case 21:
      cout << "You are 21" << endl;
    break;

    default:
      cout << "we don't know your age" << endl;

  }


}
