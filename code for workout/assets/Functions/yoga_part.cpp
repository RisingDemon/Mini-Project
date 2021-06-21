string path_yoga = ".\\assets\\Yoga\\";

void yoga_path(string name, int &ch_yoga)
{
    string st;

    system((path_yoga + "\\" + name + "\\" + name + ".gif").c_str());

    fstream open((path_yoga + "\\" + name + "\\Description.txt").c_str(), ios::in);
    getline(open, st, '\0');
    cout << st;
    open.close();

    cout << "\n\n\tpress:  -> for next exercise. \n\t\t<- for previous exercise.\n\t\t0 for main menu.\n\t\tEsc to exit.";
    cout << "\n\n";

    char ch3 = _getch();

    system("CLS");
    //    cout<<ch3;
    //    system("pause");
    switch (ch3)
    {
    case 77:
        ch_yoga++;
        system(kill);
        break;

    case 75:
        ch_yoga--;
        system(kill);
        break;

    case 48:
        system(kill);
        system("CLS");
        main();
        break;

    case 27:
        system(kill);
        exit(0);

    // default:
    //     cout << "\n\n\tInvalid Input" << endl;
    }
    // }
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

    while (ch_yoga != 5)
        yoga_path(name[ch_yoga], ch_yoga);

    cout << "\n\nThank You" << endl;
    system("pause");
    system("CLS");
}
