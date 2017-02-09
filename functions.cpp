#include <iostream>
#include <string>
using namespace std;

// Input/Output functions

string GetHindi( string english )
{
    if (english == "cat") {
        return "bilee";
                           }
    else if (english == "dog"){
         return "kutta";

                            }

    else if (english == "frog"){
        return "medhak";
                            }
    else if (english == "rabbit"){
        return "khargosh";
                            }
    else {
        return "word not found";
         }

}

string GetEnglish( string hindi )
{
if (hindi == "bilee") {
        return "cat";
                           }
    else if (hindi == "kutta"){
         return "dog";

                            }

    else if (hindi == "medhak"){
        return "frog";
                            }
    else if (hindi == "khargosh"){
        return "rabbit";
                            }
    else {
        return "word not found";
         }








}

// Menu functions

void DisplayMenu()
{
   cout << endl;
   cout << "1. English to Hindi" << endl;
   cout << "2. Hindi to English" << endl;
   cout << "3. Quit" << endl;

}

void EnglishToHindi()
{
  string english;
  cout << "English: ";
  cin >> english;

  cout << "Hindi: " << GetHindi(english) << endl;

}

void HindiToEnglish()
{
  string hindi;
  cout << "Hindi: ";
  cin >> hindi;

  cout << "English: " << GetEnglish(hindi) << endl;
}

int main()
{
    bool exit = false;
    int choice;

    while(!exit) {

       DisplayMenu();
       cin >> choice;

       if (choice == 3) {

        exit = true;
                        }

       else if (choice == 2) {

             HindiToEnglish();
                             }

       else if (choice == 1) {

            EnglishToHindi();
                              }

                    }


    return 0;
}
