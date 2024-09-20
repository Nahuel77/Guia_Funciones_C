#include <math.h>

float volumen_esfera(int r)
{
    int i;
    float n;
    n=r;
    for(i=1; i<3; i++)
    {
        n=n*r;
    }
    n=n*(3.0/4.0);
    n=n*M_PI;
    return n;
}
