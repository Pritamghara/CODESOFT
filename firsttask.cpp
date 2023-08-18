// task1

#include<iostream>
#include<random>
using namespace std;

int main(){
    
    int random_number = rand() % 100 + 1;
  
  
 
  while (true) {
    
    int guess;
    cout << "Enter your guess: ";
    cin >> guess;

   
    if (guess == random_number) {
      cout << "Congratulations! You guessed the number"<<random_number << endl;
      break;
    } else if (guess > random_number) {
      cout << "Your guess is too high." << endl;
    } else {
      cout << "Your guess is too low." << endl;
    }

   
    
  }

}