//WAP to calculate average,geometric mean ,harmonic mean
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
    int a[10],n,i,sum1=0,sum3=1;
    float sum2=0,avg2,avg1,avg3;  //1 for arithmetic, 2 for harmonic ,3 for geometric
    printf("enter the element of array=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element=");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum1=sum1+a[i];
    }
    avg1=sum1/n;
     for(i=0;i<n;i++)
    {
        sum2=sum2+1/a[i];
    }
    avg2=n/sum2;
     for(i=0;i<n;i++)
    {
        sum3=sum3*a[i];
    }
    avg3=pow(sum3,1/n);

    printf("\narithamic sum=%d\taverage=%f",sum1,avg1);
    printf("\ngeometric sum=%d\tgeometric mean=%f",sum3,avg3);
    printf("\nharmonic sum=%f\t harmonic mean=%f",sum2,avg2);
}
