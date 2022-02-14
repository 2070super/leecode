bool checkRecord(char * s){
int a=strlen(s);
int b=0,c=0;
for(int i=0;i<a;i++)
{
if(s[i]=='A')
b++;
}
for(int i=0;i<a-2;i++)
{
    if(s[i]=='L'&&s[i+1]=='L'&&s[i+2]=='L')
    c=1;
    }
printf("%d",c);
if(c==1||b>1)
return false;
else
return true;
}