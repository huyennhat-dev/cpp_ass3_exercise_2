#include <iostream>

using namespace std;

int main()
{
    const int MAX_SIZE = 10;
    int arr[MAX_SIZE];
    int size;

    // Prompt the user to enter the number of elements to store in the array
    cout << "Input the number of elements to store in the array (max " << MAX_SIZE << ") : ";
    cin >> size;

    if (size > MAX_SIZE || size < 1) {
        cout << "Invalid input! Please enter a value between 1 and " << MAX_SIZE << endl;
        return 0;
    }

    // Prompt the user to enter the values of the array
    cout << "Input " << size << " number of elements in the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "element " << i + 1 << " : ";
        cin >> *(arr + i); // Use pointer arithmetic to assign the user's input to each element of the array
    }

    int* ptr = arr; // Assign the address of the first element of the array to the pointer

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(ptr + i); // Dereference the pointer to access the element and add it to the sum
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
