//
//  main.c
//  FizzBuzz
//
//  Created by Daniel Nomura on 10/6/15.
//  Copyright © 2015 Daniel Nomura. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    for(int a = 1; a < 100; a++) {
        if (a % 3 == 0 && a % 5 == 0) {
            printf("FizzBuzz \n");
        } else if ( a % 3 ==0) {
            printf("Fizz \n");
        } else if (a % 5 == 0) {
            printf("Buzz \n");
        } else {
            printf("%d \n", a);
        }
    }
}