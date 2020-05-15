//
//  main.c
//  Carray
//
//  Created by Henry on 2020/5/10.
//  Copyright © 2020 Henry. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
/* 要生成和返回随机数的函数 */
int * getRandom(int *r)
{
    int i;
    r = (int *)malloc(10*sizeof(int));
    /* 设置种子 */
    srand( (unsigned)time( NULL ) );
    for ( i = 0; i < 10; ++i)
    {
        r[i] = rand();
        printf( "r[%d] = %d\n", i, r[i]);
    }
 
    return r;
}
 
/* 要调用上面定义函数的主函数 */
int main ()
{
    /* 一个指向整数的指针 */
    int *p = NULL;
    int i;

    p = getRandom(p);
    for ( i = 0; i < 10; i++ )
    {
        printf( "p[%d] : %d\n", i, p[i]);
    }
    return 0;
}
