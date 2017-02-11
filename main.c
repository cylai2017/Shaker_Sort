
#include <stdio.h>

int* Shaker_Sort(int* array, int length){
    int left = 0;
    int right = length - 1;
    int shift = 0;
    int tmp_1 = 0, tmp_2 = 0;
    
    while( left < right){
        for(int i = left; i < right; i++) {
            if(array[i] > array[i+1]){ //Right shift the biggest value
                tmp_1 = array[i];
                array[i] = array[i+1];
                array[i+1] = tmp_1;
                shift = i;
            }
        }
        right = shift;
        for(int i = right; i > left; i--){
            if(array[i] < array[i-1]){ //Left shift the smallest value
                tmp_2 = array[i];
                array[i] = array[i-1];
                array[i-1] = tmp_2;
                shift = i;
            }
        }
        left = shift;
    }
    return array;
}
