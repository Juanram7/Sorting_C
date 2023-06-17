#include <stdio.h>
/*
Heap Sort
- Does not behave like the others and uses the concept of a binary heap DS
- Search for the max element in the arr and place it at the last spot
- Continues to do that recursively until the array is sorted
*/
void heapsort(int arr[], int n);
void heapify(int arr[], int n, int i);
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int i, count;

    printf("Amount of integers to be sorted:\n");
    scanf("%d", &count);
    int arr[count];

    printf("Enter %d integers to be sorted:\n", count);
    for(i = 0; i < count; i++){
        scanf("%d", &arr[i]);
    }

    heapsort(arr, count);

    printf("Sorted in ascending order:\n");
    for(i = 0; i < count; i++){
        printf("%d ", arr[i]);
    }
}

void heapsort(int arr[], int n){
    int i;
    for(i = n / 2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }
    for(i = n - 1; i >= 0; i--){
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}