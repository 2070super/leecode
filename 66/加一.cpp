/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int *p=(int*)malloc(sizeof(int)*(digitsSize+1));//程序要求新建数组
    int i=digitsSize-1;//i为
    memcpy(p,digits,digitsSize*4);//将数组拷贝到新数组
    *returnSize=digitsSize;//将数组大小拷贝到returnsize
    if(digits[digitsSize-1]!=9)//当数组最后一位不为 9
    {
        p[*returnSize-1]+=1;
        return p;
        
    }
   for(;i>=0;i--)//遍历整个数组
    {
            if(i==0&&p[i]==9)//当遍历到第一位且第一位仍为9是时，第一位变为1，后面全部0覆盖。
             { 
                p[0]=1;
                *returnSize+=1;
                 for(int j=1;j<*returnSize;j++)
                {
                    p[j]=0;
                }
            }
            else if(p[i]!=9)//当遍历到不为9的数值时，当前位加一，后面全部0覆盖
            {
             p[i]++;
            for(int j=i+1;j<*returnSize;j++)
                {
                 p[j]=0;
                }
                break;
            }
    }
    return p;
      
 }