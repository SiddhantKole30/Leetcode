int myAtoi(char* s) 
{
    long long int i,num=0;
    char *t=s;
    while(*t==' ')
    t++;

    s=t;

    if(s[0]=='+' || s[0]=='-')
    i=1;
    else
    i=0;

    for(i;s[i];i++)
    {
        if(s[i]>='0' && s[i]<='9'){
            num = num * 10 + s[i] - 48;

            if(s[0]!='-'&&num> INT_MAX)
            return INT_MAX;

            if(s[0]=='-'&&-num<INT_MIN)
            return INT_MIN;
        }
        
        else
        break;
    }  
    if(s[0]=='-')
    return -num;
    else
    return num;
}