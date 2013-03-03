//
//  main.c
//  Reverse It
//
//  Created by Samuel Kovacs on 10/18/12.
//  Copyright (c) 2012 Samuel Kovacs. All rights reserved.
//
// This program asks the user for a number and reverses it

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // First a variable is initialized this is what the user will enter
    long int userNumber;
    
    // The program asks for the user's number and the user enters it
    printf("Enter number: ");
    scanf("%li", &userNumber);
    
    //  The following is then displayed before the answer is given
    printf("Reversed number: ");
    
    // Then another variable is initialized. This is the answer
    long int answer=0;
    
    // A do loop is used. Any number %0 will give the last digit. Then the user's number is divided by 10 to eliminate the last digit after it is used. The answer is then displayed one digit at a time. The condition is that as long as the userNumber is greater than 0 it will run. However by putting it at the bottom if the user's number is 0 it will still run.
    do
    {
        answer=userNumber%10;
        userNumber=userNumber/10;
        printf("%li", answer);
        
    }
    while (userNumber>0);
    
    return 0;
}
