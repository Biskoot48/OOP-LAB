#include <iostream>

using namespace std;

class Student
{
    private:
        string first_name;
        string last_name;
        string Id;
        int birth_year;
        int marks;
        string courses;

    public:
        void setDetails(string f_name, string l_name, string id, int b_year, int mark, string course)
        {
            first_name = f_name;
            last_name = l_name;
            Id = id;
            birth_year = b_year;
            marks = mark;
            courses = course;
        }

        int displayAge()
        {
            return (2023-birth_year);
        }

        float displayGPA()
        {
            if (marks > 79)
                return 4.00;
            if (marks > 74 && marks <80)
                return 3.80;
            if (marks > 69 && marks < 75)
                return 3.70;
            if (marks > 64 && marks < 70)
                return 3.60;
            if (marks > 59 && marks < 65)
                return 3.50;
            if (marks > 54 && marks < 60)
                return 3.40;
            if (marks < 55)
                return 0.00;
        }

        void willGraduate()
        {
            if (marks < 55)
                cout << "Will Not Graduate" << endl;
            else
                cout << "Will Graduate!!" << endl;  
        }

        float updatedGPA()
        {
            marks += marks*0.1;
            displayGPA();
        }

        void printTranscript()
        {
            cout << "STUDENT DETAILS" << endl;
            cout << "Full Name: " << first_name << last_name << endl;
            cout << "Student ID: " << Id << endl;
            cout << "Birth Year: " << birth_year << endl;
            cout << "Current Age: " << displayAge() << endl;
            cout << "Course: " << courses << endl;
            cout << "Obtained Marks: " << marks << endl;
            cout << "Current GPA " << displayGPA() << endl;
            cout << "Updated GPA " << updatedGPA() << endl;



        }
    

};

int main()
{
    Student student1;
    student1.setDetails("Taimum","Sayed","210041248",2002,70,"CSE 4208");
    student1.printTranscript();

    return 0;

}