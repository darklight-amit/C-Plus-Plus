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

    // Part 2: Array with Loop
    // For each patient, input the body temperature for 7 days using a loop.
    // Store the readings in a 2D array.
    // Calculate and print the average temperature per patient.

    float patient_temp[5][7];

    for (int i = 0; i<5; i++){
        for (int j = 0; j<7; j++){
            cout << "Day " << j+1 <<" temp for patient " << patient[i] << ": ";
            cin >> patient_temp[i][j];
        }
    }

    // print the temp of each patient
    cout <<"Name\tDay1\tDay2\tDay3\tDay4\tDay5\tDay6\tDay7\tAvg_temp\n";
    float avg_temp;
    for (int i = 0; i< 5 ; i++){
        cout << patient[i] << "\t";
        avg_temp = 0.0;
        for(int j = 0; j <7; j++){
            avg_temp += patient_temp[i][j];
            cout << patient_temp[i][j] << "\t";
        }
        cout <<avg_temp/7;
        cout << "\n";
    }
    
   

    return 0;
}