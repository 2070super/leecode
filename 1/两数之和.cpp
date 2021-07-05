/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *ans=malloc(sizeof(int)*2);
    int b;
    for(int i=0;i<numsSize;i++)
    {
     b=target-nums[i];
     for(int j=i+1;j<numsSize;j++)
     if(b==nums[j])
     {
         ans[0]=i;
         printf("%d",i);
         ans[1]=j;
         printf("%d",j);
         *returnSize = 2;
         return ans;
     } 
     
    }return 0;
}