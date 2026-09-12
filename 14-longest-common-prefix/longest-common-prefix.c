char* longestCommonPrefix(char** strs, int strsSize)
{
    static char arr[100000];
    arr[0]='\0';

    if(*strs=='\0')
    return arr;

    int i,j;

    for(i=0;strs[0][i];i++)
    {
        for(j=1;j<strsSize;j++)
        {
            if(strs[j][i]!=strs[0][i])
            return arr;
        }

        arr[i]=strs[0][i];
        arr[i+1]='\0';
    }
    return arr;
}