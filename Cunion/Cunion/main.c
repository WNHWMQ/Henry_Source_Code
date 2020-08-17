//
//  main.c
//  Cunion
//
//  Created by Henry on 2020/5/11.
//  Copyright © 2020 Henry. All rights reserved.
//

#include <stdio.h>
#include <string.h>
 
union Data
{
    int i;
    float f;
    char  str[20];
};//定义一个带有多成员的共用体，但是任何时候只能有一个成员带有值
 
int main( )
{
    union Data data;
 
    data.i = 10;
    printf( "data.i : %d\n", data.i);
   
    data.f = 220.5;
    printf( "data.f : %.1f\n", data.f);
   
    strcpy( data.str, "C Programming");
    printf( "data.str : %s\n\n", data.str);
    
    printf( "data.i : %d\n", data.i);
    printf( "data.f : %.1f\n", data.f);
    printf( "data.str : %s\n", data.str);
 
    return 0;
}
