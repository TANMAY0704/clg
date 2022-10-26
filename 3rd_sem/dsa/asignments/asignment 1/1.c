#include <stdio.h>
int main()
{
    int i, j , rows , colums , a[10][10],x;
    printf("\nEnter the rows and colums of the matrix ");
    scanf("%d %d", &i, &j);

    printf("\nEnter the matrix elements : \n");
    for ( rows = 0; rows < i; rows++ )
    {
        for ( colums = 0; colums < j; colums++ )
        {
            printf("element %d,%d ",rows,colums);
            scanf("%d", &a[rows][colums]);
        }
        printf("\n");
    }
    printf("the matrix is:\n");
     for ( rows = 0; rows < i; rows++)
    {
        printf("\n");
        for ( colums = 0; colums < j; colums++ )
        {
          
            printf("%d ", a[rows][colums]);
        }
        
    
    }
    printf("\nTne lower matrix is : ");
    for ( rows = 0; rows < i ; rows++)
    {
        printf("\n");
        for(x=i-rows-1;x>0;x--)
        {
            printf(" ");
        }
        for ( colums = 0; colums < rows+1; colums++ )
        {
            printf("%d ", a[rows][colums]);
           
        }
        
    }
    return 0;
}