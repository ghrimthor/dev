#include <iostream>
#include "testclass.hpp"
using namespace std;


int main(){

  testclass testObject;
  testObject.printTest(); //for object

  testclass *testPointer = &testObject;
  testPointer->printTest(); // for pointer arrow member selection operator
}


//To compile: g++ main.cpp testclass.cpp
