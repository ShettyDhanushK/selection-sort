#include <stdio.h> //Header files

void printArray(int arr[], int N)           //Prints the array
{
    for(int i = 0; i < N; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

void swap(int *x, int *y)                   //Swaps x and y
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[], int N)        //The logic of selection sort is implemented
{
    for(int i = 0; i < N - 1; i++)          //Iterates from 0 to N-2
    {
        int min_index = i;                  //Before checking over the entire array of minimum element, current element is our min element

        for(int j = i + 1; j < N; j++)      //Loops from i+1 to N-1
        {
            if(arr[j] < arr[min_index])     //Checks if the j-th element is less than the min element found by the algorithm.
            {
                min_index = j;              //If yes, updates the min_index with the current element index as it is the minimum element.
            }
        }

        if(min_index != i)                  //If min element is not the i-th element
        {
            swap(&arr[min_index], &arr[i]); //If yes, swaps the i-th element with j-th element
        }
    }
}

int main()
{
    int arr[] = {200, 30, 10, 0, 3, 34, 60, 55, 400, 3}; //A demo array to work with.
    int N = sizeof(arr) / sizeof(arr[0]);                //Size of the array

    printArray(arr, N);                                  //Print the array before sorting
    selectionSort(arr, N);                               //Calling the selectionSort to sort the array
    printArray(arr, N);                                  //Print the array after sorting

    return 0;
}





//The time complexity is O(N**2)

//Try to sort the array in descending!!!