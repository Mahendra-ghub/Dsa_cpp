#include <iostream>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    Student* next;
};

class StudentList {
private:
    Student* head;

public:
    StudentList() {
        head = nullptr;
    }

    void insert(int rollNumber, string name) {
        Student* newStudent = new Student;
        newStudent->rollNumber = rollNumber;
        newStudent->name = name;
        newStudent->next = nullptr;

        if (head == nullptr) {
            head = newStudent;
        } else {
            Student* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newStudent;
        }
    }

    Student* search(int rollNumber) {
        Student* temp = head;
        while (temp != nullptr) {
            if (temp->rollNumber == rollNumber) {
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    }
};

int main() {
    StudentList list;
    list.insert(101, "Alice");
    list.insert(102, "Bob");
    list.insert(103, "Charlie");
    
    int rollToSearch = 102;
    Student* result = list.search(rollToSearch);
    if (result != nullptr) {
        cout << "Found: " << result->name << endl;
    } else {
        cout << "Student with roll number " << rollToSearch << " not found." << endl;
    }

    return 0;
}