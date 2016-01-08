/* A Program's Module' For Arthematic Calculations For The Group Project By NEWBie TECH */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.1415
//float convertradian(float a);
//float convertdegree(float a);
int retry();
void ab2();




void main()
{
int i ,ch;

printf(" \n\nWelcome To Arthematic Module                                By:M.D(NewBieTECH)");
printf("\n\nCommand Guide Line:");
printf("\nEnter The Function Number Of Arthematical Calculation OR Use Inbuilt Command:");
printf("\n\n--------------------------------------------------------------------------");
printf("\n\t Function           Number Code        Command Mode");
printf("\n--------------------------------------------------------------------------");
printf("\n\t General(+-*/)       \t1    \t       |-general,-gen,-asmd|");
printf("\n\t Factorial           \t2    \t       |-fact,-factorial|");
printf("\n\t Power               \t3    \t       |-pow,-power,-expo,-exponential|");
printf("\n\t SquareRoot          \t4    \t       |-sqrt,-squareroot,-root|");
printf("\n\t Logarithm           \t5    \t       |-log,-logarithm|");
printf("\n\t Absolute Value      \t6    \t       |-abs,-labs,-magnitude|");
printf("\n\t Trignometric        \t7   \t       |-trig,-arc,-ratios|");
printf("\n\t Angle Conversions   \t8   \t       |-convert,-con|");
printf("\n\n");
top:
printf("Command:");
scanf("%d",&ch);
if(ch==1)
{
    generalarthematic();
}
else if(ch==2)
{
    fact();
}
else if(ch==3)
{
    pow2();
}
else if(ch==4)
{
    sqrt2();
}
else if(ch==5)
{
    log3();
}
else if(ch==6)
{
    abs2();
}
else if(ch==7)
{
    trigono();
}

else if(ch==8)
{
    conversion();
}
getch();
}

void add()
{

 int check ;
 float a,b,sum;
 {
 printf("\n\tEnter 1st Number=");
 scanf("%f",&a);
 printf("\n\tEnter 2nd Number=");
 scanf("%f",&b);
 sum=a+b;
 printf("\n\tThe Sum Is : %.1f",sum);
 check=retry();
    }while(check==1);
}
void sub()
{
 float a,b,sub;
 int check;
 {
 printf("\n\tEnter 1st Number=");
 scanf("%f",&a);
 printf("\n\tEnter 2nd Number=");
 scanf("%f",&b);
 sub=a+b;
 printf("\n\tThe Difference Is : %.1f",sub);
 check=retry();
    }while(check==1);
}
void pro()
{
 float a,b,pro;
 int check;
 {
 printf("\n\tEnter 1st Number=");
 scanf("%f",&a);
 printf("\n\tEnter 2nd Number=");
 scanf("%f",&b);
 pro=a+b;
 printf("\n\tThe Product Is : %.1f",pro);
 check=retry();
    }while(check==1);
}
void div2()
{
 float a,b,div1;
 int check;
 {
 printf("\t\nEnter 1st Number=");
 scanf("%f",&a);
 printf("\n\tEnter 2nd Number=");
 scanf("%f",&b);
 div1=a+b;
 printf("\n\tThe Division Is : %.1f",div1);
 check=retry();
    }while(check==1);
}
void fact()
{
    int i,n,fact=1,check;
    {
    printf("\n\tEnter A Number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=i*fact;
    }
    printf("\t\n\tFactorial of %d (%d!)= %d",n,n,fact);
    check=retry();
    }while(check==1);
}
void pow2()
{
    int check;
    float a,b,pow1;
    {
    printf("Enter The Base =");
    scanf("%f",&a);
    printf("Enter The Power =");
    scanf("%f",&b);
    pow1=pow(a,b);
    printf("\t\n\t%dth power of %d (%d^%d)= %d",b,a,a,b,pow1);
    check=retry();
    }while(check==1);
}
void sqrt2()
{
    int check,n,sqrt1;
    {
    printf("\n\tEnter A Number=");
    scanf("%d",&n);
    sqrt1=sqrt(n);
    printf("\t\n\tSquare Root of %d = %d",n,sqrt1);
    check=retry();
    }while(check==1);
}
void log3()
{
    int check;
    float log1,n;
    {
    printf("Enter The Number = ");
    scanf("%f",&n);
    log1=log(n);
    printf("Logarithm of %.1f is %.f",n,log1);
    check=retry();
    }while(check==1);
}
void abs2()
{
    int check;
    float abs1,n;
    {
    printf("Enter The Number = ");
    scanf("%f",&n);
    abs1=fabs(n);
    printf("Absolute Value of %.1f is %.f",n,abs1);
    check=retry();
    }while(check==1);
}

void conversion()
{
    float n;
    int ch,check;
    printf("\n\n--------------------------------------------------------------------------");
    printf("\n\t Function           Number Code        Command Mode");
    printf("\n--------------------------------------------------------------------------");
    printf("\n\t Degree To Radian    1    \t    |-dr,-degreetoradian");
    printf("\n\t Degree To Grade     2    \t    |-dg,-degreetograde");
    printf("\n\t Radian To Degree    3    \t    |-rd,-radiantodegree");
    printf("\n\t Grade To Degree     4    \t    |-gd,-gradetodegree");
    printf("\n\t Radian To Grade     5    \t    |-rg,-radiantograde");
    printf("\n\t Grade To Radian     6    \t    |-gr,-gradetoradian");
    printf("\n--------------------------------------------------------------------------");
    {
    printf("\nCommand: ");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("\nDegree = ");
        scanf("%f",&n);
        n=n/180*pi;
        printf("Radian=%.2f",n);
    }
    else if(ch==2)
    {
        printf("\nDegree = ");
        scanf("%f",&n);
        n=n/180*200;
        printf("Grade=%.2f",n);
    }
   else if(ch==3)
    {
        printf("\nRadian = ");
        scanf("%f",&n);
        n=n/pi*180;
        printf("Degree = %.2f",n);
    }
   else if(ch==4)
    {
        printf("\nGrade = ");
        scanf("%f",&n);
        n=n/200*180;
        printf("Degree = %.2f",n);
    }
    else if(ch==5)
    {
        printf("\nRadian = ");
        scanf("%f",&n);
        n=n/pi*200;
        printf("Grade=%.2f",n);
    }
   else if(ch==6)
    {
        printf("\nGrade = ");
        scanf("%f",&n);
        n=n/200*pi;
        printf("Radian=%.2f",n);
    }
    check=retry();
}while(check==1);
}
void trigono()
{
    int n,check;
    float r,a;
    printf("\n\n--------------------------------------------------------------------------");
    printf("\n\t Function           Number Code        Command Mode");
    printf("\n--------------------------------------------------------------------------");
    printf("\n\t Sine(Angle)            \t1    \t       |-sine,-s|");
    printf("\n\t Cosine(Angle)          \t2    \t       |-cosine,-cos|");
    printf("\n\t Tangent(Angle)         \t3    \t       |-tangent,-tan|");
    printf("\n\t Arc Sine(Ratio)        \t4    \t       |-asin,-arcsin");
    printf("\n\t Arc Cosine(Ratio)      \t5    \t       |-acos,-ac|");
    printf("\n\t Arc Tangent(Ratio)     \t6    \t       |-atan,-at");
    printf("\n--------------------------------------------------------------------------");
    {
    printf("\n\n Command");
    scanf("%d",&n);
    switch(n)
        {
        case 1:
            {
                printf("\n Angle = ");
                scanf("%f",&a);
                a=(a/180)*pi;
                printf("Sine %d = %.2f",sin(a));
            }

        case 2:
            {
                printf("\n Angle = ");
                scanf("%f",&a);
                a=(a/180)*pi;
                printf("Cos %d = %.2f",cos(a));
            }

        case 3:
            {
                printf("\n Angle = ");
                scanf("%f",&a);
                a=(a/180)*pi;
                printf("Tan %d = %.2f",tan(a));
            }
        case 4:
            {
                printf("\n Ratio = ");
                scanf("%f",&r);
                a=(asin(r)/pi *180 );
                printf("Sin'%.1f = %.2f",r,a);
            }

        case 5:
            {
                printf("\n Ratio = ");
                scanf("%f",&r);
                a =(acos(r)/pi *180 );
                printf("Cos %.1f = %.2f",r,a);
            }

        case 6:
            {
                printf("\n Ratio = ");
                scanf("%f",&r);
                a =(atan(r)/pi *180 );
                printf("Tan %.1f = %.2f",r,a);
            }
        }
        check=retry();
        }while(check==1);
}
void generalarthematic()
{
char ch,check;
printf(" \n\nThis Is General Arthematic Menu ");
printf("\n--------------------------------");
printf("\n\nCommand Guide Line:");
printf("\nEnter The Function Number Of Arthematical Calculation OR Use Inbuilt Command:");
printf("\n\n--------------------------------------------------------------------------");
printf("\n\t Function           Number Code        Command Mode");
printf("\n--------------------------------------------------------------------------");
printf("\n\t Addition            \t1    \t       |-sum,-add|");
printf("\n\t Subtraction         \t2    \t       |-difference,-subtract|");
printf("\n\t Multiply            \t3    \t       |-cross,-multiply,-product|");
printf("\n\t Divide              \t4    \t       |-divide,-division|");
do{
printf("\n\nCommand:");
scanf("%d",&ch);
if(ch==1)
{
    add();
}
else if(ch==2)
{
    sub();
}
else if(ch==3)
{
    pro();
}
else if(ch==4)
{
    div2();
}
check=retry();
}while(check==1);
}

int retry()
{
    char check;
    printf("\n\n\tReDo(R) Or Back(B) ? =");
    check=getche();
    if(check=='R'||check=='r')
    {
       return 1;
    }
    else if (check=='b'||check=='B')
    {
        main();
    }
}
