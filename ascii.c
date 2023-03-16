#include <stdio.h>
int main()
{
    char ch; // variable declaration
    printf("Enter a character:");
    scanf("%c", &ch); // user input
    printf("\n The ascii value of the ch variable is :%d", ch);

    //For Loop
    int k;                               // variable declaration
    for (int k = 0; k <= 255; k = k + 1) // for loop from 0-255
    {
        printf("\nThe ascii value of %c is %d", k, k);
    }
    printf("\n\n");3

    //While Loop
    int sum=0;  // variable initialization    
    int i=0;  // variable initialization
    char name[20];  // variable initialization
    printf("Enter a name: ");  
    scanf("%s", name);  
    while(name[i]!=0)  // while loop  
    {  
        printf("\nThe ascii value of the character %c is %d", name[i],name[i]);  
        sum=sum+name[i];  
        i++;  
    }  
    printf("\nSum of the ascii value of a string is : %d", sum);  

    return 0;
}