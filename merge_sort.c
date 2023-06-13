#include <stdio.h>
/*
Merge Sort
- Split the array into subarrays
- Continue to split the subarrays
- Once they can no longer be split (meaning they have one element)
- arrays with one element are always sorted
- Then merge these subarrays until they return to the original
but sorted in ascending order
*/

void merge_algo(int arr[], int i, int j);
void merge(int arr[], int coun1, int count2, int count3, int count4);

int main(){
    int arr[20], count, i;

    printf("Amount of elements to be sorted:\n");
    scanf("%d", &count);

    printf("Enter %d integers to be sorted:\n", count);
    for(i = 0; i < count; i++){
        scanf("%d", &arr[i]);
    }

    merge_algo(arr, 0, count - 1);

    printf("Sorted in ascending order:\n");
    for(i = 0; i < count; i++){
        printf("%d ", arr[i]);
    }
}

void merge_algo(int arr[], int i, int j){
    int mid;

    if(i < j){
        mid = (i + j)/2;
        merge_algo(arr, i, mid);
        merge_algo(arr, mid + 1, j);
        merge(arr, i, mid, mid + 1, j);
    }
}

void merge(int arr[], int count1, int count2, int count3, int count4){
    int temp_arr[20];
    int c1, c2, c3;
    c1 = count1;
    c2 = count3;
    c3 = 0;

    while(c1 <= count2 && c2 <= count4){
        if(arr[c1] < arr[c2]){
            temp_arr[c3++] = arr[c1++];
        }
        else{
            temp_arr[c3++] = arr[c2++];
        }
    }

    while(c1 <= count2){
        temp_arr[c3++] = arr[c1++];
    }

    while(c2 <= count4){
        temp_arr[c3++] = arr[c2++];
    }

    for(c1 = count1, c2 = 0; c1 <= count4; c1++, c2++){
        arr[c1] = temp_arr[c2];
    }
}