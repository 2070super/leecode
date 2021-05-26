int sumBase(int n, int k){
    int ans=0,i=1;
while(n!=0)
{
    i=n%k;
    ans=ans+i;
    n=n/k;

}
return ans;
}