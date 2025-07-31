#include <stdio.h>
int main() {
    char str[20];
    int i = 0, j=0, temp;

    printf("Enter a string: ");
    scanf("%s", str); 
    while (str[i] != '\0') {
        i++;
    }
    i--; 
    while (j < i) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}

