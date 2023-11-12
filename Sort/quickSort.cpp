#include<iostream>
using namespace std;


void inputArr(
    int arr[], int n
){
    cout<<"Input elements: " << endl;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void printArr( int arr[], int n){
    
         for (int i = 0; i < n; i++){
             cout << arr[i] << " ";
         }
             cout<<endl;
}

int main(){
    int n;
    cout << "Enter the array size:" << endl;
    cin >> n;
    int* array = new int[n];

    inputArr(array, n);
    cout<< "Array before sorted: "<< endl;
    printArr(array, n);




    return 0;
}