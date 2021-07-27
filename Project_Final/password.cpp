
using namespace std;
string uname, fname, upass, fpass, fitem;
int coutt;
void signn()
{
    ofstream passcr("pass.txt", ios::app);
    string uname, upass1, upass2;
    loguse:
    s = "Enter the username : ";
    slow();
    getline(cin >> ws, uname);
    transform(uname.begin(), uname.end(), uname.begin(), ::tolower); //converting into lowercase
    ifstream logcheak("pass.txt");
    while (logcheak.peek() != EOF)
    {
        getline(logcheak, fname, ',');
        getline(logcheak, fpass, ',');
        getline(logcheak, fitem, '\n');
        if (uname.compare(fname) == 0)
        {
            cout << endl
                 << "username already exist, choose another\n";
            goto loguse;
        }
    }
password:
    cout << "Enter password     : ";
    getline(cin >> ws, upass1);
    cout << "confirm password   : ";
    getline(cin >> ws, upass2);
    if (upass2.compare(upass1) == 0)
    {
        cout << "Enter your favorite food item :";
        getline(cin >> ws, fitem);
        transform(fitem.begin(), fitem.end(), fitem.begin(), ::tolower); //converting into lowercase
        cout << "\n..............Please Confirm  details.........\n";
        cout << "Username :" << uname;
        cout << "\nPassword :" << upass2;
        cout << "\nPass reset Key :" << fitem;
        cout << endl
             << "Do you want to register with above details?";
        cout << endl
             << "1.yes\t2.no\n";
        char u2;
    trytry:
        u2 = _getch();
        switch (u2)
        {
        case 49:
            passcr << uname << "," << upass2 << "," << fitem << "\n";
            s = "You are succesfully registered\n\n";
            slow();
            break;
        case 50:
            exit(0);
            break;
        default:
            goto trytry;
        }
    }
    else
    {
        cout << "password do not match" << endl;
        goto password;
    }
    passcr.close();
}

void login() //to find the food item in file
{
pass2:

    ifstream passlog("pass.txt", ios::app);

    cout << "Enter username:";
    getline(cin >> ws, uname);
    transform(uname.begin(), uname.end(), uname.begin(), ::tolower); //converting into lowercase
    cout << "Enter password:";

    char pass[32]; //to store password.
    int i = 0;
    char a;       //a Temp char
    for (i = 0;;) //infinite loop
    {
        a = getch(); //stores char typed in a
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9') || a == '@' || a == '#' || a == '$' || a == '%' || a == '^' || a == '&' || a == '*' || a == '!')
        //check if a is numeric or alphabet
        {
            pass[i] = a; //stores a in pass
            ++i;
            cout << "*";
        }
        if (a == '\b' && i >= 1) //if user typed backspace
            //i should be greater than 1.
        {
            cout << "\b \b"; //rub the character behind the cursor.
            --i;
        }
        if (a == '\r') //if enter is pressed
        {
            pass[i] = '\0'; //null means end of string.

            break; //break the loop
        }
    }

    upass = pass;

    if (!passlog.is_open())
        std::cout << "ERROR: File Open" << '\n';

    while (passlog.peek() != EOF) //checking item into file
    {
        coutt = 1;
        getline(passlog, fname, ',');
        getline(passlog, fpass, ',');
        getline(passlog, fitem, '\n');

        if (uname.compare(fname) == 0)
        {
            int coutt = 1;
            if (upass.compare(fpass) == 0)
            {
                coutt = 2;

                cout << "t\t\tLogin Succesfull\n"
                     << endl;
                goto endll;
            }
            else
            {
                coutt = 0;
            }
        }
        else
        {
            coutt = 0;
        }
    }

    void cheak();
    {
        cout << endl
             << "username not found, select another!\n"
             << endl;
        cout << "1.try again 2.exit\n\n";
        char u3;
    tryagain1:
        u3 = _getch();
        switch (u3)
        {
        case 49:
            coutt = 1;
            passlog.close();
            goto pass2;
            break; //file closes and opens again for password reverification
        case 50:
            cout << "Thank you for comming \n";
            exit(0);
            break; //code exits.
        default:
            goto tryagain1;
            break;
        }
    }
    if (coutt == 0)
    {
        cheak();
    }
endll:
    passlog.close();
}
