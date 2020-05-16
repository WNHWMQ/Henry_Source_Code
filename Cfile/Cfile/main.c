//
//  main.c
//  Cfile
//
//  Created by Henry on 2020/5/16.
//  Copyright © 2020 Henry. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    FILE *fp = NULL;
    fp = fopen("/tmp/test.txt", "w");
    fprintf(fp, "%s %s %s %d\n", "We", "are", "in", 2020);
    fputs("Hello, my first File\n", fp);
    fclose(fp);
    
    fp = fopen("/tmp/test.txt", "r");
    char buff[255];
    fgets(buff, 255, (FILE*)fp);
    printf("buff:%s", buff);
    fgets(buff, 255, (FILE*)fp);
    printf("buff:%s", buff);
    fclose(fp);
    
    remove("/tmp/test.txt");
    
//    FILE *fp = NULL;
//      char buff[255];
//
//      fp = fopen("/tmp/test.txt", "r");
//      fscanf(fp, "%s", buff);
//      printf("1: %s\n", buff );
//
//      fgets(buff, 255, (FILE*)fp);
//      printf("2: %s\n", buff );
//
//      fgets(buff, 255, (FILE*)fp);
//      printf("3: %s\n", buff );
//      fclose(fp);
}
