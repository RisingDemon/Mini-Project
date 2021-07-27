string ascii_path = ".\\assets\\ascii_art\\ascii.txt";
using namespace std;
void ClearScreen()
	{
	COORD cursorPosition;
	cursorPosition.X = 0;
	cursorPosition.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
	}
	void nel(){cout<<endl<<endl<<endl;}
	void ascii(){
	 ifstream file;
    file.open(ascii_path);
    string str;//fit N fun

    for(int i =0;i<7;i++){getline(file,str,'k');
    nel();
	cout<<str;
	Sleep(400);
	ClearScreen();
    }
   string str1;//logo
   string str2;
    getline(file,str1,'k');
    getline(file,str2,'k');
	 for(int i=0;i<3;i++){
    cout<<str1;
	Sleep(1000);
	ClearScreen();
    cout<<str2;
	Sleep(1000);
	ClearScreen();}
	system("CLS");
	for(int i=0;i<4;i++){//items
    getline(file,str,'k');
    cout<<str;
	Sleep(600);
	ClearScreen();}
	system("CLS");

	for(int i=0;i<3;i++){//nutrition
    getline(file,str1,'k');
	Sleep(1000);
	nel();
	cout<<str1;
	}Sleep(1000);
	system("CLS");
    file.close();
    ClearScreen();
}

