#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <stdlib.h>
#include <Windows.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    SetConsoleTitle(TEXT("Where are you headed?"));

    string choice;
    cout << "Where ya headed? (Casino, Calculator, Password, Discord, Github)" << endl;
    cin >> choice;
    if (choice == "discord" or choice == "Discord") {
        SetConsoleTitle(TEXT("Discord"));
        cout << "Opening URL";
        string url = "https://discord.gg/EsSZYNhZgs";
        string open = string("start ").append(url);
        system(open.c_str());
    }
    else if (choice == "casino" or choice == "Casino") {
        SetConsoleTitle(TEXT("Casino"));

        int secretNumber = (rand() % 10) + 1;

        int bet;
        string proceed;

        cout << "Hello welcome to the casino, please place your bet in dollar." << endl;
        cin >> bet;

        cout << "Your bet is $" << bet << ". Do you want to continue?" << endl;
        cin >> proceed;

        if (proceed == "yes" or proceed == "Yes") {
            int guess;
            cout << "Enter a number between 1 and 10" << endl;
            cin >> guess;
            if (guess == secretNumber) {
                cout << "Congratulations! You won $" << bet * 2 << ".";
            }
            else {
                cout << "You lost $" << bet << ".";
            }
        }
        else if (proceed == "no" or proceed == "No") {
            cout << "Bet canceled.";
            cout << "Casino closing";
            exit(42);
        }
        else
        {
            cout << "Invalid answer. closing casino \n\n";
        }
    }
    else if (choice == "calculator" or choice == "Calculator") {
        SetConsoleTitle(TEXT("Calculator"));

        string op;
        double num1;
        double num2;

        cout << "Enter a number: ";
        cin >> num1;
        cout << "Enter an operator (+, -, *, /)";
        cin >> op;
        cout << "Enter another number: ";
        cin >> num2;

        if (op == "+") {
            cout << "Result: " << num1 + num2;
        }
        else if (op == "-") {
            cout << "Result: " << num1 - num2;
        }
        else if (op == "*") {
            cout << "Result: " << num1 * num2;
        }
        else if (op == "/") {
            cout << "Result: " << num1 / num2;
        }
        else {
            cout << "Invalid input.";
        }
    }
    else if (choice == "github" or choice == "Github") {
        SetConsoleTitle(TEXT("Github"));
        cout << "Opening URL";
        string url = "https://github.com/iParmo";
        string open = string("start ").append(url);
        system(open.c_str());
    }
    else if (choice == "password" or choice == "Password") {
        string username;
        string password;
        string fileName;

        cout << "What should this file be called? (Please include no spaces or special characters only - and _)" << endl;
        cin >> fileName;
        cout << "The name of the file is " << fileName << ".txt" << endl;
        cout << "Enter your username/email: ";
        cin >> username;
        cout << "Now enter your password: ";
        cin >> password;

        ofstream file;
        file.open(fileName + ".txt");
        file << "Email/Username: " << username << "\nPassword: " << password;
        file.close();

        cout << "Finished.";
    }
}
