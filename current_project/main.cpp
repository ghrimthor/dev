#include <iostream>
using namespace std;

//reference: useful when a lot a value of variable or variable. 

void passByValue(int x){
  x = 99;
}

void passByReference(int *x){
  *x= 66;
}


int main(){
  int betty = 13;
  int sandy = 13;

  passByValue(betty);
  passByReference(&sandy);

  cout << "Betty is now " << betty << endl;
  cout << "Sandy is now " << sandy << endl;

}
