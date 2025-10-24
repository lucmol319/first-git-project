#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "";
    int total_weapons = 0;
    char *entry = strtok(str, ",");
    while (entry != NULL) {
        int slash_count = 0;
        for (int i = 0; entry[i] != '\0'; i++) {
            if (entry[i] == '/') {
                slash_count++;
            }
            if (entry[i] == '('){
                total_weapons++;
            }
        }
        total_weapons += (slash_count + 1);
        entry = strtok(NULL, ",");
    }
    printf("Total number of weapons: %d\n", total_weapons);
    return 0;
}