void Color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void sleep_fun(unsigned milliseconds)
{
    Sleep(milliseconds * 1000); // takes microseconds
}
void slow() //letters
{
    for (int j = 0; j < s.size(); j++)
    {
        for (int i = 0; i <= 20000000; i++)
            ;
        cout << s[j];
    }
}
void slowin(string r)
{
    for (int j = 0; j < r.size(); j++)
    {
        for (int i = 0; i <= 1111111; i++)
            ;
        cout << r[j];
    }
}

void intro()
{
    string r;
    Color(12);
    r = "\t\t\t\t-------------------------------------------\n";
    slowin(r);
    s = "Welcome to Fit And Fun Program";
    cout << "\t\t\t\t)                                         (\n";
    cout << "\t\t\t\t(    ";
    Color(10); //(x = 10);
    slow();
    Color(x = 12);
    cout << "       )\n";
    cout << "\t\t\t\t)                                         (\n";
    r = "\t\t\t\t-------------------------------------------\n";
    slowin(r);
}
