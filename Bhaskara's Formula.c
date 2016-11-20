#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,s,a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    s=(b*b)-(4*a*c);
    if(a!=0&&s>0)
        {

            x1=(-b+sqrt(s))/(2*a);
            x2=(-b-sqrt(s))/(2*a);
           printf("R1 = %.5f\nR2 = %.5f\n",x1,x2);
        }
    else
        printf("Impossivel calcular\n");
       return 0;
}
