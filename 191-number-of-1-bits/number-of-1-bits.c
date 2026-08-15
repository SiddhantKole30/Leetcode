int hammingWeight(int n)
{
    int c=0;
    for(int pos=31;pos>=0;pos--)
    {
        if(n>>pos&1)
        c++;
    }
    return c;
}