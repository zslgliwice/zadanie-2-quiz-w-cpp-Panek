#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string name;
string answer;

int main()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(consoleHandle, 8);
    cout << "\aEnter your name: ";
    cin >> name;
    int score = 0;
    system("cls");
    cout << "Starting in..."; Sleep(1000); system("cls");
    cout << "3"; Sleep(1000); system("cls");
    cout << "2"; Sleep(1000); system("cls");
    cout << "1"; Sleep(1000); system("cls");

    SetConsoleTextAttribute(consoleHandle, 15);
    cout << name << ", your first question: \n";
    SetConsoleTextAttribute(consoleHandle, 14);
    cout << "What happens after executing the following code:" << endl << "<p>Text</p>" << endl;
    SetConsoleTextAttribute(consoleHandle, 11);
    cout << "a) A paragraph is created" << endl;
    cout << "b) A list is created" << endl;
    cout << "c) Nothing happens" << endl;
    SetConsoleTextAttribute(consoleHandle, 9);
    cout << "Your answer: ";
    cin >> answer;
    system("cls");
    if (answer == "a")
    {
        score++;
        SetConsoleTextAttribute(consoleHandle, 10);
        cout << "Correct! | Your score: " << score;
    }
    else
    {
        SetConsoleTextAttribute(consoleHandle, 12);
        cout << "Wrong! A paragraph is created! | Your score: " << score;
    }
    Sleep(5000); system("cls");

    // Second Question
    SetConsoleTextAttribute(consoleHandle, 15);
    cout << name << ", your second question: \n";
    SetConsoleTextAttribute(consoleHandle, 14);
    cout << "What happens after executing the following code:" << endl << "<input type=\"button\" value=\"OK\"/>" << endl;
    SetConsoleTextAttribute(consoleHandle, 11);
    cout << "a) A text field is created" << endl;
    cout << "b) A button with the label OK is created" << endl;
    cout << "c) A block with the label OK is created" << endl;
    SetConsoleTextAttribute(consoleHandle, 9);
    cout << "Your answer: ";
    cin >> answer;
    system("cls");
    if (answer == "b")
    {
        score++;
        SetConsoleTextAttribute(consoleHandle, 10);
        cout << "Correct! | Your score: " << score;
    }
    else
    {
        SetConsoleTextAttribute(consoleHandle, 12);
        cout << "Wrong! A button with the label OK is created! | Your score: " << score;
    }
    Sleep(5000); system("cls");

    // Third Question
    SetConsoleTextAttribute(consoleHandle, 15);
    cout << name << ", your third question: \n";
    SetConsoleTextAttribute(consoleHandle, 14);
    cout << "What happens after executing the following code:" << endl << "SELECT name, surname WHERE class like \"3C\"" << endl;
    SetConsoleTextAttribute(consoleHandle, 11);
    cout << "a) A list of names and surnames of students only from class 3C is displayed" << endl;
    cout << "b) Names and surnames of all students in the school, except those from class 3C are displayed" << endl;
    cout << "c) None of the answers is correct." << endl;
    SetConsoleTextAttribute(consoleHandle, 9);
    cout << "Your answer: ";
    cin >> answer;
    system("cls");
    if (answer == "a")
    {
        score++;
        SetConsoleTextAttribute(consoleHandle, 10);
        cout << "Correct! | Your score: " << score;
    }
    else
    {
        SetConsoleTextAttribute(consoleHandle, 12);
        cout << "Wrong! A list of names and surnames of students only from class 3C is displayed! | Your score: " << score;
    }
    Sleep(5000); system("cls");

    SetConsoleTextAttribute(consoleHandle, 13);
    cout << "CONGRATULATIONS, YOU HAVE COMPLETED THE TEST WITH A SCORE OF " << score << " POINTS";
    if (score == 3) {
        cout << " | YOU ANSWERED ALL QUESTIONS CORRECTLY!";
    }
    cout << endl;
    SetConsoleTextAttribute(consoleHandle, 10);
    if (score == 0) {
        cout << "You need more practice <3";
    }
    if (score == 1) {
        cout << "It could be better!";
    }
    if (score == 2) {
        cout << "Almost there!";
    }
    if (score == 3) {
        cout << "You are a programmer!";
    }

    return 0;
}



return 0;
}
