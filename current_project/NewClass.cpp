#include <iostream>
#include "NewClass.h"
using namespace std;

//NewClass.h and NewClass.cpp are separated because then you can exchange your work with other people by giving only the .h file so they can't change the body of functions. Keep for you

NewClass::FunctionTest(){
  //Binary scope resolution :: FunctionTest is a function of NewClass
  //function body or expression
  cout << "I am a constructor" << endl;
}
