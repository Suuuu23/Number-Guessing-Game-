#include <iostream>
#include <cstdlib>  
#include <ctime>    

int main() {
   

   std::cout<<"...................................................................................................\n\n";
std::cout<<"\t\t\tWelcome to Number Guessing Game\n\n";



    std::srand(static_cast<unsigned>(std::time(nullptr)));
    
   
    int randomNumber = std::rand() % 100 + 1;
    int userGuess = 0;

    std::cout << "Guess the number between 1 and 100: ";

    while (userGuess != randomNumber) {
        std::cin >> userGuess;

        if (userGuess < randomNumber) {
            std::cout << "Too low! Try again: ";
        } else if (userGuess > randomNumber) {
            std::cout << "Too high! Try again: ";
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl;
        }
    }

    return 0;
}
