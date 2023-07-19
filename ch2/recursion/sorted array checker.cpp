#include <iostream>
using namespace std;

int checker(int arr[], int n ){
      if (n == 1) return 1;
      return arr[n] < arr[n - 1] ? 0 : checker( arr , n);
}