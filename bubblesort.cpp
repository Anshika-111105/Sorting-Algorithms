//time complexity =n^2
/*Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.
 This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.
 
Total no. of passes:n-1
Total no. of comparisons:n*(n-1)/2*/
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i =0;i < n - 1; i++) {
        swapped = false;   
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j],arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}
int main()
{
    int arr[] = { 64, 34, 25, -12, 22, 0, 90 };
    int N = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    bubbleSort(arr, N);
    cout << "\nSorted array: \n";
    printArray(arr, N);
    return 0;
}

