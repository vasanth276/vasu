#include <stdio.h>

int main()
{
	int i,j,mat[3][3],transposed_mat[3][3];
    printf("\n enter the elements of the matrix");
    printf("**************");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nmat[%d][%d]=",i,j);
            scanf("%d",& mat[i][j]);
        }
    }
    printf("\nthe elements of the matrix are");
    printf("\n*****************");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
            printf("\t%d",mat[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        transposed_mat[i][j]=mat[j][i];
    }
    printf("\nthe elements of the transposed matrix are");
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
            printf("\t%d",transposed_mat[i][j]);
    }
    return 0;
}
