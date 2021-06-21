string path = ".\\assets\\Exercises\\";
bool gif = true;

int timer(int sec)
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
    return 0;
}

void exercise_path(string name)
{
    string st;
    if (gif)
    {
        system((path + "\\" + name + "\\" + name + ".gif").c_str());
        gif = false;
    }
    fstream open((path + "\\" + name + "\\Description.txt").c_str(), ios::in);
    getline(open, st, '\0');
    cout << st;
    open.close();
    cout << "\n\t       Spacebar to pause\n\t       " << endl;
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
            system(kill);
            sec = second;
        }
        if (ch_exercise == 9)
        {
            cout << "\n\nThank you" << endl;
            system("pause");
            system("CLS");
            return 0;
        }

        exercise_path(name[ch_exercise]);

        if (_kbhit())
        {
            char ch2 = _getch();
            if (ch2 == 77 || ch2 == 75 || ch2 == 48)
            {
                system("CLS");
                gif = true;
                sec = second;
            }

            if (ch2 != 32)
                system(kill);

            switch (ch2)
            {
            case 32:
                system("pause");
                break;

            case 77:
                ch_exercise++;
                goto read;

            case 75:
                ch_exercise--;
                goto read;

            case 27:
                exit(0);

            case 48:
                system("CLS");
                main();
            }
        }

        Sleep(1000);
        sec--;
    }
    return 0;
}