#include <iostream>
#include <string_view>

class Dog {
    public:
        Dog() = default;
        Dog(std::string_view name, std::string_view breed, int age);
        ~Dog();

        void print_info(){
            std::cout << "Dog (" << this << ") : [Name: " << name << ", Breed: " << breed << ", Age: " << *p_age << "]" << std::endl;
        }

        // setters
        // chained  calls using reference
        Dog& set_name(std::string_view name){
            this->name = name;
            return *this;
        }

        Dog& set_breed(std::string_view breed){
            this->breed = breed;
            return *this;
        }

        Dog& set_age(int age){
            *(this->p_age) = age;
            return *this;
        }

    private:
        std::string name;
        std::string breed;
        int* p_age {nullptr};
};

Dog::Dog(std::string_view name, std::string_view breed, int age){
    this->name = name;
    this->breed = breed;
    p_age = new int;
    *p_age = age;
    std::cout << "Dog constructor called for: " << name << " at " << this << std::endl;
}

Dog::~Dog(){
    delete p_age;
    std::cout << "Dog destructor called for: " << name << " at " << this<< std::endl;
}

int main(int argc, char* argv[]){
    Dog my_dog {"fluffy", "shepherd", 2};
    my_dog.print_info();

    /*
    my_dog.set_name("Bingo");
    my_dog.set_breed("Bull dog");
    my_dog.set_age(5);
    my_dog.print_info();
    */
    my_dog.set_name("Bingo").set_breed("Bull dog").set_age(3);
    my_dog.print_info();

    return 0;
}