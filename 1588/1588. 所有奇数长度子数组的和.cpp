int sumOddLengthSubarrays(int* arr, int arrSize){
  int sum=0,i,j,k;
    for(i=1;i<=arrSize;i+=2){
        for(k=0;k<=arrSize-i;k++){
            for(j=k;j<k+i;j++){
                sum+=arr[j];
            }
        }
    }
    return sum;
}