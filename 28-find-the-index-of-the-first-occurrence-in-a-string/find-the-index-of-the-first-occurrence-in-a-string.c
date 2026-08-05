int strStr(char* haystack, char* needle)
{
    int index=0;
    char *p,*q;

    

    while(*haystack)
    {
        if(*haystack==*needle)
        {
            p=haystack;
            q=needle;

            while(*q && *p==*q)
            {
                p++;
                q++;
            }
            if(*q=='\0')
            return index;
        }
        haystack++;
        index++;
    }
    return -1;
}