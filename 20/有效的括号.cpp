char porcess(char s)
{
    if(s=='(') return ')';
    if(s=='[') return ']';
    if(s=='{') return '}';
    return 0;
}
bool isValid(char * s){
int a=strlen(s);
if(a%2==1||s[0]==')'||s[0]=='}'||s[0]==']')
return false;
int size=1;
char b[10000];
for(int i=0;i<a;i++)
{
    if(s[i]=='('||s[i]=='['||s[i]=='{')
    {
        b[size]=porcess(s[i]);
        size++;
        continue;
    }
    if(s[i]!=b[size-1])
    {
       return false; 
        
    }
    else
    {
        size--;
    }
}
if(size==1)
return true;
else
return false;
}
