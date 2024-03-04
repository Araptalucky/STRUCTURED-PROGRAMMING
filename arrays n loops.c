#include <stdio.h>

#define MAX_STUDENTS 50

int main() {
    int numStudents;

    // Input the number of students
    printf("Enter the number of students (maximum %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);

    if (numStudents > MAX_STUDENTS || numStudents <= 0) {
        printf("Invalid number of students. Exiting program.\n");
        return 1; // Exit with an error code
    }

    // Declare an array to store student grades
    int grades[MAX_STUDENTS];

    // Input grades for each student
    for (int i = 0; i < numStudents; i++) {
        printf("Enter the grade for student %d: ", i + 1);
        scanf("%d", &grades[i]);

        // Validate the grade input (e.g., assuming grades are between 0 and 100)
        if (grades[i] < 0 || grades[i] > 100) {
            printf("Invalid grade entered. Exiting program.\n");
            return 1; // Exit with an error code
        }
    }

    // Calculate the average grade
    int sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += grades[i];
    }

    float average = (float)sum / numStudents;

    // Display the results
    printf("\nStudent Grades:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: %d\n", i + 1, grades[i]);
    }

    printf("\nAverage Grade: %.2f\n", average);

    return 0; // Exit without an error code
}
