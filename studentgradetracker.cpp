#include <iostream>
#include <vector>
#include <string>

class Student {
protected:
    std::string name;
    std::vector<int> grades;

public:
    Student(const std::string& studentName)
        : name(studentName) {}

    void addGrade(int grade) {
        grades.push_back(grade);
    }

    double calculateAverageGrade() const {
        if (grades.empty()) return 0.0;

        double total = 0.0;
        for (size_t i = 0; i < grades.size(); ++i) {
            total += grades[i];
        }
        return total / grades.size();
    }

    void display() const {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Average Grade: " << calculateAverageGrade() << std::endl;
    }
};

int main() {
    std::string name;
    std::cout << "Enter student's name: ";
    std::getline(std::cin, name);

    Student student(name);

    int grade;
    std::cout << "Enter grade for English: ";
    std::cin >> grade;
    student.addGrade(grade);

    std::cout << "Enter grade for Math: ";
    std::cin >> grade;
    student.addGrade(grade);

    std::cout << "Enter grade for Kiswahili: ";
    std::cin >> grade;
    student.addGrade(grade);

    std::cout << "Enter grade for Physics: ";
    std::cin >> grade;
    student.addGrade(grade);

    std::cout << "Enter grade for Biology: ";
    std::cin >> grade;
    student.addGrade(grade);

    student.display();

    return 0;
}
