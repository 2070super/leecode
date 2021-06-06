void reverseString(char* s, int sSize){
int a=0,b=sSize-1;
char c;
while(a<b)
{c=s[a];
s[a]=s[b];
s[b]=c;
a++;
b--;
}
return *s;}