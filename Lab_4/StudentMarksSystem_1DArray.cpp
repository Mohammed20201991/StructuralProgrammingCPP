#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter number of students: ";
    cin >> n;

    int marks[100];   // Maximum 100 students
    int sum = 0;
    int maxMark, minMark;
    int passCount = 0;

    // Input marks
    cout << "Enter marks:\n";
    for(int i = 0; i < n; i++) {
        cin >> marks[i];
        sum += marks[i];

        if(i == 0) {
            maxMark = minMark = marks[i];
        } else {
            if(marks[i] > maxMark)
                maxMark = marks[i];
            if(marks[i] < minMark)
                minMark = marks[i];
        }

        if(marks[i] >= 50)
            passCount++;
    }

    // Calculate average
    double average = (double)sum / n;

    // Output results
    cout << "\nAverage Marks = " << average << endl;
    cout << "Highest Mark = " << maxMark << endl;
    cout << "Lowest Mark = " << minMark << endl;
    cout << "Number of Passed Students = " << passCount << endl;

    // Display grades
    cout << "\nGrades:\n";
    for(int i = 0; i < n; i++) {
        cout << "Student " << i+1 << ": ";

        if(marks[i] >= 90)
            cout << "A";
        else if(marks[i] >= 80)
            cout << "B";
        else if(marks[i] >= 70)
            cout << "C";
        else if(marks[i] >= 60)
            cout << "D";
        else if(marks[i] >= 50)
            cout << "E";
        else
            cout << "F";
        cout << endl;
    }

    return 0;
}
