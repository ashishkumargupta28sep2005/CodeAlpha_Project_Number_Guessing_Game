#include<iostream>
#include<cstdlib>
#include<ctime>
//CodeAlpha Intership Guessing Number
int main() {
    srand(time(0)); //seed the random number genertator
    
    int secretNumber = rand() % 100 + 1; //Generate a random no between 1 and 100
    int guess;
    int attempts = 0;

     std::cout<<"Welcome to the Number Guessing Game"<< std::endl;
     std::cout<<"I have selevted a number betwwen 1 and 100. Try to guess it!"<<std::endl;

     do{
        std::cout<<"Enter your guess: ";
        std::cin>>guess;
        attempts++;

        if(guess<secretNumber){
            std::cout<<"Too low! Try again."<<std::endl;
        }else if (guess>secretNumber) {
            std::cout<<"Too high! Try again."<<std::endl;
        }else {
            std::cout<<"Congratulations! You guessed the number in"<<attempts<<"attempts"<<std::endl;
        }
        }while(guess!=secretNumber);

        return 0;
}
