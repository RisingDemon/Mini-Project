int sum = 0;
string calorie_path = ".\\assets\\calorie.txt";
void fileOpen() //to find the food item in file
{
    bool counter_var = true;
    ifstream item(calorie_path, ios::app);
    string name;
    string calories;
    cout << setw(34) << "item              : "; //taking ip from user of item
    getline(cin >> ws, input);
    transform(input.begin(), input.end(), input.begin(), ::tolower); //converting into lowercase

    if (!item.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (item.peek() != EOF) //checking item into file
    {

        getline(item, name, ',');
        transform(name.begin(), name.end(), name.begin(), ::tolower);
        str = name;
        getline(item, calories, '\n');
        stringstream convert(calories); //converting calorie string into int
        int cal = 0;
        convert >> cal;
        if (input.compare(name) == 0)
        {
            counter_var = false;
            cout << setw(34) << "    Quantity          : "; //taking quantity
            cin >> n;
            cout << setw(34);
            cout << " : ";
            cout << cal;
            cout << "\r"
                 << "\t      " << name;

            c = cal * n;

            sum = sum + c;
            cout << "\n"
                 << setw(37) << "the total calories are " << c << endl
                 << endl;
            filee();
        }
        else if (input.compare("exit") == 0)
            counter_var = false;
        else if (input.compare("pause") == 0)
        {
            counter_var = false;
            ppause();
        }
        else if (input.compare("play") == 0)
        {
            counter_var = false;
            play();
        }
    }
    if (counter_var)
    {
        cout << setw(46) << "Item not found, select another!\n"
             << endl;
        counter_var = false;
    }
    item.close();
}

void totalfile() //total calories
{
    ofstream fout;
    string line;
    fout.open(user_path + uname + ".txt", ios::app);

    // Execute a loop If file successfully opened

    fout << "And Your total calories are " << sum << ",";

    // Close the File
    fout.close();
}
