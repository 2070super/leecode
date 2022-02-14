int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes){
  
    int o = matSize;
    int n = matColSize[0];
    if (o* n != r * c) {
        *returnSize = matSize;
        *returnColumnSizes = matColSize;
        return mat;
    }

    *returnSize = r;
    *returnColumnSizes = malloc(sizeof(int) * r);
   int i=0;
    int j=0;
    int m=0;
    int k=0;
    *returnSize=r;
    *returnColumnSizes=(int*)malloc(r*sizeof(int*));
    int** a=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++)
    {
        a[i]=(int*)malloc(c*sizeof(int));
        (*returnColumnSizes)[i]=c;
    }
    for(i=0;i<matSize;i++)
    {
        for(j=0;j<(*matColSize);j++)
        {
            a[m][k++]=mat[i][j];
            if(k==c)
            {
                k=0;
                m++;
            }
        }
    }
    return a;
}