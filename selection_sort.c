#include <stdio.h>
/*
Selection Sort
- Set minimum to location arr[0]
- Search for the smallest element on the list
- replace the min with the smallest
- increment the min value to the next spot and repeat
*/
int main(){
    int count, i, j, min, temp_val;
    int arr[20];

    printf("Amount of inputs to be sorted:\n");
    scanf("%d", &count);

    printf("Enter %d integers to be sorted:\n", count);
    for(i = 0; i < count; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < count - 1; i++){
        min = i;
        for(j = i + 1; j < count; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }

        if(min != i){
            temp_val = arr[i];
            arr[i] = arr[min];
            arr[min] = temp_val;
        }
    }

    printf("Sorted array in ascending order: \n");
    for(i = 0; i < count; i++){
        printf("%d ", arr[i]);
    }
}