#include <iostream>

void upgrade_score(int score){ // Parameter
    score += 5;
    std::cout << "Final score " << score << " mark(s)." << " &score: " << &score << std::endl; 
}

int main(int argc, char** argv){
    int score {78};

    std::cout << "Score (before upgrading): " << score << " &score: " << &score << std::endl;

    upgrade_score(score); // Argument
    
    std::cout << "Score (after call): " << score << " &score: " << &score << std::endl;

    return 0;
}