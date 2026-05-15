#include <iostream>
using namespace std;

// Function to calculate weighted marks for a subject
double calculateMarks(double sessional, double mid, double final) {
    return (sessional * 0.20) + (mid * 0.30) + (final * 0.50);
}

// Function to convert marks into GPA (absolute scale for subject)
double marksToGPA(double marks) {
    double gpa = marks / 25.0; // 100 marks ? 4.0 GPA
    if(gpa > 4.0) gpa = 4.0;
    return gpa;
}

int main() {
    int students;
    cout << "Enter number of students: ";
    cin >> students;

    string names[100];
    double gpas[100];
    double topperGPA = 0;

    for(int s = 0; s < students; s++) {
        cout << "\nEnter name of Student " << s+1 << ": ";
        cin >> names[s];

        int subjects;
        cout << "Enter number of subjects for " << names[s] << ": ";
        cin >> subjects;

        double totalPoints = 0, totalCredits = 0;

        cout << "\n--- Enter Marks for " << names[s] << " ---\n";
        for(int i = 0; i < subjects; i++) {
            double credit, sessional, mid, final;
            cout << "\nSubject " << i+1 << " credit hours: ";
            cin >> credit;
            cout << "Enter sessional marks (out of 100): ";
            cin >> sessional;
            cout << "Enter mid marks (out of 100): ";
            cin >> mid;
            cout << "Enter final marks (out of 100): ";
            cin >> final;

            double subjectMarks = calculateMarks(sessional, mid, final);
            double subjectGPA = marksToGPA(subjectMarks);

            cout << "Subject " << i+1 << " GPA = " << subjectGPA << endl;

            totalPoints += subjectGPA * credit;
            totalCredits += credit;
        }

        gpas[s] = totalPoints / totalCredits;
        if(gpas[s] > topperGPA) topperGPA = gpas[s];
    }

    cout << "\n--- Relative GPA Results ---\n";
    for(int s = 0; s < students; s++) {
        double relative = (gpas[s] / topperGPA) * 4.0; // scale to topper
        cout << names[s] << " Relative GPA = " << relative << endl;
    }

    return 0;
}
