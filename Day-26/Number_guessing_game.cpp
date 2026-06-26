#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(0));
  int number = rand() % 100 + 1;
  int guess = 0;
  int tries = 0;
  
  cout << "I have generated a random number between 1 and 100." << endl;
  
  while (guess != number) {
    cout << "Enter your guess: ";
    cin >> guess;
    tries++;
    
    if (guess > number) {
      cout << "Too high! Try again." << endl;
    } else if (guess < number) {
      cout << "Too low! Try again." << endl;
    } else {
      cout << "Correct! You guessed it in " << tries << " tries." << endl;
    }
  }
  
  return 0;
}
