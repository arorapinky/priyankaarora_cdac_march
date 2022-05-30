#include<stdio.h>
#include<stdlib.h>
int a;
int b=10;
int add (int , int);

int main(int argc, char const *argv[])
{
    int *p = NULL;
    p = (int *) malloc (sizeof (int));
    int res=add(10,29);
    printf("%d res \n",res);
    return 0;
}
int add (int a, int b)
{
    return a+b;
}