#include <stdio.h>
 
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
 
// H�m s?p x?p bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
    // i ph?n t? cu?i c�ng d� du?c s?p x?p
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                haveSwap = true; // Ki?m tra l?n l?p n�y c� swap kh�ng
            }
        }
        // N?u kh�ng c� swap n�o du?c th?c hi?n => m?ng d� s?p x?p. Kh�ng c?n l?p th�m
        if(haveSwap == false){
            break;
        }
    }
}
 
/* H�m xu?t m?ng */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%5d", arr[i]);
}
 
// Driver program to test above functions
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: n");
    printArray(arr, n);
    return 0;
}
