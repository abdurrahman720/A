#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for (int i=1; i<n; i++){
        int curr = arr[i];
        int j = i - 1; //previous index

        while(arr[j]>curr && j>=0){ // previous elements are greater than current
            arr[j+1] = arr[j];  //increase the position to make space for smaller element
            j--; //check again its previous 
        }
        arr[j + 1] = curr; // previous element is smaller than current; assign current to the next position
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}