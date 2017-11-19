//
//  main.c
//  C 阶乘
//
//  Created by Vic on 2017/9/14.
//  Copyright © 2017年 Vic. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, i, sum = 1;
    scanf("%d", &a);
    for(i = 1; i <= a; i++) {
        sum=sum*i;
    }
    printf("%d\n", sum);
    return 0;
}
