int climbStairs(int n){
   if(n==1) return 1;
    if(n==2) return 2;
    int i=1,j=2,sum=0;
   for(int a=3;a<=n;a++)
   {
        sum=i+j;
            i=j;
            j=sum;
   }
   return sum;
}