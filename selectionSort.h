#include <iostream>

using namespace std;
  
// Function to sort the numbers using pointers
void selectionSort(int size, float* array)
{
    int temp;

    // Sort the numbers using pointers
    for (int start = 0; start < size; start++) 
    {
        for (int process = start + 1; process < size; process++) 
        {
            if (*(array + process) < *(array + start)) 
            {
                temp = *(array + start);
                *(array + start) = *(array + process);
                *(array + process) = temp;
            }
        }
    }
  
    // print the numbers
    for (int i = 0; i < size; i++)
        cout << *(array + i) << "  ";
    cout << endl;
}