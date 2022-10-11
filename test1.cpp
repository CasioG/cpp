#include<stdio.h>
void echanger(int p_v1, int p_v2);

void echangerPointeurs(int *p_v1, int *p_v2);

void echangerReferences(int &p_v1, int &p_v2);

int main()
{
    int a = 100;
    int* p = &a;
    *p = 15;
    printf("%d\n", a);
    printf("%p\n", p);
    printf("\n");


    int* arrayInt = new int[10];
    printf("%p\n", arrayInt);
    arrayInt[0] = 100;
    printf("%d\n", arrayInt[0]);
    printf("\n");

    int v1 = 42;
    int v2 = 13;
    echanger(v1, v2);
    printf("v1 = %d & v2 = %d\n", v1, v2);
    printf("\n");

    v1 = 42;
    v2 = 13;
    echangerPointeurs(&v1, &v2);
    printf("v1 = %d & v2 = %d\n", v1, v2);
    printf("\n");

    v1 = 42;
    v2 = 13;
    echangerReferences(v1, v2);
    printf("v1 = %d & v2 = %d\n", v1, v2);
    printf("\n");


    return 0;
}

void echanger(int p_v1, int p_v2)
{
    int temp = p_v1;
    p_v1 = p_v2;
    p_v2 = temp;
}

void echangerPointeurs(int *p_v1, int *p_v2)
{
    int temp = *p_v1;
    *p_v1 = *p_v2;
    *p_v2 = temp;
}

void echangerReferences(int &p_v1, int &p_v2)
{
    int temp = p_v1;
    p_v1 = p_v2;
    p_v2 = temp;
}