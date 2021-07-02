bool isPerfectSquare(int num){
    long long a=0;
for(int i=0;i<65536;i++)
{ 
    a=pow(i,2);
    if(num==a)
    {
        return true;
    }
    if(num<a)
    {
        return false;
    }
}
return 0;
}