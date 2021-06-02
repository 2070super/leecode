**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){    
    *returnSize=2;
     int a=0;
     int *free=malloc(sizeof(int)*2);
     for(int i=0;i<numbersSize;i++)
     {
         a=numbers[i];
         for(int j=i+1;j<numbersSize;j++)
        {
            if(a+numbers[j]==target)
            {
                free[0]=i+1;
                free[1]=j+1;
                return free;
            }
        }
     }
     return 0;
}
