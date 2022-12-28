
/*
*Solution: The Towers of Hanoi is a mathematical puzzle. It consists of three rods (or pegs or towers), and a number of disks of different sizes which can slide onto any rod. The puzzle starts with the disks on one rod in ascending order of size, the smallest at the top, thus making a conical shape. The objective of the puzzle is to move the entire stack to another rod, satisfying the following rules:
*Only one disk may be moved at a time.
*Each move consists of taking the upper disk from one of the rods and sliding it onto another rod, on top of the other disks that may already be present on that rod
*No disk may be placed on top of a smaller disk.
*/

/*
algo:
*Move the top n – 1 disks from Source to Auxiliary tower
*Move the nth disk from Source to Destination tower
*Move the n – 1 disks from Auxiliary tower to Destination tower.
*Transferring the top n – 1 disks from Source to Auxiliary tower can again be thought of as a fresh problem and can be solved in the same manner. Once we solve Towers of Hanoi with three disks, we can solve it with any number of disks with the above algorithm.
*/
#include <iostream>
using namespace std;

    void towerOfHanoi(int n, char fromPeg, char toPeg, char auxPeg){
        if(n == 0){
            return;
        }
        else if(n == 1){
            //move only 1 disk, make the move and return
            cout << "Move Disk 1 from Peg " << fromPeg << " to peg " << toPeg <<endl;
            return;
        }
        //move top n-1 disks from A to B using C as auxiliry
        towerOfHanoi(n-1, fromPeg, auxPeg, toPeg );
        
        //move remaining diks from A to C;
        cout << "Move disk "<< n << " from peg " << fromPeg <<" to peg " << toPeg <<endl;

        //move n-1 disks from B to C using A as Auxiliary
        towerOfHanoi(n-1, auxPeg, toPeg, fromPeg);
    }
    int main(){

        int N = 3;
            towerOfHanoi(N, 'A', 'C', 'B');
        return 0;
    }
