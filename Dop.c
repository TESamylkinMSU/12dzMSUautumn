#include <math.h>
#define eps 1.e-10
int z = 0;
for(int i =1;i < len-1,i++)
{
    if (arr[i-1]>arr[i] && arr[i]<arr[i+1])
    {
        k+=1;
        m=i-1-l;
        l=i;
    }
    if (arr[i-1]>arr[i] && fabs(arr[i]-arr[i+1])<eps)
    {
        for(i,i<len-2)
        {
            if (fabs(arr[i]==arr[i+1])<eps && arr[i+1]<arr[i+2])
            {
                z=1;
            }
        }
        if (z==1)
        {
            k+=1;
            m=i-1-l;
            l=i;
            z=0;
        }
    }
    if (fabs(arr[i-1]==arr[i])<eps && arr[i]<arr[i+1])
    {
        for(i,i>2,i--)
        {
            if (arr[i-2]>arr[i-1] && fabs(arr[i-1]-arr[i])<eps)
            {
                z=1;
            }
        }
        if (z==1)
        {
            l=i;
            z=0;
        }
    }
    if (m>p)
    {
        p=m;
    }
}
