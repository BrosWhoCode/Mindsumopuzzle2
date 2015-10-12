
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int r=0,o,h,a,n;
    int num,num2,cube,cube2;
    float num1,cube1;
    o=r+1;
    h=o+1;
    a=h+1;
    n=a+1;

    while (num2!=num1 && cube1!=cube2)
    {
    num=o+h+a;
    //printf("num is %d\n\n",num);
    num1=sqrt(num);
    //printf("num1 is %f\n\n",num1);
    num2=(int)num1;
    //printf("num2 is %d\n\n",num2);
    cube=r+o+h+a+n;
    printf("cube is %d\n",cube);
    cube1=pow(cube,1/3);
    printf("cube1 is %f\n",cube1);
    cube2=(int)cube2;
    printf("cube2 is %d\n",cube2);


    r++;
    o++;
    h++;
    a++;
    n++;

    }
    printf("%d is h\n",h);
    return 0;

}

