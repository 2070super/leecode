int inc (const void * a,const void *b)
 {
return *(int *)a - *(int *)b;
}

int majorityElement(int* nums, int numsSize){
qsort(nums,numsSize,sizeof(int),inc);
int b=numsSize/2;
int ans=nums[b];
return ans;
}