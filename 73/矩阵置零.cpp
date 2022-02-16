void setZeroes(int** matrix, int matrixSize, int* matrixColSize){
    int x=matrixSize;
    int y=matrixColSize[0];
    int frist_flag=0;
    int frist_colflag=0;
    for(int i=0;i<y;i++)
    {
        if(!matrix[0][i])
        {
            frist_colflag=1;
            break;
        }
    }
    for(int i=0;i<x;i++)
    {
        if(!matrix[i][0])
        {
            frist_flag=1;
            break;
        }
    }
    for(int i=1;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(!matrix[i][j])
            {
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }
    for (int i = x - 1; i >= 0; i--) 
    {

        for (int j = 1; j < y; j++)
         {
            if (!matrix[i][0] || !matrix[0][j]) 
            {
                matrix[i][j] = 0;
            }

        }
        
    }
 
     if(frist_colflag)
    {
        for(int i=0;i<y;i++)
        {
            matrix[0][i]=0;
        }
    }
    if(frist_flag)
    {
        for(int i=0;i<x;i++)
        {
            matrix[i][0]=0;
        }
    }
   
}