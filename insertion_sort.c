#include <stdio.h>
/*
Insertion algorithm
- Searches for the min value
- Place the value to the beginning of arr
- And repeat until sorted in ascending order
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