#include <stdio.h>
#include <string.h>

int main() {
    char a[30], fs[50] = "", t[3], sd, ed, x[3], s[3], d[3], y[3];
    int i;

    // Input the string to be stuffed
    printf("Enter characters to be stuffed: ");
    scanf("%s", a);

    // Input starting delimiter
    printf("\nEnter a character that represents the starting delimiter: ");
    scanf(" %c", &sd);

    // Input ending delimiter
    printf("\nEnter a character that represents the ending delimiter: ");
    scanf(" %c", &ed);

    // Prepare the delimiters
    x[0] = s[0] = sd;
    x[1] = s[1] = sd;
    x[2] = s[2] = '\0';
    y[0] = d[0] = ed;
    y[1] = d[1] = ed;
    y[2] = '\0';

    // Append starting delimiter to stuffed string
    strcat(fs, x);

    // Process the input string for stuffing
    for (i = 0; i < strlen(a); i++) {
        t[0] = a[i];
        t[1] = '\0';

        if (t[0] == sd) {
            strcat(fs, s); // Duplicate starting delimiter if found
        } else if (t[0] == ed) {
            strcat(fs, d); // Duplicate ending delimiter if found
        } else {
            strcat(fs, t); // Append the character as-is
        }
    }

    // Append ending delimiter to stuffed string
    strcat(fs, y);

    // Output the stuffed string
    printf("\nAfter stuffing: %s\n", fs);

    return 0;
}
