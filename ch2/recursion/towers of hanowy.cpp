#include <iostream>
using namespace std;

void towersOfHanowy(int n, char fromPeg, char toPeg, char auxPeg){
      if (n == 1 ){
            cout << "moving disks from  " <<  fromPeg  << " to " << toPeg << endl;
            return ;
      }
      towersOfHanowy(n - 1, fromPeg,  auxPeg, toPeg);
      towersOfHanowy(n - 1,  auxPeg, toPeg, fromPeg);
}

int main(){
      towersOfHanowy(5, 'A', 'B', 'C');
}