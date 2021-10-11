#include <stdio.h>
void swap(int* x)
{
    x[0] = x[0] + x[1];
    x[1] = x[0] - x[1];
    x[0] = x[0] - x[1];
}
int main()
{
    int x[2];
    scanf_s("%d %d", &x[0], &x[1]);
    swap(x);
    printf("%d %d", x[0], x[1]);
    return 0;
}