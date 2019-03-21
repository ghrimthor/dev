#include <iostream>
using namespace std;

void printArray(int theArray[],int sizeOfArray){ //argument array name[]
  for (int i = 0; i < sizeOfArray; i++){
    cout << theArray[i] << endl;
  }
}

int main(){
//------------------------------------------------------------------------------
    // int array[9];
    // int sum = 0;
    //
    // cout << "Element - Value" << endl;
    //
    // for(int i=0; i<9 ; i++){
    //   array[i] = 99;
    //   cout << i << " ------ " << array[i] << endl;
    //   sum += array[i]; // sum = sum + array[i]
    // }
    // cout << sum << endl;
//------------------------------------------------------------------------------
//with function printArray
  int otherArray[3]={2,4,5};
  printArray(otherArray, (sizeof(otherArray)/sizeof(*otherArray)));
}
