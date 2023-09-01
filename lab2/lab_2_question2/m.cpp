#include "Llb.h"
#include<iostream>
using namespace std;

int main(){
    int arr[] = {12, 4, 5, 6, 7, 8, 8};
    int size = sizeof(arr)/sizeof(int);
    Lbb ob(arr, size);
    ob.printArray();
    // cout << ob.linearSearch(4) << endl;
    // cout << endl;
    // cout << ob.binarySearch(7) << endl;

    // ob.bubbleSort();

    // ob.printArray();
}