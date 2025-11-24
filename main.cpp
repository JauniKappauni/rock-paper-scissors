#include <iostream>
using namespace std;

int generateRandomNumber()
{
    return rand() % 3 + 1;
}

string numberToChoice(int number)
{
    switch (number)
    {
    case 1:
        return "Rock";
    case 2:
        return "Paper";
    case 3:
        return "Scissors";
    default:
        return "N/a";
    }
}

int main()
{
    srand(time(0));
    cout << "Please enter the action you want to execute\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";

    int action;
    cin >> action;

    if (action != 1 && action != 2 && action != 3)
    {
        cout << "Please choose a action between 1 and 3.";
    }
    else
    {
        int enemy = generateRandomNumber();
        cout << "Enemy chose: " << numberToChoice(enemy) << endl;
        cout << "You chose: " << numberToChoice(action) << endl;

        if (action == enemy)
        {
            cout << "It's a draw.";
        }
        else if ((action == 1 && enemy == 3) ||
                 (action == 2 && enemy == 1) ||
                 (action == 3 && enemy == 2))
        {
            cout << "You win";
        }
        else
        {
            cout << "Enemy wins";
        }
    }
}