#include <stdio.h>

void insertion_sort(int a[], int length);

int main()
{

    int a[] = {
        8,
        4,
        9,
        5,
        7,
        6,
        3,
        2,
    };
    insertion_sort(a, 8);
    for (int i = 0; i < 8; i++)
        printf("a[%d] = %d\n", i, a[i]);
    return 0;
};

void insertion_sort(int arr[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void sort(int arr, int len)
{
    for (int i = 2; i <= len; i++)
    {
        insertion_sort(arr, 2);
        int j = i - 1;
    };
};

// Javascript
//  function insertionSort(arr) {
//      for (let i = 1; i < arr.length; i++) {
//          currentVal = arr[i];
//          for (let j = i - 1; j >= 0 && arr[j] > currentVal; j--) {
//              arr[j + 1] = arr[j]
//          }
//          arr[j + 1] = currentVal
//      }
//      return arr;
//  }
