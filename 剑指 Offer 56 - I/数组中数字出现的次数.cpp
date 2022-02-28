int* singleNumbers(int* nums, int numsSize, int* returnSize){
int ret=0;
for(int i=0;i<numsSize;i++)
{
    ret=ret^nums[i];
}
int k=1;
while((ret&k)==0)
{
    k<<=1;
}
int *ans=(int*)malloc(sizeof(int)*2);
ans[0]=ans[1]=0;
for(int i=0;i<numsSize;i++)
{if((nums[i]&k)==0)
{
    ans[0]=ans[0]^nums[i];
}
else
{
    ans[1]=ans[1]^nums[i];
}
   }
 *returnSize=2;
 return ans;
}