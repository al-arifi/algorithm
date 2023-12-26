void sortColors(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++){
        int minIndex = i;
        int j;
        for(j=i+1; j<numsSize; j++){
            if(nums[j]< nums[minIndex]){
                minIndex = j;
            }
        }
        
        int buffer = nums[i];
        nums[i] = nums[minIndex];
        nums[minIndex] = buffer;
    }
}

#include <stdio.h>
int main(){
    int nums[] = {1,6,3,7,4,8};
    int numsSize = 6;
    printf("Before = ");
    for(int i=0;i<numsSize;i++){
        printf("%i ",nums[i]);
    }
    
    sortColors(&nums, numsSize);
    
    printf("\nAfter = ");
    for(int i=0;i<numsSize;i++){
        printf("%i ",nums[i]);
    }
}