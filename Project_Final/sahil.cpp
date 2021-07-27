#include <iostream>
#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
#define second 7
using namespace std;

int main();
#include "yoga_part.cpp"
#include "exercise_part.cpp"

int ch_exercise = 1,sec;

int starting_timer()
{
    system("CLS");
    cout << "\tLets begin the cardio session in\n"
         << endl;
    cout << setfill(' ') << setw(28) << "---------" << endl;
    cout << setfill(' ') << setw(20) << "| " << sec << "  sec  |" << endl;
    cout << setfill(' ') << setw(28) << "---------" << endl;
    return 0;
}

int main()
{
	while(true){
    cout << "\t----------------------------------------";
    cout << "\n\t******* Welcome To Workout Part *******" << endl;
    cout << "\t----------------------------------------";
    cout << "\n\t1.Cardio\n\t2.Yoga\n\tEsc to exit " << endl;
    cout << "\t";
    char ch;
    ch=_getch();
    system("CLS");
    switch (ch)
    {
    case 49:
		 sec = 5;
        while (sec >= 0)
        {
            starting_timer();
            //            Sleep(1000);
            sec--;
        }
        system("CLS");
        exercise_function();
        break;
    case 50:
        yoga_function();
        break;
   case 27:
   		exit(0);
    default:
        cout << "\nInvalid Input\n\n";
        Sleep(1000);
        system("CLS");
        break;
    }
}
    return 0;
}
