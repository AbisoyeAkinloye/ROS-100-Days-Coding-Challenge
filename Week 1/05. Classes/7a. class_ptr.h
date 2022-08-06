#include <iostream>

class Student { 
    public:
        Student(int student_id){
            matric_no = student_id;
        }

        void get_student_info(){
            std::cout << "====== Student Information =====" << std::endl;
            std::cout << "Matric no: " << "\t" << matric_no << std::endl;
            std::cout << "Full name: " << "\t" << Name << std::endl;
            std::cout << "Department: " << "\t" << Department << std::endl;
            std::cout << "Level: " << "\t" << Level << " level" << std::endl;
        }

        void set_student_info(std::string name, std::string department, size_t level){
            Name = name;
            Department = department;
            Level = level;
        }

    private:
        unsigned int Level;
        int matric_no;
        std::string Name;
        std::string Department;

};