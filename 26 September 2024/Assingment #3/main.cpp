#include <iostream>
#include <string>
using namespace std;
struct data 
{
    string name;
    int nim;       // variable
    char gender;
    int *p;      // pointer
};
int main()
{
    struct data mahasiswa[10] ; // array of struct
    int i ;
    char input ; // 1 or 0
    
    while (i < 10) { // Allow a maximum of 10 students
        cout << "Do you want to enter a new student? (yes=1, no=0): ";
        cin >> input;

        if (input == '1') {
            // Input student information
            cout << "Enter name: ";
            cin >> mahasiswa[i].name;
            cout << "Enter NIM: ";
            cin >> mahasiswa[i].nim;
            cout << "Enter gender (M/F): ";
            cin >> mahasiswa[i].gender;

            i++; // Increment student count
        } else if (input == '0') {
            break; // Exit the loop
        } else {
            cout << "Invalid input! Please enter 1 for yes or 0 for no." << endl;
        }
    }

    // Display entered student information
    for (int j = 0; j < i; j++) {
        cout << mahasiswa[j].name << "\t" << mahasiswa[j].nim << "\t" << mahasiswa[j].gender << endl;
        
        // \t is a tab character used for formatting output in console applications
    }
}
