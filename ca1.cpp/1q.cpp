#include <iostream>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    Student* next;
};

class StudentList {

public:
    StudentList() {
        head = nullptr;

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
        }
    }

int main() {
    StudentList list;
    list.insert(101, "Alice");
    list.insert(102, "Bob");
    list.insert(103, "Charlie");
        
        
