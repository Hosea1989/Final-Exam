//
//  main.cpp
//  *-* Final Exam *-*
//
//  Created by Damien Hosea on 12/14/19.
//  Copyright © 2019 Damien Hosea. All rights reserved
//*______________________________________________*
//This function takes a STRING and outputs it in
// Reverse, Upper and Lower case.
//*______________________________________________*

#include <iostream>

using namespace std;

//Function prototypes
void Reverse(char*);
void Upper(char*);
void Lower(char*);

//* Function main()
int main()
{
    char string[50];
    cout << "Enter a string: ";
    cin.getline(string, 50);

    Reverse(string); //Function call to the Reverse function
    cout << "The String in Reverse Case: " << string << endl;
    
    Upper(string); //Functio call to the Upper Function
    cout << "The String in Upper Case: " << string << endl;

    Lower(string); //Function call to the Lower Function
    cout << "The String in Lower Case: " << string << endl;

    return 0;
}
//*_______End of the function main()______*
//
//
//*_________Function Reverse Definition________*
void Reverse(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] > 96 && str[i] < 123)
        {
            str[i] -= 32;
        }//end if
        else if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }
}
//*_________End of the Reverse Function________*
//
//
//*_________Function Upper Definition__________*
void Upper(char* str)
{
    for(int i = 0; i < strlen(str); i++)
    {
        if (str[i] > 96 && str[i] < 123)
        {
            str[i] -= 32;
        }
    }
}
//*______End of Upper Function_______*
//
//
//*_______Function Lower Definition_______*
void Lower(char *str)
{
    for(int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }
}
//*_______End of Lower Function__________*



