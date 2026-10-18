//StudentRecordManagementSystem
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int id;
    char name[100];
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }

        if (choice == 1) {
            if (count >= MAX_STUDENTS) {
                printf("Student list is full.\n");
                continue;
            }

            printf("Enter student ID: ");
            scanf("%d", &students[count].id);

            printf("Enter student name: ");
            scanf(" %99[^\n]", students[count].name);

            printf("Enter marks: ");
            scanf("%f", &students[count].marks);

            count++;
            printf("Student added successfully!\n");
        }
        else if (choice == 2) {
            if (count == 0) {
                printf("No student records found.\n");
            } else {
                for (int i = 0; i < count; i++) {
                    printf("\nID: %d\n", students[i].id);
                    printf("Name: %s\n", students[i].name);
                    printf("Marks: %.2f\n", students[i].marks);
                }
            }
        }
        else if (choice == 3) {
            int searchId;
            int found = 0;

            printf("Enter ID to search: ");
            scanf("%d", &searchId);

            for (int i = 0; i < count; i++) {
                if (students[i].id == searchId) {
                    printf("Student found!\n");
                    printf("Name: %s\n", students[i].name);
                    printf("Marks: %.2f\n", students[i].marks);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Student not found.\n");
            }
        }
        else if (choice == 4) {
            printf("Exiting program...\n");
        }
        else {
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}

