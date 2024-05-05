#include <stdio.h>

void generate_bar_chart(int array[]) {
    int counts[5] = { 0 }; // Initialize counts for numbers 1 to 5
    int i = 0;

    // Count occurrences of each number in the array
    while (array[i] != -1) {
        int num = array[i];
        if (num >= 1 && num <= 5) {
            counts[num - 1]++;
        }
        i++;
    }

    // Print the bar chart
    for (int j = 0; j < 5; j++) {
        printf("%d: ", j + 1);
        for (int k = 0; k < counts[j]; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    // Example input array
    int array[] = { 1, 5, 2, 5, 5, 3, 1, 4, 1, 2, 1, 3, 5, 5, 1, -1 };

    // Generate and print the bar chart
    generate_bar_chart(array);

    return 0;
}