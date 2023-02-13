/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void adjustdown(int *a,int n,int root)
 {
     int parent=root;
     int child=parent*2+1;
     while(child<n)
     {
         if(child+1<n&&a[child+1]>a[child])
         {
             child++;
         }
         if(a[child]>a[parent])
         {
             int tmp=a[child];
             a[child]=a[parent];
             a[parent]=tmp;
             parent=child;
             child=parent*2+1;
         }
         else
         {
             break;
         }
     }
 }
int* getLeastNumbers(int* arr, int arrSize, int k, int* returnSize){
    int *retArr=(int *)malloc(sizeof(int)*k);
    if(k==0)
    {
        *returnSize=k;
        return retArr;
    }
    for(int i=0;i<k;i++)
    {
        retArr[i]=arr[i];
    }
    for(int i=(k-2)/2;i>=0;i--)
    {
        adjustdown(retArr,k,i);
    }
    for(int j=k;j<arrSize;++j)
    {
        if(arr[j]<retArr[0])
        {
            retArr[0]=arr[j];
            adjustdown(retArr,k,0);
        }
    }
    *returnSize=k;
    return retArr;
}