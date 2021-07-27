string path = ".\\assets\\Exercises\\";
bool gif = true;

void exercise_path(string name)
{
    string st, st_ctrl;
    if (gif)
    {
        system((path + "\\" + name + "\\" + name + ".gif").c_str());
        gif = false;
    }
    fstream open((path + "\\" + name + "\\Description.txt").c_str(), ios::in);
    getline(open, st, '\0');
    cout << st;
    open.close();
    cout << "\n";
    fstream open_ctrl((path + "\\controls.txt").c_str(), ios::in);
    getline(open_ctrl, st_ctrl, '\0');
    cout << st_ctrl;
    open_ctrl.close();
    // cout << "\n\t       Spacebar to pause\n\t       " << endl;
}

void timer(int sec)
{
    int minute = 0;
    system("CLS");
    cout << "\t    TIMER\n"
         << endl;
    cout << setfill(' ') << setw(28) << "----------------" << endl;
    cout << setfill(' ') << setw(13) << "| " << minute << " min | " << sec << " sec |" << endl;
    cout << setfill(' ') << setw(28) << "----------------"
         << "\n\n"
         << endl;
}

int exercise_function()
{
    string name[] = {
        "Squats",
        "Sidetosidejumpsquats",
        "Lunges",
        "Burpees",
        "Glutebridge",
        "Bicycle",
        "Sideplank",
        "Plank",
        "Highkneeruns"};
    int sec = second;
    int ch_exercise = 0;
    while (true)
    {
    read:
        timer(sec);
        if (sec == 0)
        {
            gif = true;
            ch_exercise++;
            system("TASKKILL /f /t /IM microsoft.photos.exe 1>NULL");
            sec = second;
        }
        if (ch_exercise == 9)
        {
            cout << "\n\n END of EXERCISE" << endl;
            system("pause");
            system("CLS");
            return 0;
        }

        exercise_path(name[ch_exercise]);

        if (_kbhit())
        {
            char ch2 = _getch();
            if (ch_exercise == 0 && ch2 == 75)
                continue;

            if (ch2 == 77 || ch2 == 75 || ch2 == 48)
            {
                system("TASKKILL /f /t /IM microsoft.photos.exe 1>NULL");
                system("CLS");
                gif = true;
                sec = second;
            }

            switch (ch2)
            {
            case 77: //ascii value for forward arrow
                ch_exercise++;
                goto read;
            case 75: //ascii value for backward arrow
                ch_exercise--;
                goto read;
            case 32: //ascii for space bar
                ppause();
                system("TASKKILL /f /t /IM microsoft.photos.exe 1>NULL");
                system("pause");
                system((path + "\\" + name[ch_exercise] + "\\" + name[ch_exercise] + ".gif").c_str());
                gif = false;
                play();
                break;
            case 112: //ascii for p
                play();
                system("TASKKILL /f /t /IM microsoft.photos.exe 1>NULL");
                system((path + "\\" + name[ch_exercise] + "\\" + name[ch_exercise] + ".gif").c_str());
                gif = false;
                break;
            case 115: //ascii for s
                ppause();
                system("TASKKILL /f /t /IM microsoft.photos.exe 1>NULL");
                system((path + "\\" + name[ch_exercise] + "\\" + name[ch_exercise] + ".gif").c_str());
                gif = false;
                break;
            case 27: //ascii for esc
                system("TASKKILL /f /t /IM microsoft.photos.exe 1>NULL");
                system("CLS");
                exit(0);

            case 48: //ascii for 0
                cout << "Thank You";
                system("CLS");
                return 0;
            }
        }

        Sleep(1000);
        sec--;
    }
    return 0;
}

void starting_timer(int sec)
{
    system("CLS");
    cout << "\tLets begin the cardio session in\n"
         << endl;
    cout << setfill(' ') << setw(28) << "---------" << endl;
    cout << setfill(' ') << setw(20) << "| " << sec << "  sec  |" << endl;
    cout << setfill(' ') << setw(28) << "---------" << endl;
}
