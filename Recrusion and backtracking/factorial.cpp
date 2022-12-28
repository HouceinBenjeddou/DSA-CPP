/*
Fibonacci Series,
 Factorial Finding 
 • Merge Sort,*
  Quick Sort •
   Binary Search • 
   Tree Traversals and many Tree Problems: 
   InOrder, PreOrder PostOrder 
   • Graph Traversals: DFS [Depth First Search] and BFS [Breadth First Search]
    • Dynamic Programming Examples 
    • Divide and Conquer Algorithms 
    • Towers of Hano
*/


#include <iostream>
using namespace std;
    int n;
     int fact(int n);

    int main(){

         cout << "Enter a positive integer: ";
         cin >> n;

         cout << "Factorial of " << n << " = " << fact(n);

        return 0;
    }

    int fact(int n){
        // if(n == 1){ //best case
        //     return 0;
        // }
        // else if(n == 0){
        //     return 1;
        // }

        // else{
        // //recrusive case: multiply n by (n-1) factorial
        //     return n * fact(n-1); 
        // }

        if(n > 1)
        return n * fact(n - 1);
        else
        return 1;
    }