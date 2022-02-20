#include <iostream>
using namespace std;

int lawnmower(int arr[]) {
    int swapCount = 0; //start the count from 0

    //starting from the left disk and scanning to the right
    for (int i = 0; i<=arr[i]; i++) {
        for(int j = 0; j < arr[j+2]-1; j+2) {
            if(arr[i] > arr[j+1]) { //is left(0) > right(1)?
                arr[j] = 0; //keep the dark(0) disk on the left
                arr[j+1] = 1; //move the white(1) disk to the right since it is less than the left
                swapCount++; //increase by 1
            }
        }
    }

    //starting from the right disk and scanning to the left
    for (int k = arr[swapCount - 1]; k= 0; k--) {
        if(arr[k] < arr[k+1]) { //is the right(1) < left (0)?
            arr[k] = 1; //if its less, means this is a dark(1), keep on the right 
            arr[k-1] = 0; //if its greateer, means white(0), move to the left
            swapCount++; //increase by 1
        }
    }

    cout << "Swap " << swapCount+1 << " [" << arr[5] << " ]" << endl;
    cout << "Number of swaps: " << swapCount << endl;

    return arr[5], swapCount;
}

int main() {
    int disk[5] = { 1, 0, 0, 1, 1 }; //array of 5 elements -- hardcoded
    int output = lawnmower(disk); //calling the function and adding it to a var of type int.

    cout << output << endl;

    return 0;
}

//*******************************************************************************//
//                                Marco Andrade                                  //
//                       marcoandrade@csu.fullerton.edu                          //
//*******************************************************************************//