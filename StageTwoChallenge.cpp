#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int profNum = 1;
int studentNum = 1;

// Person class
class Person
{
public:
    // Variables present in both Professor and Student
    int cur_id;
    string name;
    int age;

    // Pure virtual functions
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};


// The Profesor Class
class Professor: public Person
{
public:
    int pubs;
    int i;

    // Input data
    void getdata() {
        cin >> name;
        cin >> age;
        // Input publications
        cin >> pubs;
        // Set cur_id
        i = profNum;
        profNum ++;
    }

    // Print data
    void putdata() {
        cout << name << " ";
        cout << age << " ";
        cout << pubs << " ";
        // Output type of class
        cout << i;
        cout << endl;
    }
};

// The Student Class
class Student: public Person
{
public:
    int marks[6];
    int sum;
    int i;


    // Input data
    void getdata() {
        cin >> name;
        cin >> age;
        // Input marks
        for(int i=0; i < 6; i++)
        {
            cin >> marks[i];
        }
        // Set cur_id
        i = studentNum;
        studentNum ++;

    }

    // Print data
    void putdata() {
        cout << name << " ";
        cout << age << " ";
        /* Output mark
        for(int i=0; i<6; i++)
        {
            cout << marks[i] << " ";
        } */
        // Output sum of marks
        for(int i=0; i<6; i++)
        {
            sum += marks[i];
        }
        cout << sum << " ";
        // Output type of class
        cout << i;
        cout << endl;

    }
};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
