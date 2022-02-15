#define max 100
#define max1 10

void init(int *m,int *n)
{
    int i;
    
    for(i=0;i<max;i++)
    {
        m[i]=0;
        n[i]=0;

    }

}

bool isValidSudoku(char** board, int boardSize, int* boardColSize)
{   int a=boardSize,b=*boardColSize;
    int elem[max],count[max];
    int i,j;
    int m,n;
    init(elem,count);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            int a=board[i][j]-'0';
           if(board[i][j]!='.')
           count[board[i][j]]++;
             
             

        }
        for(j=0;j<max;j++)
        {
            if(count[j]>1)
            return false;

        }
        init(count,elem);


    }

  
     for(j=0;j<*boardColSize;j++)
    {
       
        for(i=0;i<boardSize;i++)
        {
            int a=board[i][j]-'0';
           if(board[i][j]!='.')
           count[board[i][j]]++;
             
             

        }
        for(i=0;i<max;i++)
        {
            if(count[i]>1)
            return false;

        }
        init(count,elem);
        


    }
    
    
   
    for(i=0;i<9;i=i+3)
    {
        
        for(j=0;j<9;j=j+3)
         {
             
            init(count,elem);
            for(m=i;m<i+3;m++)
            for(n=j;n<j+3;n++)
            {

            
             if(board[m][n]!='.')
             count[board[m][n]]++;
             if(count[board[m][n]]>1)
            return false;
            
            }
            
            
            
            
        }
        
       
       
       
    }

    

return true;


     
}
