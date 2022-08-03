#include <iostream>

// pass by pointer
void upgrade_score(int *score);

int main(int argc, char *argv[]){
    int score {48};
    std::cout << "Your score is " << score << " marks." << std::endl; // 48
    upgrade_score(&score); // 58
    std::cout << "Your score is " << score << " marks." << std::endl; // 58
    
    return 0;
}

void upgrade_score(int *score){
    *score += 10;
    std::cout << "Final score: " << *score << std::endl;
}