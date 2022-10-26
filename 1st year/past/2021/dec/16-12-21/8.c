#include <stdio.h>
#include<math.h>
int main()

{
    int i,j,a[10][2];
    float max;
    for(i=0;i<10;i++)
    {
        for(j=0;j<2;j++)
        {
            if(j==0)
            {
                printf("enter x cordinate");
            }
            else
                printf("enter y cordinate");
            scanf("%d",&a[i][j]);
        }
    }
    printf("x y\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        
        }
    printf("\n");
    }
    max=sqrt(((a[0][0]-a[1][0])*(a[0][0]-a[1][0]))+((a[0][1]-a[1][1])*(a[0][1]-a[1][1])));
    for(i=0;i<10;i++)
        {
            for(j=i+1;j<10;j++)
            {
                if(max<sqrt(((a[i][0]-a[j][0])*(a[i][0]-a[j][0]))+((a[i][1]-a[j][1])*(a[i][1]-a[j][1]))))
                    max=sqrt(((a[i][0]-a[j][0])*(a[i][0]-a[j][0]))+((a[i][1]-a[j][1])*(a[i][1]-a[j][1])));
             }

        }
    printf("the distance between the 1st and last point is=%f",max);


}