#include <stdio.h>

// assuming x is sorted array
int binsearch(int x[], int x_cnt, int to_find) {
    int low, high;
    low = 0;
    high = x_cnt-1;
    while(low <= high) {
        int mid = low + (high-low)/2; // or (low+high)/2 if we dont care about overflow
        if (x[mid] > to_find){
           high = mid-1; 
        } else if (x[mid] < to_find) {
            low = mid+1;
        } else {
            return mid;
        }
    }

    return -1;
}

int main (){
    int arr[] = {1,2,3,4,5,6,7};

    printf("%d\n", binsearch(arr, 7, 4));
    return 0;
}