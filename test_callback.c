/***********************************************
* A simple C program to demonstrate callback
************************************************/

#include<stdio.h>

/* Add fonction */ 
int sum ( int a , int b);
/* Sub fonction */ 

int process (char *msg, int p1, int p2, int (* p_Callback_funct)(int, int))
{
    //Callback_funct = (int *)p_funct;
    printf("%s = %d\n",msg, p_Callback_funct(5,3));

}

int main()
{
    printf("@add = %d \n", add);
    process("sum",5, 3, add);
    process("sub",5, 3, sub);
    
    return 0;

}

/**
  * @brief Sum of two integers function
  * @param This parameter is an integer
  * @param This parameter is an integer
  * @retval This function returns an integer
  */
int sum ( int a , int b)
{
    return (a+b);
}