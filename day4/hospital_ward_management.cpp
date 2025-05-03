#include <iostream>
#include <string>

using namespace std;

int main() {
    // ----------- Part 1: Static Array -----------
    string patients[5];
    cout << "Enter names of 5 admitted patients:\n";
    for(int i = 0 ; i <5 ; i++){
        cout << "Patient "<< i+1 << ": ";
        cin >> patients[i];    
    }
    

    cout << "\nList of admitted patients:\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << patients[i] << endl;
    }

    // Update a patient's name
    int updateIndex;
    string newName;
    cout << "\nEnter the index (1-5) of the patient to update name: ";
    cin >> updateIndex;
    cout << "Enter new name: ";
    cin >> newName;
    patients[updateIndex - 1] = newName;

    cout << "\nUpdated Patient List:\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << patients[i] << endl;
    }

    // ----------- Part 2: Array with Loop -----------
    float temperature[5][7]; // 5 patients, 7 days
    cout << "\nEnter 7-day body temperatures for each patient:\n";
    for (int i = 0; i < 5; i++) {
        cout << patients[i] << "'s temperatures:\n";
        for (int j = 0; j < 7; j++) {
            cout << "Day " << j + 1 << ": ";
            cin >> temperature[i][j];
        }
    }

    cout << "\nAverage temperature per patient:\n";
    for (int i = 0; i < 5; i++) {
        float sum = 0;
        for (int j = 0; j < 7; j++) {
            sum += temperature[i][j];
        }
        float avg = sum / 7.0;
        cout << patients[i] << ": " << avg << "°C\n";
    }

    // ----------- Part 3: Dynamic Array -----------
    int numPatients;
    cout << "\nEnter number of patients (for dynamic array example): ";
    cin >> numPatients;

    int* patientIDs = new int[numPatients];
    cout << "Enter patient IDs:\n";
    for (int i = 0; i < numPatients; i++) {
        cout << "ID for patient " << i + 1 << ": ";
        cin >> patientIDs[i];
    }

    cout << "Stored Patient IDs:\n";
    for (int i = 0; i < numPatients; i++) {
        cout << "Patient " << i + 1 << ": ID " << patientIDs[i] << endl;
    }

    // Free the dynamically allocated memory
    delete[] patientIDs;

    // ----------- Part 4: Multidimensional Array -----------
    const int wards = 3;
    const int beds = 4;
    int wardMatrix[wards][beds] = {0}; // All beds initially vacant

    cout << "\n=== Ward Management ===\n";
    int choice;
    do {
        cout << "\n1. Admit Patient\n2. Discharge Patient\n3. View Ward Status\n4. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            int wardNo, bedNo, patID;
            cout << "Enter ward number (0-2): ";
            cin >> wardNo;
            cout << "Enter bed number (0-3): ";
            cin >> bedNo;
            if (wardMatrix[wardNo][bedNo] == 0) {
                cout << "Enter Patient ID: ";
                cin >> patID;
                wardMatrix[wardNo][bedNo] = patID;
                cout << "Patient admitted.\n";
            } else {
                cout << "Bed already occupied.\n";
            }
        } else if (choice == 2) {
            int wardNo, bedNo;
            cout << "Enter ward number (0-2): ";
            cin >> wardNo;
            cout << "Enter bed number (0-3): ";
            cin >> bedNo;
            wardMatrix[wardNo][bedNo] = 0;
            cout << "Patient discharged.\n";
        } else if (choice == 3) {
            cout << "\nWard Status (0 means vacant):\n";
            for (int i = 0; i < wards; i++) {
                cout << "Ward " << i << ": ";
                for (int j = 0; j < beds; j++) {
                    cout << wardMatrix[i][j] << " ";
                }
                cout << endl;
            }
        }
    } while (choice != 4);

    return 0;
}
