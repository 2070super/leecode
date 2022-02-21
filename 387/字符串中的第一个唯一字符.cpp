int firstUniqChar(char * s){
  int fuck[26]={0};
    if(strlen(s)==1){
        return 0;
    }else{
        for(int i=strlen(s)-1;i>=0;--i){
            ++fuck[(s[i]-'a')];
        }
        for(int i=0;i<strlen(s);++i){
        if((fuck[(s[i]-'a')]==1)){
            return i;
        }
        }
    }
    return -1;
}