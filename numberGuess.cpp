#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void numberGuess()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    // cout << randomNumber;

    cout << "Please select the difficulty level:\n"
         << "1. Easy (10 chances)\n"
         << "2. Medium (5 chances)\n"
         << "3. Hard (3 chances)\n";

    int choice;

    cout << "\nEnter your choice: ";
    cin >> choice;

    int maxAttempts;

    switch (choice)
    {
    case 1:
        maxAttempts = 10;
        cout << "\nGreat! You have selected the Easy difficulty level.\n";
        break;

    case 2:
        maxAttempts = 5;
        cout << "\nGreat! You have selected the Medium difficulty level.\n";
        break;

    case 3:
        maxAttempts = 3;
        cout << "\nGreat! You have selected the Hard difficulty level.\n";
        break;

    default:
        cout << "\nPlease enter valid choice!!\n";
        break;
    }

    cout << "Let's start the game!\n\n";

    int userAttempts = 0;
    bool isGuessed = false;

    while (userAttempts < maxAttempts)
    {
        int userNumber;
        cout << "\nEnter your guess: ";
        cin >> userNumber;

        userAttempts++;

        if (userNumber == randomNumber)
        {
            cout << "Congratulations! You guessed the correct number in " << userAttempts << " attempts.\n";
            isGuessed = true;
            break;
        }
        else if (userNumber > randomNumber)
        {
            cout << "Incorrect! The number is less than " << userNumber << ".\n";
        }
        else
        {
            cout << "Incorrect! The number is greater than " << userNumber << ".\n";
        }
    }

    if (!isGuessed)
    {
        cout << "\nYou have used all your chances. The correct number was " << randomNumber << ". Better luck next time!\n\n";
    }
}

int main()
{
    cout << "\nWelcome to the Number Guessing Game!\nI'm thinking of a number between 1 and 100.\n\n";

    char playAgain;

    do
    {
        numberGuess();
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
        cout << endl;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
