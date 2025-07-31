#include <stdio.h>
#include <string.h>
char str[100][100];
int n;

void read() {
    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    int i;
    for (i = 0; i < n; i++) {
    	printf("Enter string %d: ", i);
        scanf("%s", str[i]);
    }
}

void sort() {
    char temp[100];
    int i,j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\nStrings Sorted\n");
}

void display() {
    printf("\nString:\n");
    int i;
    for (i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }
}

int menu() {
    int ch;
    printf("\n1.Read Strings\n2.Display Strings\n3.Sort Strings\n4.Exit\n");
    printf("Enter choice: ");
    scanf("%d", &ch);
    return ch;
}

void processString() {
    int choice;
    while (1) {
        choice = menu();
        switch (choice) {
            case 1:
                read();
                break;
            case 2:
                display();
                break;
            case 3:
                sort();
                break;
            case 4:
                printf("Exiting...\n");
                return;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

int main() {
    processString();
    return 0;
}


