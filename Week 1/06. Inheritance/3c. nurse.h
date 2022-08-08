#ifndef NURSE_H
#define NURSE_H

#include "3b. person.h"


// Nurse will do protected inheritance
class Nurse : protected Person {
    friend std::ostream& operator<<(std::ostream&, const Nurse& nurse);

    public:
        Nurse();
        ~Nurse();

        void treat_unwell_person(){
            // inherited protected members from Person class
            full_name = "Stella Adewale";
            age = 28;
        }

        // Getter
        int get_certificate_id() const {
            return certificate_id;
        }

    private:
        int certificate_id {0};

};

#endif