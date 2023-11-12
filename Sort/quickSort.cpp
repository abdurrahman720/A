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

int partition( int arr[], int l, int h){
    int pivot = arr[l];
    int start = l;
    int end = h;

  while(start < end){
      while(arr[start] <= pivot){
        start++;
    }
    while(arr[end] >= pivot){
        end--;
    }
    if(start<end){
       swap(arr[start],arr[end]);
    }
  }
  swap(arr[l],arr[end]);

  return end;
}

void quickSort(int arr[], int l, int h){
        if(l<h){
            int loc = partition(arr,l,h); //get new pivot element from partition
            quickSort(arr, l, loc - 1);
            quickSort(arr, loc + 1, h);
        }
}

int main(){
    int n;
    cout << "Enter the array size:" << endl;
    cin >> n;
    int* array = new int[n];

    inputArr(array, n);
    cout<< "Array before sorted: "<< endl;
    printArr(array, n);


 quickSort(array, 0, n - 1);
    cout << "Array after sorted: " << endl;
    printArr(array, n);

    delete[] array;

    return 0;
}