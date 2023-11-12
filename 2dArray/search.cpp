#include<iostream>

using namespace std;


int main(){
        int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
        int row, col;
        int key = 8;
        bool flag = false;

        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                if(A[i][j] == key){
                    flag = true;
                    row = i;
                    col = j;
                }
            }
        }

        if(flag){
            cout<<"elemnet found on :" <<row<<" "<<col<<endl;
        }
        else{
            cout << "elemnet not found";
        }
}