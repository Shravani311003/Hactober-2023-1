#include <stdio.h>

// This function searches for a number in an array and tells you where it's found.
int searchNumber(int array[], int length, int number) {
    for (int i = 0; i < length; i++) {
        if (array[i] == number) {
            return i;  // If we find the number, we say where we found it (the position).
        }
    }
    return -1;  // If we don't find the number, we say it's not in the array (-1).
}

int main() {
    int n;
    printf("How many numbers are there in your list? "); // Ask how many numbers there are.
    scanf("%d", &n);

    int numbers[n];
    printf("Please tell me your numbers one by one: "); // Ask for each number.
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int target;
    printf("What number are you looking for? "); // Ask which number we want to find.
    scanf("%d", &target);

    int result = searchNumber(numbers, n, target);

    if (result != -1) {
        printf("We found your number at position %d in the list!", result); // If we find the number, we say where we found it.
    } else {
        printf("Sorry, we couldn't find your number in the list."); // If we don't find the number, we say it's not in the list.
    }

    return 0;
}
