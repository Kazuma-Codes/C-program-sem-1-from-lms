//Concatenate Two Strings
#include <stdio.h>

int main() {
    char s1[100] = "programming ", s2[] = "is awesome";
    int length = 0, j;
    
    // Store length of s1 in the length variable
    while (s1[length] != '\0') {
        ++length;
    }
    
    // Concatenate s2 to s1
    for (j = 0; s2[j] != '\0'; ++j, ++length) {
        s1[length] = s2[j];
    }
    
    // Terminate the s1 string
    s1[length] = '\0';
    
    // Print the concatenated result
    printf("After concatenation: ");
    puts(s1);
    
    return 0;
}
