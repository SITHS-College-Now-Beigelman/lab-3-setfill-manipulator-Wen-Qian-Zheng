/* Wen Qian ZHeng
Lab 3
September 30th, 2024*/

#include <iomanip>
#include <iostream> // necessity

using namespace std; // shorten our cout statements! make sure to have semicolon

int main() // ALL C+ programs require the function main
{ // opening bracket for the code

cout << setfill('#'); // sets the fill-in as '#'
cout << setw(1) << '#' << setw(85) << '#' << endl; // outputs '#' from space 1 to 85
cout << setfill(' '); // switches the fill-in with spaces 
cout << setw(1) << '#' << setw(85) << '#' << endl; // puts one # at space 1, spaces spaces until space 85, and places a # after
cout << setw(1) << '#' << setw(59) << "Ways to access the Task Manager on your Windows computer:" << setw(26) << '#' << endl; // one # at the beginning, ends text at space 59, fills the rest of the the space (26) with spaces
cout << setw(1) << '#' << setw(85) << '#' << endl; // puts one # at space 1, spaces spaces until space 85, and places a # after
cout << setw(1) << '#' << setw(56) << "Press the key combination Ctrl + Shift + Escape" << setw(29) << '#' << endl; // one # at the beginning, ends text at space 56, fills the rest of the the space (29) with spaces
cout << setw(1) << '#' << setw(85) << '#' << endl; // puts one # at space 1, spaces spaces until space 85, and places a # after
cout << setw(1) << '#' << setw(80) << "Press the key combination Ctrl + Alt + Delete and select \"Task Manager\"" << setw(5) << '#' << endl; // one # at the beginning, ends text at space 80, fills the rest of the the space (5) with spaces
cout << setw(1) << '#' << setw(85) << '#' << endl; // puts one # at space 1, spaces spaces until space 85, and places a # after
cout << setw(1) << '#' << setw(61) << "Type \"Task Manager\" in the Windows Start menu search" << setw(24) << '#' << endl;  // one # at the beginning, ends text at space 61, fills the rest of the the space (24) with spaces
cout << setw(1) << '#' << setw(85) << '#' << endl; // puts one # at space 1, spaces spaces until space 85, and places a # after
cout << setfill('#'); // switches the fill-in with '#' 
cout << setw(1) << '#' << setw(85) << '#' << endl; // outputs '#' from space 1 to 85

    return 0; // exit value. must end with return 0
}  

/*
######################################################################################
#                                                                                    #
#  Ways to access the Task Manager on your Windows computer:                         #
#                                                                                    #
#         Press the key combination Ctrl + Shift + Escape                            #
#                                                                                    #
#         Press the key combination Ctrl + Alt + Delete and select "Task Manager"    #
#                                                                                    #
#         Type "Task Manager" in the Windows Start menu search                       #
#                                                                                    #
######################################################################################
*/

