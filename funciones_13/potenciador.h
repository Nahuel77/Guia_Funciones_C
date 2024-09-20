int potenciador(int x, int b)
{
    int i, n;
    n = x;
    for(i=1; i<b; i++)
    {
        n=n*x;
    }
    return n;
}
