#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int targetNumber;
    char targetStr[5];
    char guessStr[5];
    char feedback[5];

   // printf("Enter the 4-digit number for the guessing game (without repeating digits): ");
    scanf("%d", &targetNumber);
    snprintf(targetStr, 5, "%d", targetNumber); // Convert the target number to a string

    if (targetStr[0] == targetStr[1] || targetStr[0] == targetStr[2] || targetStr[0] == targetStr[3] ||
        targetStr[1] == targetStr[2] || targetStr[1] == targetStr[3] || targetStr[2] == targetStr[3]) {
        //printf("Error: The number should not have repeating digits.\n");
        return 1;
    }

    int guess;
    int attempts = 0;

    //printf("Guess the 4-digit number. You can keep guessing until you get it right!\n");

    while (1) {
        int countA = 0;
        int countB = 0;
        //printf("Enter your guess: ");
        scanf("%d", &guess);
        snprintf(guessStr, 5, "%d", guess); // Convert the guess to a string

        if (guessStr[0] == guessStr[1] || guessStr[0] == guessStr[2] || guessStr[0] == guessStr[3] ||
            guessStr[1] == guessStr[2] || guessStr[1] == guessStr[3] || guessStr[2] == guessStr[3]) {
           // printf("Error: The guess should not have repeating digits.\n");
            continue; // Prompt for another guess
        }

        attempts++;

        if (strcmp(targetStr, guessStr) == 0) {
            printf("%s \n", targetStr);
            break; // Exit the loop when the correct number is guessed
        } else {
            for (int i = 0; i < 4; i++) {
                if (guessStr[i] == targetStr[i]) {
                    countA++;
                } else if (strchr(targetStr, guessStr[i]) != NULL) {
                    countB++;
                }
            }

            printf("Feedback: %dA%dB\n", countA, countB);

            if (countA == 4) {
                break; // Exit the loop when all digits are correct
            }
        }
    }

    return 0;
}

