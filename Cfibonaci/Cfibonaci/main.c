//
//  main.c
//  Cfibonaci
//
//  Created by Henry on 2020/5/17.
//  Copyright © 2020 Henry. All rights reserved.
//

#include <stdio.h>

int fibonaci(int i)
{
   if(i == 0)
   {
      return 0;
   }
   if(i == 1)
   {
      return 1;
   }
   return fibonaci(i-1) + fibonaci(i-2);
}

int main(int argc, const char * argv[]) {
    for (int i=1; i<20; i++) {
        printf("%d\n",fibonaci(i));
    }
}
