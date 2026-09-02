int reverse(int x)
{
    int rev=0,temp,rem;
    for(temp=x;temp;temp/=10)
    {
        rem=temp%10;
        if(rev>INT_MAX/10 || rev<INT_MIN/10)
        return 0;
        rev=rev*10+rem;
    }
    return rev;
}