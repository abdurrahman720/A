#include<iostream>
#include<climits>
using namespace std;


int main(){
    int n;

    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxN = INT_MIN;
    int minN = INT_MAX;

    for(int i=0; i<n; i++){
        // if(arr[i]>maxN){
        //     maxN = arr[i];
        // }
        // if (arr[i]<minN)
        // {
        //   minN = arr[i];
        // }

        maxN= max(maxN, arr[i]);
        minN= min(minN, arr[i]);
        
    }

    cout<<"max num: "<<maxN<<endl;
    cout<<"min num: "<<minN<<endl;



    return 0;
}