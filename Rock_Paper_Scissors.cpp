#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    char cha;
    int win = 0;
    int tie = 0;
    int loss = 0;
    do
    {
        int choice;

        cout<< "Rock, Paper Scissors game!\n ";
        cout<< "Press 1 for Rock, 2 for Paper, 3 for Scissors: \n";
        cin>>choice;

        int comp = rand()% 3 + 1;
        cout<< "Your opponent chose:\n "<< comp;
        if(choice == 1 && comp == 1)
        {
            cout<<"Rock make Rock it's a tie! \n";
            tie++;
        }
        else if(choice == 1 && comp == 2)
        {
            cout<<"Rock is covered by Paper the opponent wins! \n";
            loss++;
        }
        else if (choice == 1 && comp == 3)
        {
            cout<<"Rock destroys Scissors you win! \n";
            win++;
        }
        else if(choice == 2 && comp == 1)
        {
            cout<<"Paper covers Rock you win! \n";
            win++;
        }
        else if(choice == 2 && comp == 2)
        {
            cout<<"Paper make Paper it's a tie! \n";
            tie++;
        }
        else if(choice == 2 && comp == 3)
        {
            cout<<"Paper is cut by Scissors the opponent wins!\n";
            loss++;
        }
        else if(choice == 3 && comp == 1)
        {
            cout<<"Scissors are destroyed by Rock opponent wins! \n";
            loss++;
        }
        else if(choice == 3 && comp == 2)
        {
            cout<<"Scissors cuts Paper you win! \n";
            win++;
        }
        else if(choice == 3 && comp == 3)
        {
            cout<<"Scissors make Scissors its a tie! \n";
            tie++;
        }
        else
        {
            cout<<"You must only press 1,2 or 3 \n";
        }
        cout << "Wins: \n" << win << endl;
        cout << "Ties: \n" << tie << endl;
        cout << "Losses: \n" << loss << endl;
        cout << "Do you want to play again? \n";
        cin >> cha;
        system("CLS");
    }
    while(cha == 'Y' || cha == 'y');

    return 0;
}
