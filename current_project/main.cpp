#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// User defined sizeof macro
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))

void printArray(int array[]){ //argument array name[]
  int sizeOfArray=my_sizeof(array)/my_sizeof(array[0]);
  for (int i = 0; i < sizeOfArray; i++){
    cout << array[i] << endl;
  }
}

int main(){
  int testarray[6] = {2,6,6,8,10,85};
  int MDarray [2][3] = {{2,3,4},{8,9,10}};

  // 2,3,4
  // 8,9,10

  printArray(testarray);
  cout << MDarray[0][2]; // to access 4  [1][1] to access 9

  //To print MDarray
  for(int row = 0; row < 2; row++){
    for(int column = 0; column < 3; column++){
      cout << MDarray[row][column] << " ";
    }
    cout << endl;
  }

}
