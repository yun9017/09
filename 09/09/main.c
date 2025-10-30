//
//  main.c
//  09
//
//  Created by 한서윤 on 10/30/25.
//

#include <stdio.h>
#define SIZE 5 

int main(void)
{
    int i;
    int a[SIZE] = {1,2,3,4,5};
    int b[SIZE] = {1,2,3,4,6};
    int flag_same =1;

    for(i=0; i<SIZE; i++)
    {
        if (a[i] != b[i])
        {
            printf("%i-th element is diff,\n",i);
            flag_same = 0;
        }
    }
    printf("Are a and b the same? %d\n", flag_same);
    return 0;
}
