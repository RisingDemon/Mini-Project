void weight_gain()
{
  Sleep(1700);
  Color(x = 7);
  cout << "\n";
  s = "->Here are some tips for gaining good weight";
  slow();
  cout << endl;
  Color(x = 10);
  Sleep(1000);
  string str_bmi;
  ifstream bmi_file(".\\assets\\BMI_tips\\weight_gain.txt");
  getline(bmi_file, str_bmi, '\0');
  cout << "\n"
       << str_bmi << endl
       << endl;
  if (!bmi_file.is_open())
    cout << "ERROR: File Open" << '\n';
  bmi_file.close();
  system("pause");
  system("CLS");
}

void weight_loss()
{
  Sleep(1700);
  Color(x = 7);
  cout << "\n";
  s = "->Here are some tips for loosing weight";
  slow();
  cout << endl;
  Color(x = 10);
  Sleep(1000);
  string str_bmi;
  ifstream bmi_file(".\\assets\\BMI_tips\\weight_loss.txt");
  getline(bmi_file, str_bmi, '\0');
  cout << "\n"
       << str_bmi << endl
       << endl;
  if (!bmi_file.is_open())
    cout << "ERROR: File Open" << '\n';
  bmi_file.close();
  system("pause");
  system("CLS");
}

template <typename B>
B mass(B wg, B hg)
{
  mi = wg / hg;
  return mi;
}
class male
{
public:
  male();
};
class female
{
public:
  female();
};
class bodyfat
{
public:
  bodyfat();
};
male::male()
{
  while (1)
  {
    cout << "\n\n ENTER AGE \t\t\t\t\t\t";
    cin >> age;
    if (age >= 0 && age <= 19)
      cout << "\n\n AGE IS TOO SMALL BMI CANNOT BE CALCULATED.\n PLEASE ENTER AGE AGAIN ";
    else if (age >= 20 && age <= 39)
    {

      while (1)
      {
        cout << "\n\n ENTER YOUR HEIGHT ";
        cout << "\t\t\t\t\t";
        cin >> hgt;
        if (hgt >= 121 && hgt <= 200)
        {
          hgt = hgt / 100;
          hgt = hgt * hgt;
          break;
        }
        else
          cout << " INVALID HEIGHT...ENTER HEIGHT AGIAN";
      }
      while (1)
      {
        cout << "\n\n";
        cout << " ENTER YOUR WEIGHT ";
        cout << "\t\t\t\t\t";
        cin >> wgt;
        cout << "\n\n";
        if (wgt >= 41 && wgt <= 200)
          break;
        else
          cout << " INVALID WEIGHT...ENTER WEIGHT AGAIN";
      }
      cout << " BMI\t\t\t\t\t\t\t" << mass<float>(wgt, hgt) << endl;
      if (mi <= 18.4)
      {
        cout << "\n\n YOU ARE UNDER WEIGHT" << endl;
        weight_gain();
      }
      if (mi >= 18.5 && mi <= 24.9)
        cout << "\n\n YOU HAVE HEALTHY WEIGHT" << endl;
      if (mi >= 25 && mi <= 29.9)
      {
        cout << "\n\n YOU FALL UNDER OBESE 1" << endl;
        weight_loss();
      }
      if (mi > 30)
      {
        cout << "\n\n YOU FALL UNDER OBESE 2" << endl;
        weight_loss();
      }
      break;
    }

    else if (age >= 40 && age <= 59)
    {
      while (1)
      {
        cout << "\n\n ENTER YOUR HEIGHT ";
        cout << "\t\t\t\t\t";
        cin >> hgt;
        if (hgt >= 121 && hgt <= 200)
        {
          hgt = hgt / 100;
          hgt = hgt * hgt;
          break;
        }
        else
          cout << " INVALID HEIGHT...ENTER HEIGHT AGIAN";
      }
      while (1)
      {
        cout << "\n\n";
        cout << " ENTER YOUR WEIGHT ";
        cout << "\t\t\t\t\t";
        cin >> wgt;
        cout << "\n\n";
        if (wgt >= 41 && wgt <= 200)
          break;
        else
          cout << "\n ENTER WEIGHT AGIAN";
      }
      cout << " BMI\t\t\t\t\t\t\t" << mass<float>(wgt, hgt) << endl;
      if (mi <= 18.4)
      {
        cout << "\n\n YOU ARE UNDER WEIGHT" << endl;
        weight_gain();
      }
      if (mi >= 18.5 && mi <= 23.9)
        cout << "\n\n YOU HAVE HEALTHY WEIGHT" << endl;
      if (mi >= 24 && mi <= 28.4)
      {
        cout << "\n\n YOU FALL UNDER OBESE 1" << endl;
        weight_loss();
      }
      if (mi > 28.5)
      {
        cout << "\n\n YOU FALL UNDER OBESE 2" << endl;
        weight_loss();
      }
      break;
    }

    else if (age >= 60 && age <= 95)
    {

      while (1)
      {
        cout << "\n\n ENTER YOUR HEIGHT ";
        cout << "\t\t\t\t\t";
        cin >> hgt;
        if (hgt >= 121 && hgt <= 200)
        {
          hgt = hgt / 100;
          hgt = hgt * hgt;
          break;
        }
        else
          cout << " INVALID HEIGHT...ENTER HEIGHT AGIAN";
      }
      while (1)
      {
        cout << "\n\n";
        cout << " ENTER YOUR WEIGHT ";
        cout << "\t\t\t\t\t";
        cin >> wgt;
        cout << "\n\n";
        if (wgt >= 41 && wgt <= 200)
          break;
        else
          cout << "\n ENTER WEIGHT AGIAN";
      }
      cout << " BMI\t\t\t\t\t\t\t" << mass<float>(wgt, hgt) << endl;
      if (mi <= 18)
      {
        cout << "\n\n YOU ARE UNDER WEIGHT" << endl;
        weight_gain();
      }
      if (mi >= 18.1 && mi <= 22.5)
        cout << "\n\n YOU HAVE HEALTHY WEIGHT" << endl;
      if (mi >= 22.5 && mi <= 25.9)
      {
        cout << "\n\n YOU FALL UNDER OBESE 1" << endl;
        weight_loss();
      }
      if (mi > 26)
      {
        cout << "\n\n YOU FALL UNDER OBESE 2" << endl;
        weight_loss();
      }
      break;
    }
    else
      cout << "\n\n INVALID AGE ENTER AGAIN";
  }
}

female::female()
{
  while (1)
  {
    cout << "\n\n ENTER AGE \t\t\t\t\t\t";
    cin >> age;
    if (age >= 0 && age <= 19)
      cout << "\n\n AGE IS TOO SMALL BMI CANNOT BE CALCULATED.\n PLEASE ENTER AGE AGAIN ";
    else if (age >= 20 && age <= 39)
    {

      while (1)
      {
        cout << "\n\n ENTER YOUR HEIGHT ";
        cout << "\t\t\t\t\t";
        cin >> hgt;
        if (hgt >= 121 && hgt <= 185)
        {
          hgt = hgt / 100;
          hgt = hgt * hgt;
          break;
        }
        else
          cout << " INVALID HEIGHT...ENTER HEIGHT AGIAN";
      }
      while (1)
      {
        cout << "\n\n";
        cout << " ENTER YOUR WEIGHT ";
        cout << "\t\t\t\t\t";
        cin >> wgt;
        cout << "\n\n";
        if (wgt >= 41 && wgt <= 200)
          break;
        else
          cout << " INVALID WEIGHT...ENTER WEIGHT AGAIN";
      }
      cout << " BMI\t\t\t\t\t\t\t" << mass<float>(wgt, hgt) << endl;
      if (mi <= 18.4)
      {
        cout << "\n\n YOU ARE UNDER WEIGHT" << endl;
        weight_gain();
      }
      if (mi >= 18.5 && mi <= 24.9)
        cout << "\n\n YOU HAVE HEALTHY WEIGHT" << endl;
      if (mi >= 25 && mi <= 29.9)
      {
        cout << "\n\n YOU FALL UNDER OBESE 1" << endl;
        weight_loss();
      }
      if (mi > 30)
      {
        cout << "\n\n YOU FALL UNDER OBESE 2" << endl;
        weight_loss();
      }
      break;
    }

    else if (age >= 40 && age <= 59)
    {
      while (1)
      {
        cout << "\n\n ENTER YOUR HEIGHT ";
        cout << "\t\t\t\t\t";
        cin >> hgt;
        if (hgt >= 121 && hgt <= 185)
        {
          hgt = hgt / 100;
          hgt = hgt * hgt;
          break;
        }
        else
          cout << " INVALID HEIGHT...ENTER HEIGHT AGIAN";
      }
      while (1)
      {
        cout << "\n\n";
        cout << " ENTER YOUR WEIGHT ";
        cout << "\t\t\t\t\t";
        cin >> wgt;
        cout << "\n\n";
        if (wgt >= 41 && wgt <= 200)
          break;
        else
          cout << "\n ENTER WEIGHT AGIAN";
      }
      cout << " BMI\t\t\t\t\t\t\t" << mass<float>(wgt, hgt) << endl;
      if (mi <= 18.0)
      {
        cout << "\n\n YOU ARE UNDER WEIGHT" << endl;
        weight_gain();
      }
      if (mi >= 18.1 && mi <= 23.4)
        cout << "\n\n YOU HAVE HEALTHY WEIGHT" << endl;
      if (mi >= 23.5 && mi <= 27.4)
      {
        cout << "\n\n YOU FALL UNDER OBESE 1" << endl;
        weight_loss();
      }
      if (mi > 27.5)
      {
        cout << "\n\n YOU FALL UNDER OBESE 2" << endl;
        weight_loss();
      }
      break;
    }

    else if (age >= 60 && age <= 95)
    {

      while (1)
      {
        cout << "\n\n ENTER YOUR HEIGHT ";
        cout << "\t\t\t\t\t";
        cin >> hgt;
        if (hgt >= 121 && hgt <= 185)
        {
          hgt = hgt / 100;
          hgt = hgt * hgt;
          break;
        }
        else
          cout << " INVALID HEIGHT...ENTER HEIGHT AGIAN";
      }
      while (1)
      {
        cout << "\n\n";
        cout << " ENTER YOUR WEIGHT ";
        cout << "\t\t\t\t\t";
        cin >> wgt;
        cout << "\n\n";
        if (wgt >= 41 && wgt <= 200)
          break;
        else
          cout << "\n ENTER WEIGHT AGIAN";
      }
      cout << " BMI\t\t\t\t\t\t\t" << mass<float>(wgt, hgt) << endl;
      if (mi <= 17.4)
      {
        cout << "\n\n YOU ARE UNDER WEIGHT" << endl;
        weight_gain();
      }
      if (mi >= 17.5 && mi <= 21.9)
        cout << "\n\n YOU HAVE HEALTHY WEIGHT" << endl;
      if (mi >= 22 && mi <= 24.9)
      {
        cout << "\n\n YOU FALL UNDER OBESE 1" << endl;
        weight_loss();
      }
      if (mi > 25)
      {
        cout << "\n\n YOU FALL UNDER OBESE 2" << endl;
        weight_loss();
      }
      break;
    }
    else
      cout << "\n\n INVALID AGE ENTER AGAIN";
  }
}

bodyfat::bodyfat()
{
  while (1)
  {
    cout << "\n\n  ENTER YOUR GENDER \n 1.MALE  2.FEMALE\t\t\t\t\t";
    cin >> g;

    if (g == 1)
    {
      while (1)
      {
        cout << "\n\n ENTER YOUR ACTIVITY LEVEL" << endl;
        cout << " 1.ATHLETES 2.FIT NON-ATHLETES 3.ACCEPTABLE" << endl
             << " 4.OVERWEIGHT 5.OBESITY \t\t\t\t";
        cin >> a;
        if (a == 1)
        {
          cout << "\n\n BODY FAT\t\t\t\t\t\t 6%-13%";
          break;
        }
        else if (a == 2)
        {
          cout << "\n\n BODY FAT\t\t\t\t\t\t 14%-17%";
          break;
        }
        else if (a == 3)
        {
          cout << "\n\n BODY FAT\t\t\t\t\t\t 18%-25%";
          break;
        }
        else if (a == 4)
        {
          cout << "\n\n BODY FAT\t\t\t\t\t\t 26%-37%";
          break;
        }
        else if (a == 5)
        {
          cout << "\n\n BODY FAT\t\t\t\t\t\t 38% OR MORE";
          break;
        }
        else
          cout << "\n INVALID CHOICE";
      }
      break;
    }

    else if (g == 2)
    {
      while (1)
      {
        cout << "\n\n ENTER YOUR ACTIVITY LEVEL" << endl;
        cout << " 1.ATHLETES 2.FIT NON-ATHLETES 3.ACCEPTABLE" << endl
             << " 4.OVERWEIGHT 5.OBESITY \t\t\t\t";
        cin >> a;
        if (a == 1)
        {
          cout << "\n\n BODY FAT\t\t\t\t\t\t 14%-20%";
          break;
        }

        else if (a == 2)
        {
          cout << "\n\n BODY FAT\t\t\t\t\t\t 21%-24%";
          break;
        }

        else if (a == 3)
        {
          cout << "\n\n BODY FAT\t\t\t\t\t\t 25%-31%";
          break;
        }

        else if (a == 4)
        {
          cout << "\n\n BODY FAT\t\t\t\t\t\t 32%-41%";
          break;
        }

        else if (a == 5)
        {
          cout << "\n\n BODY FAT\t\t\t\t\t\t 42% OR MORE";
          break;
        }

        else
          cout << "\n INVALID CHOICE";
      }
      break;
    }

    else
      cout << "\n INVALID CHOICE.... ENTER AGAIN";
  }
}