#include <iostream>
using namespace std;


int main() {
    string player_name;

    cout << "Enter your name: ";
    cin >> player_name;

    cout << "Ah Trainer! " << player_name << ", I am Professor Oak. Welcome to the world of Pokemon!" << endl;

    cout << "Today is a momentous day youll be choosing your very first Pokemon.\n";
    cout << "Every great Trainer remembers this moment for the rest of their lives.\n";
    cout << "So, choose wisely, young one!\n";
    cout << "You can choose one of the following Pokemon:\n";
    cout << "1. Bulbasaur\n2. Chamander\n3. Squirtle\n";
    cout << "Which Pokemon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;


    if (choice == 1) {
        cout << "You chose Bulbasaur! A wise choice.\n";
    }
    else if (choice == 2) {
        cout << "You chose Charmander! A feiry choice.\n";
    }
    else if (choice == 3) {
        cout << "You chose Squirtle! A cool choice.\n";
    }
    else {
        cout << "Invalid choice. Please restart the game.\n";
    }

    




    return 0;
}
