#include <iostream>
#include <stdlib.h>


 /*
 This program will promp the user to select either rock, paper, scissors, lizard, or spock. The computer will then randomly select a choice and compare the choice to the users choice. The program then determines the winner and prints out who won.
 */
 // NOTE: used super repetitive if/else if statements because that is what was asked in the Codecademy assignment. Might go back and improve this.
int main() {
 
  // Live long and prosper
 srand (time(NULL));
 
 int computer = rand() % 3 + 1;
 
 int user = 0;

 std::cout << "====================\n";
std::cout << "rock, paper, scissors, lizard, spock!\n";
std::cout << "====================\n";
 
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "4) 🦎\n";
std::cout << "5) 🖖\n";
 
std::cout << "shoot! ";

std::cin >> user;

if (user == 1 && computer == 2) {
  std::cout << "You lost!\n";
} else if (user == 1 && computer == 1) {
  std::cout << "You tie.\n";
} else if (user == 1 && computer == 3) {
  std::cout << "You win!\n";
} else if (user == 1 && computer == 4) {
  std::cout << "You win!\n";
} else if (user == 1 && computer == 5) {
  std::cout << "You lose!\n";
}
else if (user == 2 && computer = 1) {
  std::cout << "You win!\n";
} else if (user == 2 && computer = 2) {
  std::cout << "You tie.\n";
} else if (user == 2 && computer = 3) {
  std::cout << "You lose!\n";
} else if (user == 2 && computer = 4) {
  std::cout << "You lose!\n";
} else if (user == 2 && computer = 5) {
  std::cout << "You win!\n";
}
else if (user == 3 && computer = 1) {
  std::cout << "You lose!\n";
} else if (user == 3 && computer = 2) {
  std::cout << "You win!\n";
} else if (user == 3 && computer = 3) {
  std::cout << "You tie.\n";
} else if (user == 3 && computer = 4) {
  std::cout << "You win!\n";
} else if (user == 3 && computer = 5) {
  std::cout << "You lose!\n";
}

else if (user == 4 && computer = 1) {
  std::cout << "You lose!\n";
} else if (user == 4 && computer = 2) {
  std::cout << "You win!\n";
} else if (user == 4 && computer = 3) {
  std::cout << "You lose!\n";
} else if (user == 4 && computer = 4) {
  std::cout << "You tie.\n";
} else if (user == 4 && computer = 5) {
  std::cout << "You win!\n";
}

else if (user == 5 && computer = 1) {
  std::cout << "You win!\n";
} else if (user == 5 && computer = 2) {
  std::cout << "You lose!\n";
} else if (user == 5 && computer = 3) {
  std::cout << "You win!\n";
} else if (user == 5 && computer = 4) {
  std::cout << "You lose!\n";
} else if (user == 5 && computer = 5) {
  std::cout << "You tie.\n";
}
}
