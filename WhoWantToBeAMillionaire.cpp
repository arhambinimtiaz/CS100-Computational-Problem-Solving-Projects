#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
int audience_pole1(string b1)
{   
      cout << "You have used your audience pole life line." << endl;
      cout << "The audience pole results are:" << endl;
      cout << "A: 9% \nB: 76% \nC: 8% \nD: 7%" << endl;
}
int audience_pole2(string b2)
{
      cout << "You have used your audience pole life line." << endl;
      cout << "The audience pole results are:" << endl;
      cout << "A: 6% \nB: 3% \nC: 20% \nD: 71%" << endl;
}
int audience_pole3(string b3)
{
      cout << "You have used your audience pole life line." << endl;
      cout << "The audience pole results are:" << endl;
      cout << "A: 6% \nB: 43% \nC: 43% \nD: 8%" << endl;
}
int audience_pole4(string b4)
{
      cout << "You have used your audience pole life line." << endl;
      cout << "The audience pole results are:" << endl;
      cout << "A: 9% \nB: 40% \nC: 45% \nD: 6%" << endl; 
}
int audience_pole5(string b5)
{
      cout << "You have used your audience pole life line." << endl;
      cout << "The audience pole results are:" << endl;
      cout << "A: 31% \nB: 29% \nC: 21% \nD: 19%" << endl;
}
int main()
{
    //RulesText
    ofstream MyWriteFile0("Rules.txt");
    MyWriteFile0 << "The rules are very simple:" << endl;
    MyWriteFile0 << "1) There are four option A,B,C,D for a question.\n2) One of the option is right and you have to wisely choose it." << endl;
    MyWriteFile0 << "3) You have been given audience pole life line for help.\n4) You can use this for first five questions only." << endl;
    MyWriteFile0 << "5) Enter AP in option to access it.\n6) Each question is worth 100000 rupees." << endl;
    MyWriteFile0 << "7) For each right question you will get 100000 rupees.\n8) In case of wrong answer your game will be over and you will get the money you gained from previous questions." << endl;
    MyWriteFile0 << "ENJOY :)" << endl;
    MyWriteFile0.close();

    //QuestionText
    ofstream MyWriteFile1("Q1.txt");
    MyWriteFile1 << "Q1: What is the capital city of Pakistan? \n";
    MyWriteFile1 << " ____________________________\n";
    MyWriteFile1 << "|a)Lahore     |  b)Islamabad |\n";
    MyWriteFile1 << "|_____________|______________|\n";
    MyWriteFile1 << "|c)Karachi    |  d)Quetta    |\n";
    MyWriteFile1 << "|_____________|______________|";
    MyWriteFile1.close();

    ofstream MyWriteFile2("Q2.txt");
    MyWriteFile2 << "Q2: What was the age of Holy Prophet(S.A.W) when he left this world? \n";
    MyWriteFile2 << " _________________________\n";
    MyWriteFile2 << "|a)60       |    b)61     |\n";
    MyWriteFile2 << "|___________|_____________|\n";
    MyWriteFile2 << "|c)62       |    d)63     |\n";
    MyWriteFile2 << "|___________|_____________|";
    MyWriteFile2.close();
     
    ofstream MyWriteFile3("Q3.txt");
    MyWriteFile3 << "Q3: Which one of the following is the 14th letter of alphabets? \n";
    MyWriteFile3 << " _____________________\n";
    MyWriteFile3 << "|a)O      |  b)N      |\n";
    MyWriteFile3 << "|_________|___________|\n";
    MyWriteFile3 << "|c)M      |  d)L      |\n";
    MyWriteFile3 << "|_________|___________|";
    MyWriteFile3.close();
     
    ofstream MyWriteFile4("Q4.txt");
    MyWriteFile4 << "Q4: In business studies,which one of the following is the rarest form of markets? \n";
    MyWriteFile4 << " ______________________________________\n";
    MyWriteFile4 << "|a)Monopoly             |  b)Oligopoly |\n";
    MyWriteFile4 << "|_______________________|______________|\n";
    MyWriteFile4 << "|c)Perfect Competition  |  d)Stocks    |\n";
    MyWriteFile4 << "|_______________________|______________|";
    MyWriteFile4.close();
     
    ofstream MyWriteFile5("Q5.txt");
    MyWriteFile5 << "Q5: Which insect shorted out an early supercomputer and inspired the term computer bug? \n";
    MyWriteFile5 << " __________________________________\n";
    MyWriteFile5 << "|a)Moth             |  b)Roach     |\n";
    MyWriteFile5 << "|___________________|______________|\n";
    MyWriteFile5 << "|c)Japanese bettle  |  d)Fly       |\n";
    MyWriteFile5 << "|___________________|______________|";
    MyWriteFile5.close();
     
    ofstream MyWriteFile6("Q6.txt");
    MyWriteFile6 << "Q6: Which of these scientists does not have a chemical element on the periodic table named after him? \n";
    MyWriteFile6 << " ______________________________________\n";
    MyWriteFile6 << "|a)Albert Einstein   |  b)Alfred Nobel |\n";
    MyWriteFile6 << "|____________________|_________________|\n";
    MyWriteFile6 << "|c)Thomas Edison     |  d)Enrico Fermi |\n";
    MyWriteFile6 << "|____________________|_________________|";
    MyWriteFile6.close();
     
    ofstream MyWriteFile7("Q7.txt");
    MyWriteFile7 << "Q7: Since its inception, which category of the Nobel Prize has been awarded every single year? \n";
    MyWriteFile7 << " ___________________________\n";
    MyWriteFile7 << "|a)Physics  |  b)Chemistry  |\n";
    MyWriteFile7 << "|___________|_______________|\n";
    MyWriteFile7 << "|c)Peace    |  d)Economics  |\n";
    MyWriteFile7 << "|___________|_______________|";
    MyWriteFile7.close();
     
    ofstream MyWriteFile8("Q8.txt");
    MyWriteFile8 << "Q8: The Earth is approximately how many miles away from the Sun? \n";
    MyWriteFile8 << " __________________________________\n";
    MyWriteFile8 << "|a)9.3 million   |  b)39 million   |\n";
    MyWriteFile8 << "|_______________ |_________________|\n";
    MyWriteFile8 << "|c)93 million    |  d)193 million  |\n";
    MyWriteFile8 << "|________________|_________________|";
    MyWriteFile8.close();
     
    ofstream MyWriteFile9("Q9.txt");
    MyWriteFile9 << "Q9: Which of the following landlocked countries is entirely contained within another country? \n";
    MyWriteFile9 << " ____________________________________\n";
    MyWriteFile9 << "|a)Burkina Faso    |  b)Lesotho      |\n";
    MyWriteFile9 << "|__________________|_________________|\n";
    MyWriteFile9 << "|c)Mongolia        |  d)Luxembourg   |\n";
    MyWriteFile9 << "|__________________|_________________|";
    MyWriteFile9.close();
     
    ofstream MyWriteFile10("Q10.txt");
    MyWriteFile10 << "Q10: Nephelococcygia is the practice of doing what? \n";
    MyWriteFile10 << " ____________________________________________________________________\n";
    MyWriteFile10 << "|a)Finding shapes in clouds        |  b)Sneezing with your eyes open |\n";
    MyWriteFile10 << "|__________________________________|_________________________________|\n";
    MyWriteFile10 << "|c)Breaking glass with your voice  |  d)Swimming in freezing water   |\n";
    MyWriteFile10 << "|__________________________________|_________________________________|";
    MyWriteFile10.close();

    ofstream MyWriteFile11("Introduction.txt");
    MyWriteFile11 << "CS 100 welcomes you to:" << endl;
    MyWriteFile11 << "   **************************" << endl;
    MyWriteFile11 << "   **    Who Wants To Be   **" << endl;
    MyWriteFile11 << "   **     A Millionaire    **" << endl;
    MyWriteFile11 << "   **************************" << endl;
    MyWriteFile11 << "Here is the chance for you to become a millionire.\nWhat you have to do is simple. You have to answer 10 questions." << endl;
    MyWriteFile11 << "Enter any key to continue: ";
    MyWriteFile11.close();

    //Price money
    int price[11] = {0,100000,200000,300000,400000,500000,600000,700000,800000,900000,1000000};
    string exit;
    //Intoduction:
    cout << "CS 100 welcomes you to:" << endl;
    cout << "   *************************" << endl;
    cout << "   **   Who Wants To Be   **" << endl;
    cout << "   **    A Millionaire    **" << endl;
    cout << "   *************************" << endl;
    cout << "Here is the chance for you to become a millionire.\nWhat you have to do is simple. You have to answer 10 questions." << endl;
    cout << "Enter any key to continue: ";
    string i;
    cin >> i;
    cout << endl;

    //Rules
    string myText0;
    ifstream MyReadFile0("Rules.txt");
    while (getline (MyReadFile0, myText0)) {
    cout << myText0 << endl;
    }
    string r;
    cout << "Enter any key to start: ";
    cin >> r;

    //Question1
    string myText1;
    cout << endl;
    ifstream MyReadFile1("Q1.txt");
    while (getline (MyReadFile1, myText1)) {
    cout << myText1 << endl;
    }
    cout << "   ++Enter AP to avail audience pole++     " << endl;
    string b1;
    cout << "Enter option: ";
     cin >> b1;
     while(b1 !="a" && b1 !="b" && b1!="c" && b1!="d" && b1 !="A" && b1!="B" && b1!="C" && b1!="D" && b1!= "ap" && b1!="AP" && b1 !="Ap" && b1!="eo" && b1!="EO" && b1!="Eo")
     {
        cout << "Invalid option" << endl;
        cout << "Enter option again: ";
        cin >> b1;
     }
      if (b1=="b" || b1=="B")
       {
       cout << "Correct answer\n" << "You have won " << price[1] << " " << "rupess" << endl;
       }
      else if (b1=="ap" || b1=="AP" || b1=="Ap")
       {
         audience_pole1(b1);
         cout << "Enter option: ";
        cin >> b1;
        while(b1 !="a" && b1 !="b" && b1!="c" && b1!="d" && b1 !="A" && b1!="B" && b1!="C" && b1!="D" && b1!= "ap" && b1!="AP" && b1 !="Ap" )
        {
        cout << "Invalid option" << endl;
        cout << "Enter option again: ";
        cin >> b1;
        }
         if (b1=="b" || b1=="B")
        {
       cout << "Correct answer\n" << "You have won " << price[1] << " " << "rupess" << endl;
        }
         else
        {
         cout << "Wrong answer" << endl;
         cout << "Your total prize money is " << price[0] << " " << "rupees" << endl;
         cout << "Your game is over Thank you." << endl;
         cout << "Press any key to exit the game: ";
         cin >> exit;
         return 0;
        }
       }
      else
       {
       cout << "Wrong answer" << endl;
       cout << "Your total prize money is " << price[0] << " " << "rupees" << endl;
       cout << "Your game is over Thank you." << endl;
       cout << "Press any key to exit the game: ";
       cin >> exit;
       return 0;
      }

    //Question2
    cout << endl;
    string myText2;
    ifstream MyReadFile2("Q2.txt");
    while (getline (MyReadFile2, myText2)) {
     cout << myText2 << endl;
    }
    cout << "   ++Enter AP to avail audience pole++     " << endl;
      string b2;
      cout << "Enter option: ";
     cin >> b2;
     while(b2 !="a" && b2 !="b" && b2!="c" && b2!="d" && b2 !="A" && b2!="B" && b2!="C" && b2!="D" && b2!="ap" && b2!="AP" && b2!="Ap")
     {
        cout << "Invalid option" << endl;
        cout << "Enter option again: ";
        cin >> b2;
     }
      if (b2=="d" || b2=="D")
      {
       cout << "Correct answer\n" << "You have won " << price[2] << " " << "rupess" << endl;
      }
      else if (b2=="ap" || b2=="AP" || b2=="Ap")
      {
         audience_pole2(b2);
          cout << "Enter option: ";
         cin >> b2;
         while(b2 !="a" && b2 !="b" && b2!="c" && b2!="d" && b2 !="A" && b2!="B" && b2!="C" && b2!="D" && b2!="ap" && b2!="AP" && b2!="Ap")
         {
         cout << "Invalid option" << endl;
         cout << "Enter option again: ";
         cin >> b2;
         }
         if (b2=="d" || b2=="D")
         {
         cout << "Correct answer\n" << "You have won " << price[2] << " " << "rupess" << endl;
         }
         else
         {
          cout << "Wrong answer" << endl;
          cout << "Your total prize money is " << price[1] << " " << "rupees" << endl;
          cout << "Your game is over Thank you." << endl;
          cout << "Press any key to exit the game: ";
          cin >> exit;
          return 0;
         }
      }
      else
      {
       cout << "Wrong answer" << endl;
       cout << "Your total prize money is " << price[1] << " " << "rupees" << endl;
       cout << "Your game is over Thank you" << endl;
       cout << "Press any key to exit the game: ";
       cin >> exit;
       return 0;
      }

    //Question3
     cout << endl;
      string myText3;
    ifstream MyReadFile3("Q3.txt");
    while (getline (MyReadFile3, myText3)) {
     cout << myText3 << endl;
    }
    cout << "   ++Enter AP to avail audience pole++     " << endl;
      string b3;
      cout << "Enter option: ";
     cin >> b3;
     while(b3 !="a" && b3 !="b" && b3!="c" && b3!="d" && b3 !="A" && b3!="B" && b3!="C" && b3!="D" && b3!="ap" && b3!="AP" && b3!="Ap")
     {
        cout << "Invalid option" << endl;
        cout << "Enter option again: ";
        cin >> b3;
     }
      if (b3=="b" || b3=="b")
      {
       cout << "Correct answer\n" << "You have won " << price[3] << " " << "rupess" << endl;
      }
       else if (b3=="ap" || b3=="AP" || b3=="Ap")
      {
         audience_pole3(b3);
         cout << "Enter option: ";
        cin >> b3;
        while(b3 !="a" && b3 !="b" && b3!="c" && b3!="d" && b3 !="A" && b3!="B" && b3!="C" && b3!="D" && b3!="ap" && b3!="AP" && b3!="Ap")
         {
        cout << "Invalid option" << endl;
        cout << "Enter option again: ";
        cin >> b3;
        }
       if (b3=="b" || b3=="B")
       {
       cout << "Correct answer\n" << "You have won " << price[3] << " " << "rupess" << endl;
       }
       else
       {
       cout << "Wrong answer" << endl;
       cout << "Your total prize money is " << price[2] << " " << "rupees" << endl;
       cout << "Your game is over Thank you." << endl;
       cout << "Press any key to exit the game: ";
       cin >> exit;
       return 0;
       }
      }
      else
      {
       cout << "Wrong answer" << endl;
       cout << "Your total prize money is " << price[2] << " " << "rupees" << endl;
       cout << "Your game is over Thank you." << endl;
       cout << "Press any key to exit the game: ";
       cin >> exit;
       return 0;
      }

    //Question4 
     cout << endl; 
      string myText4;
    ifstream MyReadFile4("Q4.txt");
    while (getline (MyReadFile4, myText4)) {
     cout << myText4 << endl;
     }
     cout << "   ++Enter AP to avail audience pole++     " << endl;
      string b4;
      cout << "Enter option: ";
     cin >> b4;
     while(b4 !="a" && b4 !="b" && b4!="c" && b4!="d" && b4 !="A" && b4!="B" && b4!="C" && b4!="D" && b4!="ap" && b4!="AP" && b4!="Ap")
     {
        cout << "Invalid option" << endl;
        cout << "Enter option again: ";
        cin >> b4;
     }
      if (b4=="c" || b4=="C")
      {
       cout << "Correct answer\n" << "You have won " << price[4] << " " << "rupess" << endl;
      }
       else if (b4=="ap" || b4=="AP" || b4=="Ap")
      {
         audience_pole4(b4);
         cout << "Enter option: ";
        cin >> b4;
        while(b4 !="a" && b4 !="b" && b4!="c" && b4!="d" && b4 !="A" && b4!="B" && b4!="C" && b4!="D" && b4!="ap" && b4!="AP" && b4!="Ap")
       {
        cout << "Invalid option" << endl;
        cout << "Enter option again: ";
        cin >> b4;
       }
       if (b4=="c" || b4=="C")
       {
       cout << "Correct answer\n" << "You have won " << price[4] << " " << "rupess" << endl;
       }
       else
       {
       cout << "Wrong answer" << endl;
       cout << "Your total prize money is " << price[3] << " " << "rupees" << endl;
       cout << "Your game is over Thank you." << endl;
       cout << "Press any key to exit the game: ";
       cin >> exit;
       return 0;
       }
      }
      else
      {
       cout << "Wrong answer" << endl;
       cout << "Your total prize money is " << price[3] << " " << "rupees" << endl;
       cout << "Your game is over Thank you." << endl;
       cout << "Press any key to exit the game: ";
       cin >> exit;
       return 0;
      }

    //Question5 
     cout << endl; 
      string myText5;
    ifstream MyReadFile5("Q5.txt");
    while (getline (MyReadFile5, myText5)) {
     cout << myText5 << endl;
    }
    cout << "   ++Enter AP to avail audience pole++     " << endl;
      string b5;
      cout << "Enter option: ";
      cin >> b5;
      while(b5 !="a" && b5 !="b" && b5!="c" && b5!="d" && b5 !="A" && b5!="B" && b5!="C" && b5!="D" && b5!="ap" && b5!="AP" && b5!="Ap")
     {
        cout << "Invalid option" << endl;
        cout << "Enter option again: ";
        cin >> b5;
     }
      if (b5=="a" || b5=="A")
      {
       cout << "Correct answer\n" << "You have won " << price[5] << " " << "rupess" << endl;
      }
       else if (b5=="ap" || b5=="AP" || b5=="Ap")
       {
         audience_pole5(b5);
         cout << "Enter option: ";
        cin >> b5;
         while(b5 !="a" && b5 !="b" && b5!="c" && b5!="d" && b5 !="A" && b5!="B" && b5!="C" && b5!="D" && b5!="ap" && b5!="AP" && b5!="Ap")
       {
        cout << "Invalid option" << endl;
        cout << "Enter option again: ";
        cin >> b5;
       }
       if (b5=="a" || b5=="A")
       {
       cout << "Correct answer\n" << "You have won " << price[5] << " " << "rupess" << endl;
       }
       else
       {
       cout << "Wrong answer" << endl;
       cout << "Your total prize money is " << price[4] << " " << "rupees" << endl;
       cout << "Your game is over Thank you." << endl;
       cout << "Press any key to exit the game: ";
       cin >> exit;
       return 0;
       }
       }
      else
      {
       cout << "Wrong answer" << endl;
       cout << "Your total prize money is " << price[4] << " " << "rupees" << endl;
       cout << "Your game is over Thank you." << endl;
       cout << "Press any key to exit the game: ";
       cin >> exit;
       return 0;
      }
 string j;
 cout << endl;
 cout << "Your are halfway through the game. Let's make this difficult. Now you cannot choose any lifeline." << endl;
 cout << "Enter any key to continue: ";
 cin >> j;
 cout << endl;
    //Question6 
      string myText6;
    ifstream MyReadFile6("Q6.txt");
    while (getline (MyReadFile6, myText6)) {
     cout << myText6 << endl;
    }
      string b6;
      cout << "Enter option: ";
     cin >> b6;
     while(b6 !="a" && b6 !="b" && b6!="c" && b6!="d" && b6 !="A" && b6!="B" && b6!="C" && b6!="D")
     {
        cout << "Invalid option" << endl;
        cout << "Enter option again: ";
        cin >> b6;
     }
      if (b6=="c" || b6=="C")
       cout << "Correct answer\n" << "You have won " << price[6] << " " << "rupess" << endl;
      else
      {
       cout << "Wrong answer" << endl;
       cout << "Your total prize money is " << price[5] << " " << "rupees" << endl;
       cout << "Your game is over Thank you." << endl;
       cout << "Press any key to exit the game: ";
       cin >> exit;
       return 0;
      }

    //Question7 
     cout << endl;  
      string myText7;
    ifstream MyReadFile7("Q7.txt");
    while (getline (MyReadFile7, myText7)) {
     cout << myText7 << endl;
    }
      string b7;
      cout << "Enter option: ";
     cin >> b7;
     while(b7 !="a" && b7 !="b" && b7!="c" && b7!="d" && b7 !="A" && b7!="B" && b7!="C" && b7!="D")
     {
        cout << "Invalid option" << endl;
        cout << "Enter option again: ";
        cin >> b7;
     }
      if (b7=="d" || b7=="D")
       cout << "Correct answer\n" << "You have won " << price[7] << " " << "rupess" << endl;
      else
      {
       cout << "Wrong answer" << endl;
       cout << "Your total prize money is " << price[6] << " " << "rupees" << endl;
       cout << "Your game is over Thank you." << endl;
       cout << "Press any key to exit the game: ";
       cin >> exit;
       return 0;
      }

    //Question8 
     cout << endl;  
      string myText8;
    ifstream MyReadFile8("Q8.txt");
    while (getline (MyReadFile8, myText8)) {
     cout << myText8 << endl;
    }
      string b8;
      cout << "Enter option: ";
     cin >> b8;
     while(b8 !="a" && b8 !="b" && b8!="c" && b8!="d" && b8 !="A" && b8!="B" && b8!="C" && b8!="D")
     {
        cout << "Invalid option" << endl;
        cout << "Enter option again: ";
        cin >> b8;
     }
      if (b8=="c" || b8=="C")
       cout << "Correct answer\n" << "You have won " << price[8] << " " << "rupess" << endl;
      else
      {
       cout << "Wrong answer" << endl;
       cout << "Your total prize money is " << price[7] << " " << "rupees" << endl;
       cout << "Your game is over Thank you." << endl;
       cout << "Press any key to exit the game: ";
       cin >> exit;
       return 0;
      }

    //Question9 
     cout << endl; 
      string myText9;
    ifstream MyReadFile9("Q9.txt");
    while (getline (MyReadFile9, myText9)) {
     cout << myText9 << endl;
    }
      string b9;
      cout << "Enter option: ";
     cin >> b9;
     while(b9 !="a" && b9 !="b" && b9!="c" && b9!="d" && b9 !="A" && b9!="B" && b9!="C" && b9!="D")
     {
        cout << "Invalid option" << endl;
        cout << "Enter option again: ";
        cin >> b9;
     }
      if (b9=="b" || b9=="B")
       cout << "Correct answer\n" << "You have won " << price[9] << " " << "rupess" << endl;
      else
      {
       cout << "Wrong answer" << endl;
       cout << "Your total prize money is " << price[8] << " " << "rupees" << endl;
       cout << "Your game is over Thank you." << endl;
       cout << "Press any key to exit the game: ";
       cin >> exit;
       return 0;
      }
    
    //Question10 
     cout << endl; 
      string myText10;
    ifstream MyReadFile10("Q10.txt");
    while (getline (MyReadFile10, myText10)) {
     cout << myText10 << endl;
    }
      string b10;
      cout << "Enter option: ";
     cin >> b10;
     while(b10 !="a" && b10 !="b" && b10!="c" && b10!="d" && b10 !="A" && b10!="B" && b10!="C" && b10!="D")
     {
        cout << "Invalid option" << endl;
        cout << "Enter option again: ";
        cin >> b10;
     }
      if (b10=="a" || b10=="A")
       cout << "Correct answer\n" << "You have won " << price[10] << " " << "rupess.\n*******************************************\n** Congratulations You are a Millionaire **\n*******************************************" << endl;
       else 
       {
       cout << "Wrong answer" << endl;
       cout << "Your total prize money is " << price[9] << " " << "rupees" << endl;
       cout << "Your game is over Thank you." << endl;
       cout << "Press any key to exit the game: ";
       cin >> exit;
       return 0;
       }
  cout << "Press any key to exit the game: ";
  cin >> exit;
  return 0;
}