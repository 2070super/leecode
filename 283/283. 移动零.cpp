void moveZeroes(int* nums, int numsSize){
int a=0,b=0;
for(a=0;a<numsSize;a++)
{
    if(nums[a]!=0)
    {
        nums[b]=nums[a];
        b++;
    }
}
for(;b<numsSize;b++)
nums[b]=0;
return *nums;
}