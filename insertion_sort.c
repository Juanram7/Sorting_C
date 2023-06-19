#include <stdio.h>
/*
Insertion algorithm
- Start with the second element
- Essentially the arr is split into a sorted(1st element) and unsorted halves
- The first element will be the sorted portion
- Now compare the values in the unsorted to the sorted element and place it
into its correct position shifting others if necessary
- Continue to pick and compare the unsorted elements until it is sorted in ascending order
*/

int main(){
    int i, j, count, temp_val;

    printf("Amount of integers to be sorted:\n");
    scanf("%d", &count);

    int arr[count];
    printf("Enter the %d integers to be sorted\n", count);
    for(i = 0; i < count; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < count; i++){
        temp_val = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > temp_val){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp_val;
    }

    printf("Sorted in ascending order:\n");
    for(i = 0; i < count; i++){
        printf("%d ", arr[i]);
    }

}