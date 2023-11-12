#include<iostream>
using namespace std;

int main(){
    int rows , cols ;

    cout << "Enter the number of rows:";
    cin >> rows;
    cout << "Enter the number of columns:";
    cin>>cols;

    int array1[rows][cols];
    int array2[rows][cols];
    int sum[rows][cols];
    int diff[rows][cols];

cout<<"Enter array1 :"<<endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){ //here i=0 means 1st row 
            cin >> array1[i][j];
        }
    }
cout<<"Here's your array1 matrix: "<<endl;

for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout << array1[i][j] << " ";
    }
    cout<<endl;
}


cout<<"Enter array2 :"<<endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){ //here i=0 means 1st row 
            cin >> array2[i][j];
        }
    }
cout<<"Here's your array2 matrix: "<<endl;

for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout << array2[i][j] << " ";
    }
    cout<<endl;
}

// sum and difference of arrays

for(int i=0; i<rows; i++){
    for (int j=0; j<cols; j++){
        sum[i][j] = array1[i][j] + array2[i][j];
          diff[i][j] = array1[i][j] - array2[i][j];
    }
}

// print 

cout<<"Here's the sum: "<<endl;

for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout << sum[i][j] << " ";
    }
    cout<<endl;
}
cout<<"Here's the diff: "<<endl;

for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout << diff[i][j] << " ";
    }
    cout<<endl;
}



return 0;
}