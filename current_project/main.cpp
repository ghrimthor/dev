#include <iostream>
using namespace std;

int factorialFinder(int x){
  if(x == 1){ //base case , break, ending point essential
    return 1;
  }
  else{
    return x*factorialFinder(x-1); //recursion (use of factorialFinder in factorialFinder)
  }
}

int main(){

    cout << factorialFinder(5) << endl;

}
