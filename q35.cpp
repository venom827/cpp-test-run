#include <iostream>
int main(){
    int nums[] = {1,3,5,6,9,11,13,14,16};
    int start = 0;
    int end = sizeof(nums) - 1;
    int middle = (start + end)/2;
    int target = 7;
    while (start <= end){
        middle = (start + end)/2;
        if (target == nums[middle]){
            return middle;
        }
        else if (target > nums[middle]){
            start = middle+1;
            
                
            
        }
        else if(target < nums[middle]){
            end = middle-1;
            
            
        
        }
        

    }
    std::cout << start;
}
/*/    if (start > end){
        std::cout << middle + 1 << "\n";
        
    }
    if (end < 0){
        std::cout << middle;
    }
    */
    