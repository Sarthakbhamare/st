#include <iostream>
using namespace std;

// Function to determine grade based on absolute grading system
char getGrade(int marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 80) return 'B';
    else if (marks >= 70) return 'C';
    else if (marks >= 60) return 'D';
    else return 'F';
}

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks! Please enter a value between 0 and 100." << endl;
        return 1;
    }
    
    char grade = getGrade(marks);
    cout << "Grade: " << grade << endl;
    
    return 0;
}
