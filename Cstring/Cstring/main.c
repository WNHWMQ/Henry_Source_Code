//
//  main.c
//  Cstring
//
//  Created by Henry on 2020/5/10.
//  Copyright © 2020 Henry. All rights reserved.
//

#include <stdio.h>
#include <string.h>
 
int main ()
{
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    //   int  len ;
 
    /* 复制 str1 到 str3 */
    strcpy(str3, str1);
    printf("strcpy( str3, str1) :  %s\n", str3 );
 
    /* 连接 str1 和 str2 */
    strcat( str1, str2);
    printf("strcat( str1, str2):   %s\n", str1 );
 
    /* 连接后，str1 的总长度 */
    size_t len = strlen(str1);
    printf("strlen(str1) :  %zu\n", len );
    
    /* 比较字符串 */
    printf("compare result:%d\n",strcmp(str1, str2));
    
    /* 截取字符串 返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置 */
    printf("char behind 'e' :%s\n",strchr(str1, 'e'));//单引号表示字符
    
    /* 截取字符串 返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置 */
    printf("char behind 'el':%s\n",strstr(str1, "el"));//双引号表示字符串
    
    return 0;
}
