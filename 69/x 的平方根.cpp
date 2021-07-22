int mySqrt(int x){
    
    long a=exp(0.5*log(x));
    long long b=a+1;
   if(b*b>x)
   {
       return a;
   }
   else 
   return b;
   
}
