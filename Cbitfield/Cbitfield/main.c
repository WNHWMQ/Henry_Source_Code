//
//  main.c
//  Cbitfield
//
//  Created by Henry on 2020/5/11.
//  Copyright © 2020 Henry. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define INT int //不仅可以为类型定义别名，也能为数值定义别名
typedef unsigned int USI; //仅限于为类型定义符号名称
 
/* 定义简单的结构 */
struct Status1
{
  USI  widthValidated;
  USI  heightValidated;
} status1;
 
/* 定义位域结构 */
struct Status2
{
  unsigned INT widthValidated : 1;
  unsigned INT heightValidated : 1;
} status2;

struct Status3
{
    unsigned INT widthValidated : 16;
    unsigned INT heightValidated : 16;
    unsigned INT xValidated : 16;
} status3;


struct
{
  unsigned int age : 3;
} Age;
 
int main( )
{
    //不使用位域的Status1占4（int）*2*8 bit, Status2如果只有一个成员变量 ,只占有2（int）*2*8 bit,若有超过32个成员变量,则占4（int）*2*8 bit
    printf( "Memory size occupied by status1 : %lu\n", sizeof(status1));
    printf( "Memory size occupied by status2 : %lu\n", sizeof(status2));
    printf( "Memory size occupied by status2 : %lu\n", sizeof(status3));
    
    Age.age = 4;
    printf( "Age.age : %d\n", Age.age );
    printf( "Sizeof( Age ) : %lu\n", sizeof(Age) );
    
    Age.age = 7;
    printf( "Age.age : %d\n", Age.age );
    printf( "Sizeof( Age ) : %lu\n", sizeof(Age) );
    
    Age.age = 8; // 二进制表示为 1000 有四位，超出
    printf( "Age.age : %d\n", Age.age );
    printf( "Sizeof( Age ) : %lu\n", sizeof(Age) );
 
    return 0;
}
