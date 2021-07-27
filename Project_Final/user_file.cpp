string user_path = ".\\user_history_files\\";
void time()
{

    time_t tmNow;
    tmNow = time(NULL);
    struct tm t = *localtime(&tmNow);

    ofstream fout;

    string line;
    fout.open(user_path + uname + ".txt", ios::app);

    // Execute a loop If file successfully opened
    // Write line in file
    fout << endl
         << t.tm_mday << "-" << t.tm_mon + 1 << "-" << t.tm_year + 1900 << endl;
    // Close the File
    fout.close();
}
void filee() //writing items into file choosed by user
{
    ofstream fout;
    string line;
    fout.open(user_path + uname + ".txt", ios::app);

    // Execute a loop If file successfully opened

    // Write line in file
    fout << "item : " << str << "(" << c / n << ")"
         << " Quantity :" << n << " total calories : " << c << endl;
    // Close the File
    fout.close();
}
