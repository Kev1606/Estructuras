#include <iostream>

using namespace std;
  
// Function to sort the numbers using pointers
void selectionSort(int pSize, float* pArray)
{
    float temp;

    // Sort the numbers using pointers
    for (int start = 0; start < pSize; start++) 
    {
        for (int process = start + 1; process < pSize; process++) 
        {
            if (*(pArray + process) < *(pArray + start)) 
            {
                temp = *(pArray + start);
                *(pArray + start) = *(pArray + process);
                *(pArray + process) = temp;
            }
        }
    }
  
    // print the numbers
    for (int actualNumber = 0; actualNumber < pSize; actualNumber++)
        cout << *(pArray + actualNumber) << "  ";
    cout << endl;
}