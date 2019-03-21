#include <iostream>
using namespace std;

int tuna = 69; //global variable

int main(){

    int tuna = 20; //local variable
    cout << ::tuna << endl; //use of :: scope resolution operator to access global variable. Usually for different datatype for same name

  }


}
