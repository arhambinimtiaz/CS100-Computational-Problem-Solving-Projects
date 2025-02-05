#include <cstdio>
#include <iostream>

using namespace std;

void maxgif1(string dataset[][9])// Q1
{
    string a[4212];
    for(int i=1;i<4212;i++) // storing names in array a.
    {
         a[i-1]=dataset[i][2];
    }
    int j=1;
    int b[4213];
    int k=0;
    while(j<4213) // matching first 29 letters of each array.
    {
        int counter=0;
        for(int i=0;i<4212;i++)
        {   
            if(a[i].substr(0,29)==dataset[j][2].substr(0,29))
            {
                a[i]='*'; // replacing entity where matched with "*".
                counter++;
            }
        }
        b[k]=counter; j++;k++;//if j is one k will be 0 so on so don't effect.
    }
    int temp=b[0],temp2=0;//temp = no. of gifts, and temp2 = the array index.
    for(int i=0;i<4212;i++)
    {
        if(b[i]>temp)
        {
            temp=b[i];
            temp2=i;
        }
    }
    cout<<dataset[temp2+1][2]<<"\t Total gifts received: "<<temp;
    int temp3=b[0],temp4=0;

     for(int i=0;i<4212;i++)
    {
        if(b[i]<temp && b[i]>temp3)
        {
            temp3=b[i];
            temp4=i;
        }
    }

     int temp5=b[0],temp6=0;

     for(int i=0;i<4212;i++)
    {
        if(b[i]<temp && b[i]<temp3 && b[i]>temp5)
        {
            temp5=b[i];
            temp6=i;
        }
    }
    cout<<endl;
    cout<<dataset[temp4+1][2]<<"\t Total gifts received: "<<temp3;
    cout<<endl;
    cout<<dataset[temp6+1][2]<<"\t Total gifts received: "<<temp5;
}                               // Q1

void most_exp_gif_in_total(string dataset[][9])
{
    string a[4212];
    string w[4212];
    int b[4212];
    for (int i = 1; i < 4213; i++)  
        {   
            w[i-1] = dataset[i][5];
            a[i-1] = dataset[i][2];
            b[i-1] = stoi(w[i-1]);
            
        }
    int j=1;
    int c[4213];
    int k=0;
    while(j<4213) 
    {
        int counter=0;
        for(int i=0;i<4212;i++)
        {   
            if((a[i].substr(0,29)==dataset[j][2].substr(0,29)))
            {
                a[i]='*'; // replacing entity where matched with "*".
                counter=counter+b[i];
            }
        }
        k=j-1;
        c[k]=counter; j++;//k++;//c[k] to store total value of gifts.
    }
    int temp=c[0],temp2=0;
    for(int i=0;i<4212;i++)
    {
        if(c[i]>temp)
        {
            temp=c[i];
            temp2=i;
        }
    }
    cout<<dataset[temp2+1][2]<<"\t Total value of gifts received: "<<temp;
    int temp3=c[0],temp4=0;

     for(int i=0;i<4212;i++)
    {
        if(c[i]<temp && c[i]>temp3)
        {
            temp3=c[i];
            temp4=i;
        }
    }

     int temp5=c[0],temp6=0;

     for(int i=0;i<4212;i++)
    {
        if( c[i]<temp3 && c[i]>temp5)
        {
            temp5=c[i];
            temp6=i;
        }
    }
    cout<<endl;
    cout<<dataset[temp4+1][2]<<"\t Total value of gifts received: "<<temp3;
    cout<<endl;
    cout<<dataset[temp6+1][2]<<"\t\t Total value of gifts received: "<<temp5;
}

    int assed(string dataset[][9])  //Q3
    {
        int b[4212]; 
        string a[4212]; 
        int z=0;
        for (int i = 1; i < 4213; i++)
        {
            a[i-1] = dataset[i][5];
            b[i-1] = stoi(a[i-1]);
            z=z+b[i-1];
            
        }

        return z;
    }                          //Q3

    int retention_cost_paid(string dataset[][9],string nam) //Q4
    {
        int b[4212]; // retention cost
        string a[4212],c[4212]; //for names
        for (int i = 1; i < 4213; i++) 
        {
            a[i-1] = dataset[i][2];
            c[i-1] = dataset[i][6];
            b[i-1] = stoi (c[i-1]);
        }
    
        int z=0;
            for(int i=0;i<4212;i++) 
            {   
                if(nam.substr(0,29)==a[i].substr(0,29))
                {   
                    z=z+b[i];
                }
            }
        return z;
    }                                      //Q4

    void didnt_retain(string dataset[][9]) //Q5
    {
        string a[4213];
        for(int i=1;i<4213;i++)
        {
            a[i-1]=dataset[i][7];
        }

        int counter=0;
        for(int i=0;i<4213;i++)
        {
            if(a[i]=="No")
            {
                counter++;
            }
        }
        
        string b[counter];
        int c=0;
        for(int i=0;i<4213;i++)
        {
            if(a[i]=="No")
            {
                b[c]=dataset[i][2];
                c++;
            }
        }

        for(int i=0;i<counter;i++)
        {   
            for(int j=i+1;j<counter;j++)
            {
                if(b[i]==b[j])
                {
                    b[j]="*";
                }
            }
        }

        for(int i=0;i<counter;i++)
        {
            for(int j=0;j<4213;j++)
            {
                if(b[i]==dataset[j][2] && dataset[j][7]=="Yes")
                {
                    b[i]="*";
                    break;
                }
            }
        }

        for(int i=0;i<counter;i++)
        {   if(b[i]!="*")
            {cout<<b[i]<<endl;
            }
        }
    }                                          //Q5

    void retained_but_pay(string dataset[][9]) //Q6
    {
        string a[4213],b[4213];
        for(int i=1;i<4213;i++)
        {
            a[i-1]=dataset[i][6];// retention cost
            b[i-1]=dataset[i][7];// retained or not
        }
        
        int counter=0; //with only a==0 count =2816 and with b == yes count =2370.
        for(int i=0;i<4213;i++)
        {
            if(a[i]=="0" && b[i]=="Yes")
            {
                counter++;
            }
        }
        int c[counter];
        int pp=0;
        for(int i=0;i<4213;i++)
        {
            if(a[i]=="0" && b[i]=="Yes")
            {
                c[pp]=i;
                pp++;
            }
        }

        string d[counter];
        for(int i=0;i<counter;i++)
        {
        d[i]=dataset[c[i]][2];
        }

        for(int i=0;i<counter;i++)
        {
            for(int j=i+1;j<counter;j++)
            {
                if(d[i]==d[j])
                {
                    d[j]="*";
                }
            }
        }

         for(int i=0;i<counter;i++)
        {
            for(int j=0;j<4213;j++)
                {
                    if(d[i]==dataset[j][2] && dataset[j][6]!="0")
                    {
                        d[i]="*";
                        break;
                    }
                }
        }

        for(int i=0;i<counter;i++)
        {
            if(d[i]!="*")
                cout<<d[i]<<endl;
        }
    }                                  //Q6

void mostexpgift(string dataset[][9])  //Q7
{
    int b[4212]; 
    string a[4212]; 
    for (int i = 1; i < 4213; i++) 
    {
        a[i-1] = dataset[i][5];
        b[i-1] = stoi (a[i-1]);
    }
    int z=b[0];
    int temp=0;
        for(int i=0;i<=4212;i++) 
        {
            if(b[i]>z)
            {
                z=b[i];
                temp =i;
            }
        }
    cout<<"The most expensive gift received in Tosha Khana is:\t"<<dataset[temp+1][0];
    cout<<"\nIts cost is:\t\t\t\t\t\t"<<z;
}                                       //Q7

void mostexp_gift_not_retained(string dataset[][9])  //Q8
{
    int b[4212]; 
    string a[4212]; 
    for (int i = 1; i < 4213; i++) 
    {
        a[i-1] = dataset[i][5];
        b[i-1] = stoi (a[i-1]);
    }
    int z=b[0];
    int temp=0;
        for(int i=0;i<=4212;i++) 
        {
            if(b[i]>z && dataset[i+1][7]=="No")
            {
                z=b[i];
                temp =i;
            }
        }
    cout<<"The most expensive gift which was not retained by any recipient is:\t"<<dataset[temp+1][0];
    cout<<"\nIts cost is:\t\t\t\t\t\t"<<z;
}                                           //Q8


void morethanlimit(string dataset[][9],int c) //Q9
{
    int b[4212]; // should be 4214
    string a[4212]; //sould be 4214
    for (int i = 1; i < 4213; i++) {
        a[i-1] = dataset[i][5];
        b[i-1] = stoi (a[i-1]);
    }
    for(int i=0;i<=4211;i++) // only upto 3rd last data
    {
        if(b[i]>c)
        {
            cout<<dataset[i+1][0]<<endl;
        }
    }
}                                          //Q9
void more_than_one(string dataset[][9])    //Q10
{
    string a[4213];
    for(int i=1;i<4213;i++)
    {
        a[i-1]=dataset[i][0];
    }
    int counter=0;
    for(int i=0;i<4213;i++)
    {
        if(a[i].substr(0,2)=="a." || a[i].substr(0,3)=="\"a.")
        counter++;
    }
    
    int b[counter];
    int c=0;


    for(int i=0;i<4213;i++)
    {
        if(a[i].substr(0,2)=="a." || a[i].substr(0,3)=="\"a.")
        {
            b[c]=i;
            c++;
        }
    }

    string d[counter];
    for(int i=0;i<counter;i++)
    {
        d[i]=dataset[b[i]][2];
    }
    
    int e[counter];
    int counter2=1;
    for(int i=0;i<counter;i++)
    {   
        counter2=1;
        for(int j=i+1;j<counter;j++)
        {
            if(d[i]==d[j])
            {
                d[j]="*";
                counter2++;
            }
        }
        e[i]=counter2;
    }

    for(int i=0;i<counter;i++)
    {
        if(d[i]!="*")
            cout<<d[i]<<"\tReceived more than one gifts "<<e[i]<<" times."<<endl;
    }
}                                           //Q10







const int N = 4213;// I think total datasets/cases given to us

void read_row(string *arr, FILE *input_file) {
    char ch;

    for (int i = 0; i < 8; i++) {
        string s = "";
        while ((ch = getc(input_file)) != '\t')
            s += ch == '\n' ? ' ' : ch;
        arr[i] = s;
    }

    string s = "";
    ch = getc(input_file);
    if (ch == '"') {
        while ((ch = getc(input_file)) != '"' && ch != EOF)
            s += ch == '\n' ? ' ' : ch;
        getc(input_file);
    } else {
        s += ch;
        while ((ch = getc(input_file)) != '\n' && ch != EOF)
            s += ch;
    }
    arr[8] = s;
}

int main() {
    FILE *input_file = fopen("project_data.txt", "r");

    string dataset[N][9];
    for (int i = 0; i < N; i++)
        read_row(dataset[i], input_file);
    string name[N];
    

// starts from here.
    cout<<"\t\t\t\t     CS-100 welcomes you to Tosha Khana's in-depth analysis\n";
    cout<<"\t\t\t\t     \033[4mGroup Members:\033[0m Muhammad Bilal and Arham Bin Imtiaz.\n";
    cout<<"\t\t\t\t\t       ___________________________\n";
    cout<<"\t\t\t\t\t\tWhat task you want to do: \n";
    cout<<"\t\t\t\t\t       ---------------------------\n";
    cout<<"1.  To chech the names of three recipients who received the maximum number of gifts from Tosha Khana.\n";
    cout<<"2.  To find the names of three recipients who received the most expensive gifts in total from Tosha Khana.\n";
    cout<<"3.  To find the total assessed value of all gifts.\n";
    cout<<"4.  To find the total retention cost paid by a recipient.\n";
    cout<<"5.  To find the name of the recipient who didn't retain any gift.\n";
    cout<<"6.  To find name of the recipient who retained some gift(s) but didn't pay any retention cost.\n";
    cout<<"7.  To find the name of the most expensive gift received in Tosha Khana.\n";
    cout<<"8.  To find the name of the most expensive gift received in Tosha Khana which was not retained by any recipient.\n";
    cout<<"9.  To find the names of all gifts whose retention cost is more than a given limit.\n";
    cout<<"10. To check unique perspective about the data\n    In this we will see how many times recipients received multiple gifts during a single visit.\n\n";
    int t;
    cout<<"\033[4m\"Enter your choice:\"\033[0m\t";
    cin>>t;
    while((t>10) || (t<1))
    {
        cout<<"\t\t\t\t\t\tWrong input :(\n \033[4mTry Again:\"\033[0m\t";
        cin>>t;
    } 
    if(t==1)
        maxgif1(dataset); //Q1
        
    if(t==2)
    {most_exp_gif_in_total(dataset);}//Q2
    if(t==3)
        cout<<"\nThe total assessed value of all gifts: \t"<<assed(dataset); //Q3
    
     if(t==4)
    {
        cout<<"Enter a name: ";
        string nam;
        cin.ignore();
        getline(cin,nam);
        int z;
        z=retention_cost_paid(dataset,nam);
        cout<<"The total retention cost paid by \""<<nam<<"\" is:\t"<<z;
    }
   
    if(t==5)
        didnt_retain(dataset); //Q5

    if(t==6)
        retained_but_pay(dataset); //Q6
        
    if(t==7)
        mostexpgift(dataset); //Q7
       
    if(t==8)
        mostexp_gift_not_retained(dataset); //Q8
        
    if(t==9)
        {                       //Q9
            cout<<"Enter the limit value: ";
            int c;
            cin>>c;
            morethanlimit(dataset,c);
        }

    if(t==10)
        more_than_one(dataset);//Q10
        
}