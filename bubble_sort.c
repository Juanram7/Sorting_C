#include <stdio.h>
/*
Bubble Sort - user inputs the integers to sort
- Find smallest value place it at arr[0]
- Repeat the same thing and place it arr[1]
- Repeat until the array is sorted
*/

int main(){
    int count, i, j, swap_var;
    int arr[20];

    printf("Amount of inputs to be sorted?\n", count);
    scanf("%d", &count);

    printf("Enter %d integers, that have to be sorted\n", count);

    for(i = 0; i < count; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < count - 1; i++){
        for(j = 0; j < count - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap_var = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap_var;
            }
        }
    }

    printf("Sorted list in ascending order: \n");
    for(i = 0; i < count; i++){
        printf("%d ",arr[i]);
    }
}