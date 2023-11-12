#include<iostream>

using namespace std;

int binary_search(int arr[], int n, int key){
    int s = 0; // starting point s
    int e = n;  //ending point e

    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){
            return mid;
        }

        else if(arr[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n;

    cout<<"Enter size :"<<endl;
    cin>>n;

    int arr1[n];
    for(int i=0; i<n; i++){
        cout << "Enter the vaule of index: " << i << endl;
        cin >> arr1[i];
    }

    int key;
    cout << "enter key:" << endl;
    cin>>key;
    
    cout << binary_search(arr1, n, key) << endl;
}