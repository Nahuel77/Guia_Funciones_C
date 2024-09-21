int potenciar(int a, int b)
{
    int i, n;
    n=a;
    if(b>0)
    {
        for(i=1; i<b; i++)
        {
            n=n*a;
        }
    }else{
        b=b*(-1);
        for(i=1; i<b; i++)
        {
            n=n*a;
        }
    }
    return n;
}
