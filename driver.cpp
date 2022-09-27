/* 
  Author:         Ashley Eubanks
  Section:        1103
  Description:    Create carnival ticketing system that tracks each patron's tickets 
                  and calculates whether customers need to purchase more tickets or 
                  not Max park capacity is 300 on any given day, so set the patrons 
                  array using that Max number of rides for a person is 100 NOTE: only 
                  include NECESSARY .h files and built in libraries in cpp files 
                  (you onnly need fstream in driver for example)
  
*/

#include "patron.h"
#include "ride.h"
#include <fstream>
#include <iostream>
using namespace std;

int userChoice;
Patron patron;
Patron newPatron;
Patron patronList[300];
int numPatrons;
string fileName;
int patronToRemove;

void displayMenuOption(){
  //  Displays menu options and prompts user for meny option entry. Returns userChoice- the users integer value entry
  
  cout << "1. Add Patron" << endl;
  cout << "2. Remove Patron" << endl;
  cout << "3. Modify Patron" << endl;
  cout << "4. View Patron" << endl;
  cout << "0. Exit" << endl;
  
}

int getMenuOption() {
  //  Displays menu options. Prompts user for menu option entry
  //  include an error message when given invalid input?
  cin >> userChoice;
  return userChoice;
}

void addPatron(Patron patronList[], Patron newPatron, int numPatrons /*supposed to be pointer*/){
  /*  adds a patron to the Patron array and increments the passed in numPatrons
      Parameters: patronArray;  an array of patron objects  
                  newPatron;    a patron object to add to the patron array
                  numPatrons;   a pointer to the total # of patrons in the array 
                                (must be dereferenced to increase)                                 
  */
  cout << "You are adding a patron" << endl;
}

// instructions say int, will leave as void for now 
void readExistingPatrons(Patron patronList[], string fileName){
  /*  reads all exitsting patron data from file name that was porvided on the command 
      line in driver; adds patron data to the patron array
      Parameters: patronArray;  an array of patron objects
                  fileName;     a string pulled from argv in main and passed in
  */
  cout << "You are reading existing patrons" << endl;
}

void printFileNotFound(){
  //  Display file not found message
  cout << "File not found." << endl;
}

void displayPatrons(Patron patronList[], int numPatrons){
  /*  Displays all patron first and last name by looping through each patron in the 
      array and calling the display name method in patron
      Parameters: patronArray;  an array of patron objects
                  numPatrons;   an int value of the number of patrons in the array
  */
  cout << "You are displaying patrons" << endl;
}

int getPatronOption(Patron patronList[], int numPatrons){
  /*  Displays all patron first and last name options. Prompts user for menu option entry
      Parameters: patronArray;  an array of patron objects
                  numPatrons;   an int value of the number of patrons in the array
      Returns:    userChoice;   the users integer value entry 
  */
  cout << "You are getting patron option" << endl;
  return userChoice;
}

void removePatron(Patron patronList[], int patronToRemove, int numPatrons /*supposed to be pointer*/){
  /*  Removes a patron from the patron array. Loops through each patron and moves every
      entry after the selected entry up one address space in the array. This means that 
      the last element in the array is in there twice, but that's okay! We're keeping 
      track of the number of patrons
      Parameters: patronArray;    an array of patron objects
                  patronToRemove; an int value entered by the user to remove. Corresponds to array index +1
                  numPatrons;     a pointer to the # of useful patrons in the array (must be dereferenced to decrease)
  */
  cout << "You are removing patron" << endl;
}

Patron createNewPatron(){
  //  creates a new patron object. prompts the user for input and collects it, sets the new
  //  patrons info using the user's input
  //  returns: newPatron; a patron object
  string firstName, lastName;
  int idNum, numTickets;

  cout << "Let's add a patron to the system!" << endl;
  cout << "Enter patron's fist and last name:" << endl;
  cin >> firstName;
  cin >> lastName;

  cout << "Enter patron's ID number (last 4 digits of phone number):" << endl;
  cin >> idNum;

  cout << "How many tickets would they like to purchase?" << endl;
  cin >> numTickets;

  newPatron.setFirstName(firstName);
  newPatron.setLastName(lastName);
  newPatron.setPatronNumber(idNum);
  newPatron.setNumTickets(numTickets);

  return newPatron;
}

void modifyPatron(Patron* patron){
  //  Modifies a selected patron's info
  //  Parameters: patron; a pointer to the patron object to be edited
  //  NEXT CHECKPOINT???? IS THIS SUPPOSED TO BE IN THIS FUNCTION??
  /*displayModOptions();
  getModOption();
  
  switch (userChoice){
    
    case 1:
      addTickets(patron);
      break;
    case 2:
      cout << "Select the ride you'd like to add." << endl;
      displayRideMenu();
      break;
    case 3:
      editName(patron);
      break;
    case 4:
      break;
    default:
      cout << "Invalid input." << endl;
  }*/
}

void displayModOptions(){
  //  Displays all of the options for patron modification(add tickets, purchase ride admit, edit name, exit to main menu)
  cout << "1. Add Tickets" << endl;
  cout << "2. Purchase Ride Admit" << endl;
  cout << "3. Edit Name" << endl;
  cout << "4. Exit to Main Menu" << endl;
  
}

void displayRideMenu(){
  //  Displays all of the options for ride addition (teacups, magic carpet, world tour)
  cout << "1. Teacups" << endl;
  cout << "2. Magic Carpet" << endl;
  cout << "3. World Tour" << endl;
}

int getModOption(){
  //  Displays ride menu options. Prompts user for menu option entry
  //  Returns:  userChoice; the users integer value entry
  cout << "You are getting mod options" << endl;
  cin >> userChoice;
  return userChoice;
}

void addTickets(Patron* patron){
  /*  Add a number of tickets to a patron Prompt the user for the number of tickets 
      they'd like to add set the patron's number of tickets to be equal to the sum of 
      the existing patron tickets and the tickets to add
      Parameters: patron; a pointer to the patron object to modify
  */
  cout << "You are adding tickets" << endl;
}

void addRide(Patron* patron){
  /*  Add a ride to a patron ride array Prompt the user for the ride they'd like to add
      Take the user choice to determine which ride object to create (teacup, worldtour,
      or magic carpet) add the ride object to the end of the patron's ride array if the
      patron has enough tickets to purchase admission Otherwise prompt and ask if they'd 
      like to purchase more tickets.
      Parameters: patron; a pointer to the patron object to modify
  */
  cout << "You are adding ride" << endl;
}

void editName(Patron* patron){
  /*  Edits a user name (first, last, or both) Prompt the user for the portion of the 
      name they'd like to edit (first, last, both) Prompt user to enter new information set
      the selected name variables using user input
      Parameters: patron; a pointer to the patron object to modify
  */
  cout << "You are editing name" << endl;
}

void overwriteFile(Patron patronList[], string fileName, int numPatrons){
  /*  overwrite the supplied patron file (from the command line arguments) so that the 
      list of patrons is updated. Make sure it follows the same format as the provided 
      patronList.txt file create output stream object using file name. loop through 
      patron array and output first name, last name, patron number, and number of remaining
      tickets to the filestream
      Parameters: patronArray;  array of patron objects
                  fileName;     string name of the file from the command line
                  numPatron;    number of patrons in array
  */
  cout << "You are overwriting file" << endl;
}


/*
______________________________________________________________________________________
--------------------------------------------------------------------------------------
______________________________________________________________________________________
*/


int main(){


  do
  {
    
    displayMenuOption();
    userChoice = getMenuOption();


    switch (userChoice) {
      case 1: 
        //calls to add patron function
        createNewPatron();
        addPatron(patronList, newPatron, numPatrons);
        overwriteFile(patronList, fileName, numPatrons);
        break;

     case 2: 
        //calls to remove patron function
        getPatronOption(patronList, numPatrons);
        removePatron(patronList, patronToRemove, numPatrons);
        overwriteFile(patronList, fileName, numPatrons);
        break;

      case 3: 
        //calls to modify patron function
        getPatronOption(patronList, numPatrons);
        //modifyPatron(patron);
        //modifyPatron();
        break;

      case 4: 
        //calls to view patron function
        displayPatrons(patronList, numPatrons);
        break;

      case 0: 
        return 0;
        //exits funtction
        break;

      default: 
        cout << "Please Enter Valid Option." << endl;
    }

  } while (userChoice =! 0);


}
