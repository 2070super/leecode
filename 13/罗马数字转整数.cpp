int romanToInt(char * s){
int i=0,sum=0;
int lenth=strlen(s);
for(i=0;i<lenth;i++)
{
    switch(s[i])
    {case'M':sum=sum+1000;break;
     case'D':sum=sum+500;break;
     case'C':
     switch(s[i+1])
     {
         case'D':sum=sum+400;i++;break;
         case'M':sum=sum+900;i++;break;
          default:sum=sum+100;break;
     }
     break;
     case'L':sum=sum+50;break;
     case'X':switch(s[i+1])
     {
        case'L':sum=sum+40;i++;break;
        case'C':sum=sum+90;i++;break;
        default:sum=sum+10;break;
     }
     break;
     case'V':sum=sum+5;break;
     case'I':switch(s[i+1])
     {
         case'V':sum=sum+4;i++;break;
         case'X':sum=sum+9;i++;break;
         default:sum=sum+1;break;
     }

    }
}
return sum;
}