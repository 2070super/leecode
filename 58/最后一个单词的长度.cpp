
int lengthOfLastWord(char * s){
int a=strlen(s);
a--;
while(s[a]==' ')
{
    if(a!=0)
    a--;  
    else
    return 0;
}
int b=0;
while(a>=0)
{
    if(s[a]==' ')
    {
       break;
    }
    else  
   {
    b++;
    a--;   
   } 
    
}
return b;
}