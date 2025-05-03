#include <iostream>
#include <string>
using namespace std;

int main(){

    // Part 1: Basic Array
    // Use a static array to store the names of 5 admitted patients.
    // Display all patient names.
    // Allow updating the name of a patient.

    string patient[5];
    cout << "Enter the patient name:";

    for (int i = 0; i<5; i++){
        cout <<"\nname of patient " << i+1 << ": ";
        cin >> patient[i];
        
    }
    cout <<"\nlist of admitted patient \n";
    int j = 1;
    for (string name: patient){
        cout << j++ << ". " << name << "\n";
    }

    // update patient name
    int patientIndex;
    bool updateIt = true;
    cout << "Enter the index(1-5) to update the patient name: ";
    do{
        cin >>patientIndex;
        if (patientIndex > 0 and patientIndex <=5 ){
            updateIt = false;
            cout << "new name which needs to be updated : ";
            cin.ignore(); // Clear leftover newline from previous input
            getline(cin, patient[patientIndex-1]);
            
        }   
        else{
            cout << "Enter the corrent index(1-5) to update the patient name: ";
        } 
    }while(updateIt);

    
    cout <<"\nlist of admitted patient \n";
    j = 1;
    for (string name: patient){
        cout << j++ << ". " << name << "\n";
    }
    
   

    return 0;
}