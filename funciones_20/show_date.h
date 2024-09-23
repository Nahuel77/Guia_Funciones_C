void show_date(int date[3])
{
    int i;
    for(i=0; i<3; i++)
    {
        if(i!=2)
        {
            printf("%d/", date[i]);
        }
        else
        {
            printf("%d ", date[i]);
        }

    }
}
