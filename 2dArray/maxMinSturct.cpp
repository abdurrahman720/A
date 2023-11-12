#include <iostream>

using namespace std;

struct ValueInfo
{
    int value;
    int row;
    int col;
};

ValueInfo findMaxValue(int** arr, int rows, int cols)
{
    ValueInfo maxInfo;
    maxInfo.value = arr[0][0];
    maxInfo.row = 0;
    maxInfo.col = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maxInfo.value)
            {
                maxInfo.value = arr[i][j];
                maxInfo.row = i;
                maxInfo.col = j;
            }
        }
    }
    return maxInfo;
}

ValueInfo findMinValue(int** arr, int rows, int cols)
{
    ValueInfo minInfo;
    minInfo.value = arr[0][0];
    minInfo.row = 0;
    minInfo.col = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < minInfo.value)
            {
                minInfo.value = arr[i][j];
                minInfo.row = i;
                minInfo.col = j;
            }
        }
    }
    return minInfo;
}

int main()
{
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Dynamically allocate memory for the array
    int** array1 = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        array1[i] = new int[cols];
    }

    cout << "Enter array1:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> array1[i][j];
        }
    }

    cout << "Here's your array1 matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    ValueInfo maxInformation = findMaxValue(array1, rows, cols);
    ValueInfo minInformation = findMinValue(array1, rows, cols);

    cout << "Max value: " << maxInformation.value << endl;
    cout << "Row of max value: " << maxInformation.row << endl;
    cout << "Column of max value: " << maxInformation.col << endl;

    cout << "Min value: " << minInformation.value << endl;
    cout << "Row of min value: " << minInformation.row << endl;
    cout << "Column of min value: " << minInformation.col << endl;

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; i++)
    {
        delete[] array1[i];
    }
    delete[] array1;

    return 0;
}
