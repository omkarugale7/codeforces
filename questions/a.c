/* Editor: Omkar Ugale
Time : .12th Feb 2022 */
#include <stdio.h>

struct data
{
    int name;
    int rollno;
};

int main()
{
    struct data arr[8];
    for (int i = 0; i < 8; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        arr[i].name = a;
        arr[i].rollno = b;
    }
    
    
    return 0;
}