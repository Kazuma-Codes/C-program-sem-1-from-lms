//Write a program to illustrate various string inbuilt functions (strcmp, strlen, strcpy, strcat).
#include <stdio.h>
#include <string.h>

int main() {
    char name[10];         
    char name2[10] = "DEF";
    
    // Using strcpy to copy "ABC" into name
    strcpy(name, "ABC");
    printf("\nName is: %s", name);
    
    // Using strcat to concatenate name2 to name
    strcat(name, name2);
    printf("\nstrcat(name, name2): %s", name);
    
    // Using strlen to find the length of name after concatenation
    int len;
    len = strlen(name);
    printf("\nstrlen(name): %d", len);
    
    // Using strcmp to compare strings
    if (strcmp(name, name2) == 0)
        printf("\nStrings are equal");
    else
        printf("\nStrings are not the same");
    
    return 0;
}
