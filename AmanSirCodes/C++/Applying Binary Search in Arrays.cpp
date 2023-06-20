#include <iostream.h>
void main()
{
    int arr[20];    // Array to be searched
    int n;      // Number of elements in the array
    int i;

    // Get the number of elements to store in the array
    while (1)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if ((n>) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
    }

    // Accept array elements
    cout << "\n---------------------------------------\n";
    cout << " Enter array elements in ascending order\n";
    cout << "----------------------------------------\n";

    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> arr[i];
    }
    
    char ch;
    do
    {
        // Accept the number to be searched
        int item;
        cout << "\nEnter the element you want to search: ";
        cin >> item;
                   
        // Apply binary search
        int lowerbound = 0;
        int upperbound = n - 1;

        // Obtain the index of the middlemost element
        int mid = (lowerbound + upperbound) / 2; 
        int ctr = 1;
        while ((item != arr[mid]) && (lowerbound <= upperbound)) 
        {
            if (item > arr[mid]) 
                lowerbound = mid + 1; 
            else
                upperbound = mid - 1;
            mid = (lowerbound + upperbound) / 2;
            ctr++;
        }
              
        if (item == arr[mid])
    cout << "\n" << item << " found at position " <<   (mid + 
    1) << endl;
        else
            cout << "\n" << item << " not found in the array" <<
            endl;
        cout<<"\nNumber of comparisons: " <<ctr;
        cout << "\n\nContinue search (y/n):";
        cin >> ch;
    }   while ((ch == 'y') || (ch == 'Y'));
}
