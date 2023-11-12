#include<iostream>

using namespace std;

int main(){
   int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
   int T[3][3];

//    for (int i = 0; i < 3; i++){
//     for(int j = i; j < 3; j++){
//         //swap
//         int temp = A[i][j];
//         A[i][j] = A[j][i];
//         A[j][i] = temp;
//     }
//    }

   for (int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      T[j][i] = A[i][j];  //T[1][0] = A[0][1] , T[2][0] = A[0][2]
    }
   }

       // print transpose
       for (int i = 0; i < 3; i++)
       {
           for (int j = 0; j < 3; j++)
           {
               cout << T[i][j] << " ";
           }
           cout << endl;
       }

       return 0;
}