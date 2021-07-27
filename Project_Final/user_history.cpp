void readhistory() //function to show history date wise
{
    bool his = true;

    ifstream ip(user_path + uname + ".txt", ios::app);

    if (!ip.is_open())
        cout << "ERROR: File Open" << '\n';

    while (ip.peek() != EOF)
    {

        getline(ip >> ws, htime, '\n');

        getline(ip >> ws, hbody, ',');

        //getline(ip,blank,'\n');

        if (hdate.compare(htime) == 0)
        {
            his = false;
            cout << "\n";
            cout << setw(25) << "date : " << htime << endl;
            cout << setw(25) << "history :\n";
            cout << hbody << endl;

            cout << "-----------------------------------------------------------\n"
                 << endl;
        }

        //   else{continue;}
    }
    if (his == true)
        cout << "\n"
             << setw(45) << "Sorry!!No data found.\n"
             << endl;
    ip.close();
}

void history() //function to show whole history
{
    ifstream fin;
	string history_data;
    fin.open(user_path + uname + ".txt", ios::app);

    // Execute a loop until EOF (End of File)
    while (fin)
    {
        // Read a Line from File
        getline(fin, history_data);

        // Print line in Console
        cout << history_data << endl;
    }
    cout << "\n";
    if (history_data.size() == 0)
    {
        cout << setw(35) << "\n\tSorry!!No data found.\n"
             << endl;
    }
    // Close the file
    fin.close();
}
