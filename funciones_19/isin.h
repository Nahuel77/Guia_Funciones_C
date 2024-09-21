int isin(int PARTE[], int GRANDE[], int length_PARTE, int length_GRANDE)
{
    int i=0, j=0, k=0, n=0, m=0, in=0;
    int inx[length_GRANDE];
    for(i=0; i<length_GRANDE; i++)
    {
        if(PARTE[0]==GRANDE[i])
        {
            inx[n]=i;
            n++;
        }
    }
    if(n==0)
    {
        return in;
    }
    else{
        for(i=0; i<n; i++)
        {
            k=inx[i];
            for(j=0; j<length_PARTE; j++)
            {
                if(PARTE[j]==GRANDE[k+j])
                {
                    in=1;
                    m++;
                    //printf("seguimiento 1: k:%d j:%d Parte:%d Grande:%d m:%d in:%d\n", k, j, PARTE[j], GRANDE[k+j], m, in);//{6,3,2,4}
                }
                else
                {
                    in=0;
                    m=0;
                    //printf("seguimiento 2: k:%d j:%d Parte:%d Grande:%d m:%d in:%d\n", k, j, PARTE[j], GRANDE[k+j], m, in);
                }
            }
            if(in==1 && m>=length_PARTE)
            {
                return in;
            }
        }
    }
    in=0;
    return in;
}
