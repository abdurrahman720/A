#include<iostream>

using namespace std;

int linerSearch(int arr[], int n, int key){
    for (int i = 0; i < n;i++){
       if( arr[i] == key){
           return i;
       }
      
    }
     return -1;
}

int main(){
    int n;

    cin>>n;

    int arr1[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    int key;
    cout << "enter key:" << endl;
    cin>>key;

cout<<linerSearch(arr1,n,key)<<endl;

}