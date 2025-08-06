#include <iostream>
#include <ctime>

int main() {

    int player;

    std::cout << "**ROCKS**PAPERS**SCISSORS**" << std::endl;
    std::cout << std::endl;
    std::cout << "[1] ROCKS" << std::endl;
    std::cout << "[2] PAPERS" << std::endl;
    std::cout << "[3] SCISSORS" << std::endl;
    std::cout << "CHOOSE YOUR OPTIONS: ";
    std::cin >> player;

    srand(time(NULL));

    int comp = (rand() % 3) + 1;

    std::cout << std::endl;

    if (player == 1) {
        std::cout << "YOU CHOSE: ROCKS" << std::endl;
    } else if (player == 2) {
        std::cout << "YOU CHOSE: PAPER" << std::endl;
    } else if (player == 3) {
        std::cout << "YOU CHOSE: SCISSORS" << std::endl;
    }

    if (comp == 1) {
        std::cout << "COMPUTER CHOSE: ROCKS" << std::endl;
    } else if (comp == 2) {
        std::cout << "COMPUTER CHOSE: PAPERS" << std::endl;
    } else if (comp == 3) {
        std::cout << "COMPUTER CHOSE: SCISSORS" << std::endl;
    }


    if(comp == player) {
        std::cout << "RESULT: TIE" << std::endl;
    } else if ((player == 1 && comp == 2) || (player == 2 && comp == 3) || (player == 3 && comp == 1)) {
        std::cout << "RESULT: LOSE" << std::endl;
    } else if ((player == 1 && comp == 3) || (player == 2 && comp == 1) || (player == 3 && comp == 2)) {
        std::cout << "RESULT: WIN" << std::endl;
    }

    return 0;
}