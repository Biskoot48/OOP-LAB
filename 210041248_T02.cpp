#include <iostream>

using namespace std;

class Book
{
    private:
     string Title;
     string Author;
     int Year;
     char Availability;

    public:
        void setDetails(string title, string author, int year, char c)
        {
            Title = title;
            Author = author;
            Year = year;
            Availability = c;

        }

        bool isClassic()
        {
            if ((2023-Year) > 50)
                return true;
            else
                return false;
        }


         int checkIn()
        {
            if(Availability == 'Y')
             return 1;
             
            else
                return 0;

        }
        int checkOut()
        {
            if(Availability == 'N')
             return 1;
             
            else
                return 0;

        }

        void displayStatus()
        {
                cout << "Book Details- " << endl;
                cout << "Book Name: " << Title << endl;
                cout << "Author: " << Author << endl;
                cout << "Publishing Year: " << Year << endl;
                if(isClassic())
                    cout << "This Book is a classic!" << endl;
                else
                    cout << "This Book is NOT a classic!" << endl;

                if(checkOut())
                    cout << "This Book is NOT AVAILABLE!" << endl;
                if (checkIn())
                    cout << "This Book is AVAILABLE!" << endl;


        }
        

};

int main()
{

    Book book1;
    book1.setDetails("Class 11 Physics","NCTB",1915,'N');
    book1.displayStatus();

    return 0;


}