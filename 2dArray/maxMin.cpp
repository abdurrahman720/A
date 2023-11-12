#include <iostream>

using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter the number of rows:";
    cin >> rows;
    cout << "Enter the number of columns:";
    cin >> cols;

    int array1[rows][cols];

    cout << "Enter array1 :" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        { // here i=0 means 1st row
            cin >> array1[i][j];
        }
    }

    int maxValue = array1[0][0];
    int minValue = array1[0][0];

     int maxRow = 0, minRow = 0, maxCol = 0, minCol = 0;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
        {
            if(array1[i][j] > maxValue){
                maxValue = array1[i][j];
                maxRow = i;
                maxCol = j;
            }
            if(array1[i][j] < minValue){
                minValue = array1[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

     cout << "Max Value: " << maxValue << " at row " << maxRow << ", col " << maxCol << endl;
     cout << "Min Value: " << minValue << " at row " << minRow << ", col " << minCol << endl;

}