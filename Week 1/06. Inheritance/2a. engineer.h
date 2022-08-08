#ifndef ENGINEER_H
#define ENGINEER_H

#include <iostream>
#include <string>
#include <string_view>

class Engineer {
    friend std::ostream& operator << (std::ostream& out, const Engineer& engineer);

    public:
        Engineer() = default;
        Engineer(std::string_view first_name);

        // Getter
        std::string get_initial() const {
            return initial;
        }

    protected:
        std::string first_name {"Unknown"};
        std::string major {"Unspecified"};

    private:
        std::string initial {"Engr. "};
        bool isCertified {true};
};

#endif