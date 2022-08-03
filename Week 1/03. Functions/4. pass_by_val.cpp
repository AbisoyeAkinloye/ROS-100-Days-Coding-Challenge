#include <iostream>

// pass by value/copy
void upgrade_score(int score){ // Parameter
    score += 5;
    std::cout << "Final score " << score << " mark(s)." << std::endl; 
}

int main(int argc, char** argv){
    int score {78};

    std::cout << "Score (before upgrading): " << score << std::endl; // 78

    upgrade_score(score); // 83
    
    std::cout << "Score (after call): " << score << std::endl; // 78

    return 0;
}