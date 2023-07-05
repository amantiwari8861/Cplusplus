#include <iostream.h>
#include<conio.h>
#include<iostream> using namespace std;
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
        if ((n>0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 
            elements.\n\n";
    }
    // Accept array elements
    cout << "\n-----------------------\n";
    cout << " Enter array elements\n";
    cout << "-----------------------\n";

    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> arr[i];
    }
    
    char ch;
    int ctr;

    do
    {
        // Accept the number to be searched
        int item;
        cout << "\nEnter the element you want to search: ";
        cin >> item;
                   
        // Apply linear search
        ctr = 0;
        for (i = 0; i < n; i++)
        {
       	    ctr++;
            
            if (arr[i] == item)
            {
                cout << "\n" << item << " found at position " << i + 
                1 << endl;
                break;
            }
	
        }
	        
        if (i == n)
           cout << endl << item << " not found in the array\n";

           cout<<"\nNumber of comparisons: "<<ctr;
        
           cout << "\n\nContinue search (y/n):";
           cin >> ch;

    } while ((ch == 'y') || (ch == 'Y'));
}
