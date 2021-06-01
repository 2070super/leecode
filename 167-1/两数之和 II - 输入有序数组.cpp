/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int *arr = (int*)malloc(sizeof(int)*2);
    *returnSize = 2;
   
    int head = 0;
    int tail = numbersSize-1;
    while(head < tail)
    {
        if(numbers[head] + numbers[tail] > target)
        {
            tail--;
        }
        else if(numbers[head] + numbers[tail] < target)
        {
            head++;
        }
        else
        {
            arr[0]=head+1;
            arr[1]=tail+1;
            break;
        }
    }
    return arr;
}