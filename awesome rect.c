#include<stdio.h>
int main()
{
    int n,k,m,p,f;
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        scanf("%d",&p);
        for(m=1;m<=p;m++)
        {
            for(f=1;f<=9;f++)
            {
                printf("*");

            }
            if(m<p)
            {
                printf(" ");
            }
        }
        printf("\n");
        for(m=1;m<=p;m++)
        {
            printf("*       *");
            if(m<p)
            {

                printf(" ");
            }


        }
        printf("\n");

        for(m=1;m<=p;m++)
        {
            printf("*       *");
            if(m<p)
            {

                printf(" ");
            }


        }
        printf("\n");
        for(m=1;m<=p;m++)
        {
            for(f=1;f<=9;f++)
            {
                printf("*");

            }
            if(m<p)
            {

                printf(" ");
            }
        }
        printf("\n");

    }
    return 0;
}
//input for exmaple  4 5



