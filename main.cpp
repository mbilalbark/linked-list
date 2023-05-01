#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
#include <string>

using namespace std;

void ShowListOFPrimitiveType(Node<int> *list)
{
    while (list != NULL)
    {
        cout << list->data << endl;
        list = list->next;
    }
}

void PrimitiveTypeExample()
{
    LinkedList<int> newList;

    // Add Elements
    newList.Add(5);
    newList.Add(10);
    newList.Add(11);
    newList.Add(12);

    cout << "Items added" << endl;
    // Get list first item
    Node<int> *head = newList.GetList();
    // Show list elements
    ShowListOFPrimitiveType(head);

    newList.Add(70);

    // Remove elements
    newList.Remove(5);

    cout << "Item value 5 removed!" << endl;
    cout << "------------" << endl;

    ShowListOFPrimitiveType(head);
}

struct Student
{
    int number;
    string name;
    string surname;
    string className;

    bool operator==(const Student &other) const
    {
        return number == other.number && name == other.name && surname == other.surname && className == other.className;
    }
};

void ShowListOfStruct(Node<Student> *list)
{
    while (list != NULL)
    {
        cout << "Student Number: " << list->data.number << endl;
        cout << "Student Name: " << list->data.name << endl;
        cout << "Student Surname: " << list->data.surname << endl;
        cout << "Student Class Name: " << list->data.className << endl;

        list = list->next;
    }
}

void StructExample()
{

    // Create List
    LinkedList<Student> studentList;

    // Create new student
    Student newStudentOne;
    newStudentOne.number = 5;
    newStudentOne.name = "John";
    newStudentOne.surname = "Doe";
    newStudentOne.className = "6A";

    // Add student item to list list
    studentList.Add(newStudentOne);

    // Create new student
    Student newStudentTwo;
    newStudentTwo.number = 10;
    newStudentTwo.name = "Jane";
    newStudentTwo.surname = "Doe";
    newStudentTwo.className = "6A";

    studentList.Add(newStudentTwo);

    cout << "Items added" << endl;
    Node<Student> *head = studentList.GetList();

    ShowListOfStruct(head);

    // Remove elements
    studentList.Remove(newStudentOne);
    cout << "Item student one removed!" << endl;
    cout << "------------" << endl;

    ShowListOfStruct(head);
}

int main()
{

    PrimitiveTypeExample();

    StructExample();

    return 0;
}