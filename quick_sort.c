#include <stdio.h>
/*
Quick Sort
- Select a pivot (start,mid,end)
- Rearrange the array so that elements
to the left are less than the pivot and
to the right are greater than the pivot
- Then do the same for the subarrays
*/

void quick_sort(int[], int, int);

int main(){
    int arr[20], count, i;

    printf("Amount of inputs to be sorted:\n");
    scanf("%d", &count);

    printf("Enter %d integers to be sorted:\n", count);
    for(i = 0; i < count; i++){
        scanf("%d", &arr[i]);
    }

    quick_sort(arr, 0, count - 1);

    printf("Sorted in ascending order:\n");
    for(i = 0; i < count; i++){
        printf("%d ", arr[i]);
    }

}

void quick_sort(int arr[], int l, int h){
    int piv, val1, val2, temp_val;

    if(l < h){
        piv = l;
        val1 = l;
        val2 = h;

        while(val1 < val2){
            while(arr[val1] <= arr[piv] && val1 <= h){
                val1++;
            }
            while(arr[val2] > arr[piv] && val2 >= l){
                val2--;
            }

            if(val1 < val2){
                temp_val = arr[val1];
                arr[val1] = arr[val2];
                arr[val2] = temp_val;
            }
        }

        temp_val = arr[val2];
        arr[val2] = arr[piv];
        arr[piv] = temp_val;

        quick_sort(arr, l, val2 - 1);
        quick_sort(arr, val2 + 1, h);
    }
}