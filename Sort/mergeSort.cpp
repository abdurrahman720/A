#include <iostream>
using namespace std;

void inputArr(
    int arr[], int n)
{
    cout << "Input elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void printArr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void merge(int arr[], int l, int mid, int h)
{
    int i = l;       // for 1st sub array ;  l=0
    int j = mid + 1; // for 2nd sub array
    int k = l;       // for new temp array  ; k=0
    int b[h];        // size of temp array

    while (i <= mid && j <= h)
    {
        if (arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    if (i > mid)
    {
        while (j <= h)
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        {
            while (i <= mid)
            {
                b[k] = arr[i];
                i++;
                k++;
            }
        }
    }

    for (k = l; k <= h; k++)
    { // copy temp array to main array
        arr[k] = b[k];
    }
}

void mergeSort(int arr[], int l, int h)
{ // l= lower index h= higher index
    if (l < h)
    {
        int mid = (l + h) / 2;      // divide by mid index
        mergeSort(arr, l, mid);     // divide recursively 1st sub array
        mergeSort(arr, mid + 1, h); // divide recursively 2nd sub array
        merge(arr, l, mid, h);      // merge with sorting
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *array = new int[n];

    inputArr(array, n);
    cout << "Array before sorted: " << endl;
    printArr(array, n);

    mergeSort(array, 0, n - 1);
    cout << "Array after sorted: " << endl;
    printArr(array, n);

    delete[] array;

    return 0;
}