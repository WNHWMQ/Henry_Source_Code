//
//  main.c
//  Ctype
//
//  Created by Henry on 2020/6/7.
//  Copyright © 2020 Henry. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    
    //判断字母或数字
    int i;
    char str[]="c3po...";
    i=0;
    while (isalnum(str[i])) i++;
    printf ("The first %d characters are alphanumeric.\n",i);
    
    printf("\n");
    
    //判断字母
    i=0;
    char str1[]="C++";
    while (str1[i])
    {
      if (isalpha(str1[i])) printf ("character %c is alphabetic\n",str1[i]);
      else printf ("character %c is not alphabetic\n",str1[i]);
      i++;
    }
    
    printf("\n");
    
    //判断空白字符
    char c;
    i=0;
    char str2[]="Example sentence to test isblank\n";
    while (str2[i])
    {
      c=str2[i];
      if (isblank(c)) c='\n';
      putchar (c);
      i++;
    }
    
    printf("%d",iscntrl("\a"));
    
    return 0;
}
