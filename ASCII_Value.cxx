#include <stdio.h>
int main()
{
    char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);     
    printf("You entered %c.\n",chr);  
    // Use %d to display ASCII value 
    printf("ASCII value is %d.", chr);  
    return 0;
}