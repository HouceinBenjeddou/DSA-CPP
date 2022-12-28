#include <iostream>
#include <string>
using namespace std;
   
   int main(){
    int i, n(0);
    int* arr = new(nothrow) int(n); 
      if(arr == nullptr){
         cout << "memory allocation failed";
      }
      cout << "enter total number of n: ";
      cin >> n;
      cout <<endl;
      //n = sizeof(arr) / sizeof(arr[0]);
         //store number entered by user
            for(i = 0; i< n; i++){
               cout << " enter number " << i + 1 << " : ";
               cin >> arr[i];
            }
               //loop to store largest number to arr(0)
                  for(i = 1; i< n; ++i){
                     if(arr[0] < arr[i]){
                        arr[0] = arr[i];
                     }
                  }
                  cout << endl << "largest number: "<< arr[0];
                  delete [] arr;
      return 0;
   }