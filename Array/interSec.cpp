#include<iostream>
using namespace std;

void inputSet(int set[], int &size){
    cout<< "Enter the size of set:" <<endl;
    cin >> size;
    cout << "Enter the elements of the set, separated by spaces:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> set[i];
    }
}


void printSet(const int set[], int size) {
    cout << "Set elements: ";
    for (int i = 0; i < size; i++) {
        cout << set[i] << " ";
    }
    cout << endl;
}

void interSec(const int setA[], int sizeA, const int setB[], const int sizeB, int result[], int &sizeResult){
    sizeResult = 0;

    for (int i = 0; i < sizeA; i++){
        for (int j = 0; j < sizeB; j++){
            if(setA[i] == setB[j]){
                result[sizeResult] = setA[i];
                sizeResult++;
                break;
            }
        }
    }
}

int main(){
     int sizeA, sizeB;
   int arrA[100], arrB[100];
   int result[200];

   inputSet(arrA, sizeA);
   inputSet(arrB, sizeB);

   printSet(arrA, sizeA);
   printSet(arrB, sizeB);

   int sizeResult;

   interSec(arrA,sizeA, arrB, sizeB, result, sizeResult);

    cout << "Union of sets A and B:" << endl;
    printSet(result, sizeResult);

   return 0;
}