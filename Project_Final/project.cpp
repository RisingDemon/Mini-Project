#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <string>
#include <algorithm>
#include <fstream>
#include <ctime>
#include <stdlib.h>
#include <sstream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#define second 7

using namespace std;
float wgt, hgt, mi;
int sex, choice_bmi, age, ch_bmi, bf, g, a;
int n, j, totalsum;
string str;
string hdate;
int b[100];
string user;
int l, x;
int i, k, y;
int entry;
string tol;
int c;
string s;
string input;
string htime;
string hbody;

#include "design_effects.cpp"
#include "song.cpp"
#include "password.cpp"
#include "passwordreset.cpp"
#include "yoga_part.cpp"
#include "exercise_part.cpp"
#include "bmim.cpp"
#include "user_file.cpp"
#include "user_history.cpp"
#include "item_search.cpp"
#include "asccc.cpp"

//code starts....................................................................................................................
int main()
{
    HWND console = GetConsoleWindow();
    RECT ConsoleRect;
    GetWindowRect(console, &ConsoleRect);

    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
    system("CLS");
    s5();
    ascii();
    cout << endl
         << endl;

    Color(x = 10);
    stop();
mainlog:

    s = "\t\t1.Signup\t2.login\t\t3.Reset Password\n\n";
    slow();
    char u1;
trymain:
    u1 = _getch();
    switch (u1)
    {
    case 49:
        signn();
        goto mainlog;
        break;
    case 50:
        login();
        break;
    case 51:
        passres();
        goto mainlog;
        break;
    default:
        goto trymain;
        break;
    }

    system("pause");
start:
    system("CLS");
    cout << endl
         << endl;
    Color(x = 12);
    cout << setw(35);
    s = "Press 1 for calories calculator\n";
    slow();
    cout << setw(35);
    s = "press 2 for BMI or Music exercise\n";
    slow();
    cout << setw(35);
    s = "Press 00 to exit\n";
    slow();

    cin >> j;
    if (j == 00)
    {
        goto enddd;
    }
    else if (j == 1)
    {

    addd:
        Color(x = 11);
        system("CLS");
        cout << endl
             << endl;
        cout << setw(35);
        s = "Welcome to calories calculator\n";
        slow();
        Color(x = 11);
        cout << setw(20);
        s = "1.Add entry  2.Show History by date  3.Show all History   00.Main Menu\n";
        slow();
        cin >> j;
        if (j == 1)
        {
            system("CLS");
            cout << endl
                 << endl;
            time();
            cout << setw(47) << "[Type 'exit' to end the session]\n"
                 << endl;
            do
            {
                fileOpen();

            } while (input.compare("exit") != 0);

            totalfile();
            cout << setw(50) << "\n"
                 << setw(25);
            s = "The total calories for all items is ";
            slow();
            cout << sum << endl
                 << setw(24);
            cout << " ";
            system("pause");
            system("CLS");
            cout << setw(35) << "Want to goto history section\n";
            cout << "\t1.Yes\t2.No\n\t";
            cin >> k;
            if (k == 1)
            {
                system("CLS");
                cout << endl
                     << endl;
                Color(x = 14);
                cout << setw(20);
                s = "Enter the date u want to access in dd-m-yyyy format: ";
                slow();
                getline(cin >> ws, hdate);
                readhistory();
                system("pause");
                goto addd;
            }
        }
        else if (j == 3)
        {
            system("CLS");
            cout << endl
                 << endl;
            history();
            system("pause");
            goto addd;
        } //show food history of user
        else if (j == 2)
        {
            system("CLS");
            cout << endl
                 << endl;
            //show history by date.
            Color(x = 14);
            cout << setw(20);
            s = "Enter the date u want to access in dd-m-yyyy format: ";
            slow();
            getline(cin >> ws, hdate);

            readhistory();
            system("pause");
            goto addd;
        }
        else if (j == 00)
        {
            goto start;
        }
        else
        {
            cout << "\nInvalid Input" << endl;
            system("pause");
            system("CLS");
            goto addd;
        }
    }
    else if (j != 1 && j != 2 && j != 00)
    {
        cout << "\nInvalid Input" << endl;
        system("pause");
        goto start;
    }

workout:
    Color(x = 10);
    system("CLS");
    cout << endl
         << endl;

    cout << "\n"
         << setw(35);
    s = "1.BMI  2.EXERCISE  00.End program\n";
    slow();
    cin >> j;
    if (j == 1)
    {
        system("CLS");
        cout << endl
             << endl;
        cout << "\t\t";
        cout << "\n ********** BMI CALCULATOR **********";
        do
        {
            while (1)
            {
                cout << "\n\n";
                cout << " ENTER YOUR GENDER " << endl
                     << " 1.MALE   2.FEMALE \t\t\t\t\t";
                cin >> sex;

                if (sex == 1)
                {
                    male m;
                    break;
                }
                else if (sex == 2)
                {
                    female f;
                    break;
                }
                else
                    cout << " INVALID CHOICE..... ENTER AGAIN";
            }
            cout << "\n\n YOU WANT TO TRY ONCE AGAIN? " << endl
                 << " 1. YES  2.NO\t\t\t\t\t\t";
            cin >> choice_bmi;
            system("CLS");

        } while (choice_bmi == 1);
        do
        {
            system("CLS");
            cout << "\n\n DO YOU WANT TO SEE BODY FAT PERCENTAGE? \n 1.YES \t\t 2. NO";
            cout << "\t\t\t\t\t";
            cin >> bf;
            system("CLS");
            if (bf == 1)
            {
                bodyfat f;
                cout << "\n\n ";
                system("pause");
                system("CLS");
                cout << "\n\n YOU WANT TO TRY AGIAN? \n 1.YES \t\t 2.NO";
                cout << "\t\t\t\t\t";
                cin >> ch_bmi;
            }
            else
                break;
        } while (ch_bmi == 1);
    }
    else if (j == 2)
    {
        goto song;
    }
    else if (j == 00)
    {
        goto enddd;
    }
    else
    {
        cout << "\nInvalid Input" << endl;
        system("pause");
        system("CLS");
        goto workout;
    }

song:
    system("CLS");
    Color(x = 7);
    cout << endl
         << endl;
    cout << setw(35);
    s = "Welcome , which song would you like to play ?\n";
    slow();
chooose:
    cout << setw(35);
    s = "1.Sugar Crash  2.Tu chale\n";
    slow();
    cout << setw(35);
    s = "3.Unity  4.PLAY\n";
    slow();
    cout << setw(35);
    s = "00.End the program\n";
    slow();
    cin >> n;
    if (n == 00)
    {
        goto enddd;
    }
    else if (n == 1)
    {

        s1();
    }
    else if (n == 2)
    {

        s2();
    }
    else if (n == 3)
    {

        s3();
    }
    else if (n == 4)
    {

        s4();
    }
    else
    {
        goto chooose;
    }

    cout << setw(35);
    s = "1.Play 2.Pause 3.Stop 4.Go ahead[Workout] \n";
    slow();

back:
    cin >> n;

    switch (n)
    {
    case 1:

        play();

        goto back;

    case 2:

        ppause();
        goto back;
    case 3:
        stop();
        goto chooose;

    case 4:
    {
    maini:

        cout << "\t----------------------------------------";
        cout << "\n\t******* Welcome To Workout Part *******" << endl;
        cout << "\t----------------------------------------";
        cout << "\n\t1.Cardio\n\t2.Yoga\n\t3.Main Menu\n\tEsc to exit " << endl;
        cout << "\t";
        char ch;
        ch = _getch();

        switch (ch)
        {
        case 49:
        { //ascii for 1
            int sec = 5;
            while (sec >= 0)
            {
                starting_timer(sec);
                Sleep(1000);
                sec--;
            }
            system("CLS");
            exercise_function();
            goto maini;
            break;
        }
        case 50:
        { //ascii for 2
            yoga_function();
            goto maini;
            break;
        }
        case 51:
        { //ascii for 3
            goto start;
        }
        case 27:
        { //ascii for esc
            goto enddd;
            break;
        }
        default:
            cout << "\nInvalid Input\n\n";
            Sleep(1000);
            system("CLS");
            goto maini;
            break;
        }
    }
    break;
    case 00:
        goto enddd;
    default:
        goto back;
    }
    system("CLS");
    cout << endl
         << endl;

enddd: //end of the code
    cout << "\t\t\tEnding the program\n";
    cout << setw(35) << ".................................................................\n";
    sleep_fun(2);

    stop(); //stop the song
    Color(x = 15);
    cout << setw(35) << " Thank you for comming";
    return 0;
}
