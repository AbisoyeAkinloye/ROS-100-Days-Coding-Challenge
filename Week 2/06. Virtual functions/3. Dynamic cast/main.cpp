#include <iostream>
#include "includes.h"

int main(int argc, char* argv[]){

    // Base class pointer
    Animal* animal1 = new Feline("stripes", "feline1");
    // animal1->do_something_feline(); // Compiler error

    // Feline* feline_ptr = dynamic_cast<Feline*>(animal1);
    // feline_ptr->do_something_feline();

    // Dynamic cast may fail
    Dog* dog_ptr = dynamic_cast<Dog*>(animal1);
    if (dog_ptr)
        dog_ptr -> do_something_doggy();
    else
        std::cout << "Couldn't do the transformation from animal to dog pointer" << std::endl; 

    // Base class reference
    Feline feline2 {"stripes", "feline2"};
    Animal& animal_ref {feline2};

    Feline* feline_ptr1 {dynamic_cast<Feline*>(&animal_ref)};
    if (feline_ptr1)
        feline_ptr1->do_something_feline();
    else
        std::cout << "Couldn't cast to feline reference" << std::endl;

    delete animal1;

    return 0;
}