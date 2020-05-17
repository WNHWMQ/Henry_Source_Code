//
//  main.c
//  Cpreprocessor
//
//  Created by Henry on 2020/5/17.
//  Copyright © 2020 Henry. All rights reserved.
//

#include <stdio.h>

//取消已定义的 FILE_SIZE，并定义它为 42
#undef  FILE_SIZE
#define FILE_SIZE 42

//只有当 MESSAGE 未定义时，才定义 MESSAGE
#ifndef MESSAGE
   #define MESSAGE "You wish!"
#endif

//传递了 -DDEBUG 开关量,方便调试
#ifdef DEBUG
   /* Your debugging statements here */
#endif

//字符串常量化运算符（#）,把一个宏的参数转换为字符串常量
#define  message_for(a, b)  \
printf(#a " and " #b ": We love you!\n")

//标记粘贴运算符（##),合并两个参数
#define tokenpaster(n) printf ("token" #n " = %d\n", token##n)

//参数列表是括在圆括号内，且必须紧跟在宏名称的后边。宏名称和左圆括号之间不允许有空格
#define MAX(x,y) ((x) > (y) ? (x) : (y))


int main(int argc, const char * argv[]) {
    
    //当前文件名
    printf("File :%s\n", __FILE__ );
    //当前日期
    printf("Date :%s\n", __DATE__ );
    //当前时间
    printf("Time :%s\n", __TIME__ );
    //当前行号
    printf("Line :%d\n", __LINE__ );
    //当编译器以 ANSI 标准编译时，则定义为 1
    printf("ANSI :%d\n", __STDC__ );
    
    message_for(Carole, Debra);
    
    int token34 = 40;
    tokenpaster(34);
    
    printf("Here is the message: %s\n", MESSAGE);
    
    printf("Max between 20 and 10 is %d\n", MAX(10, 20));
}
