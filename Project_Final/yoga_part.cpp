string path_yoga = ".\\assets\\Yoga\\";

//int yoga_path(string, int &);
//void yoga_function();

int yoga_path(string name, int &ch_yoga)
{
    string st, st_ctrl;
    system((path_yoga + "\\" + name + "\\" + name + ".gif").c_str());
    fstream open((path_yoga + "\\" + name + "\\Description.txt").c_str(), ios::in);
    getline(open, st, '\0');
    cout << st;
    open.close();

    fstream open_ctrl((path_yoga + "\\controls.txt").c_str(), ios::in);
    getline(open_ctrl, st_ctrl, '\0');
    cout << st_ctrl;
    open_ctrl.close();
    // cout << "\n\n\tpress:  -> for next exercise. \n\t\t<- for previous exercise.\n\t\t0 for main menu.\n\t\tEsc to exit.";
    // cout << "\n\n";
    char ch3 = _getch();
    if (ch3 != 48 && ch3 != 27 && ch3 != 115 && ch3 != 112)
        ch3 = _getch();

    system("TASKKILL /f /t /IM microsoft.photos.exe 1>NULL");
    system("CLS");
    //    cout<<ch3;
    //    system("pause");
    switch (ch3)
    {
    case 77:
        ch_yoga++;
        break;
    case 75:
        ch_yoga--;
        break;
    case 115: //ascii for s
        ppause();
        break;
    case 112: //ascii for p
        play();
        break;
    case 27: //ascii value for esc
        cout << "Ending Yoga" << endl;
        system("pause");
        exit(0);
    case 48: //ascii value for 0
             //        cout << "Ending Yoga" << endl;
             //        system("pause");
        ch_yoga = 5;

        /* default: cout<<"\n\n\tInvalid Input"<<endl;
    	break;*/
    }
    return 0;
}

void yoga_function()
{
    int ch_yoga = 0;
    string name[] = {
        "Bhastrika",
        "Kapalbharti",
        "JalandharBandha",
        "Anulom_vilom",
        "Bhramari"};

    system("CLS");
    while (ch_yoga != 5)
        yoga_path(name[ch_yoga], ch_yoga);

    cout << "\n\nThank You" << endl;
    system("pause");
    system("CLS");
}
