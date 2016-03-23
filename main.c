//
//  main.c
//  FactorialRecursion
//
//  Created by Krishna Ramachandran on 1/12/16.
//  Copyright © 2016 Krishna Ramachandran. All rights reserved.
//

int factorial(int n)
{
    if (n !=1)
    {
        return n * factorial(n - 1);
    }
    return 1;
}

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int sum;
    
    //Print sum of factorial(4)
    
    printf("%d", sum = factorial(4));
    
    return 0;
}
