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

void unionSets(const int setA[], const int setB[],int sizeA, int sizeB, int result[], int& sizeResult){
    sizeResult = 0;

//copy setA to result[]
    for(int i=0; i<sizeA; i++){
        result[sizeResult] = setA[i];
        sizeResult++;
    }

    for (int i=0; i<sizeB; i++){
        bool isDuplicate = false;

        for (int j = 0; j < sizeResult; j++) {
            if(result[j]==setB[i]){
                isDuplicate = true;
      
            }
        }

            if (!isDuplicate)
            {
                result[sizeResult] = setB[i];
                sizeResult++;
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

   unionSets(arrA, arrB, sizeA, sizeB, result, sizeResult);

    cout << "Union of sets A and B:" << endl;
    printSet(result, sizeResult);

   return 0;
}