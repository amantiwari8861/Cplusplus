#include <bits/stdc++.h>
using namespace std;
void printArray(int[], int);

void merge(int arr[], int low, int mid, int high)
{
    cout << "low:" << low << " mid:" << mid << " high:" << high << endl;
    int const subArrayOne = mid - low + 1;
    int const subArrayTwo = high - mid;

    // Create temp arrays
    int *leftArray = new int[subArrayOne],
        *rightArray = new int[subArrayTwo];

    // Copy data to temp arrays leftArray[] and rightArray[]
    for (int i = 0; i < subArrayOne; i++)
        leftArray[i] = arr[low + i];
    for (int j = 0; j < subArrayTwo; j++)
        rightArray[j] = arr[mid + 1 + j];

    int indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
    int indexOfMergedArray = low;

    // Merge the temp arrays back into arr[low..high]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo)
    {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo])
        {
            arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else
        {
            arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }

    // Copy the remaining elements of
    // low[], if there are any
    while (indexOfSubArrayOne < subArrayOne)
    {
        arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }

    // Copy the remaining elements of
    // high[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo)
    {
        arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}
void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    // cout<<"\tlow:"<<low<<" mid:"<<mid<<" high:"<<high<<endl;
    mergeSort(arr, low, mid);
    // cout<<"low:"<<low<<" mid:"<<mid<<" high:"<<high<<endl;
    mergeSort(arr, mid + 1, high);
    // cout<<"\t\tlow:"<<low<<" mid:"<<mid<<" high:"<<high<<endl;
    merge(arr, low, mid, high);
}
int main()
{
    int arr[] = {45, 87, 67, 23, 87, 98};
    int size = sizeof(arr) / sizeof(int);
    cout << "the unsorted arr is :";
    printArray(arr, size - 1);
    cout << "\n";

    mergeSort(arr, 0, size - 1);

    cout << "\nthe   sorted arr is :";
    printArray(arr, size - 1);
    return 0;
}
void printArray(int arr[], int size)
{
    cout << "[";
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i];
        if (i < size)
        {
            cout << ",";
        }
    }
    cout << "]";
}