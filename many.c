#include <stdio.h>
#include <stdlib.h>

// Define Student structure using typedef
typedef struct {
    char name[100];
    char roll[20];
    char course[50];
} Student;

// Define Teacher structure using typedef
typedef struct {
    char name[100];
    char number[20];
    float salary;
} Teacher;

typedef struct {
    char name[100];
    char roll[20];
    char course[20];
    char percentile[50];
} Topper;

// Function to save student data
void saveStudentDataToFile(int totalStudents) {
    FILE *fp;
    Student s;

    fp = fopen("students.txt", "a"); // Append mode
    if (fp == NULL) {
        printf("Error opening student file!\n");
        return;
    }

    for (int i = 1; i <= totalStudents; i++) {
        printf("\nEnter details for student %d:\n", i);

        printf("Name: ");
        fgets(s.name, sizeof(s.name), stdin);

        printf("Roll Number: ");
        fgets(s.roll, sizeof(s.roll), stdin);

        printf("Course: ");
        fgets(s.course, sizeof(s.course), stdin);

        // Write to file
        fprintf(fp, "Student %d:\n", i);
        fprintf(fp, "Name: %s", s.name);
        fprintf(fp, "Roll: %s", s.roll);
        fprintf(fp, "Course: %s", s.course);
        fprintf(fp, "------------------------\n");
    }

    fclose(fp);
    printf("\nStudent data saved to 'students.txt'.\n");
}

// Function to save teacher data
void saveTeacherDataToFile(int totalTeachers) {
    FILE *fp;
    Teacher t;

    fp = fopen("teachers.txt", "a"); // Append mode
    if (fp == NULL) {
        printf("Error opening teacher file!\n");
        return;
    }

    for (int i = 1; i <= totalTeachers; i++) {
        printf("\nEnter details for teacher %d:\n", i);

        printf("Name: ");
        fgets(t.name, sizeof(t.name), stdin);

        printf("Phone Number: ");
        fgets(t.number, sizeof(t.number), stdin);

        printf("Salary: ");
        scanf("%f", &t.salary);
        getchar(); // To consume newline after float input

        // Write to file
        fprintf(fp, "Teacher %d:\n", i);
        fprintf(fp, "Name: %s", t.name);
        fprintf(fp, "Phone Number: %s", t.number);
        fprintf(fp, "Salary: %.2f\n", t.salary);
        fprintf(fp, "------------------------\n");
    }

    fclose(fp);
    printf("\nTeacher data saved to 'teachers.txt'.\n");
}

void saveTopperStudentDataToFile(int topperStudent){
     FILE *fp;
     Topper  t;

    fp=fopen("Topper_student.txt","a");
    if(fp==NULL){
        printf("\nerror file opening topper Student file ");
    }

    for(int i=1;i<=topperStudent;i++){
        printf("\n Enter the topper student details:%d\n",i);
         
        printf("\nName: \n");
        fgets(t.name,sizeof(t.name),stdin);

        printf("\nRoll: \n");
        fgets(t.roll,sizeof(t.roll),stdin);

        printf("\nCourse:\n");
        fgets(t.course,sizeof(t.course),stdin);

         printf("\nPercentile:\n");
        fgets(t.percentile,sizeof(t.percentile),stdin);
        

        fprintf(fp, "TopperStudent %d:\n", i);
        fprintf(fp, "Name: %s", t.name);
        fprintf(fp, "Roll: %s", t.roll);
        fprintf(fp, "Course: %.2f\n", t.course);
        fprintf(fp,"percentile: %d",t.percentile)
        fprintf(fp, "------------------------\n");

    }

}

int main() {
    int n, m,j;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); // consume newline
    saveStudentDataToFile(n);

    printf("\n Enter number of teachers: ");
    scanf("%d", &m);
    getchar(); // consume newline
    saveTeacherDataToFile(m);

    printf("\n Enter number of toppers: ");
    scanf("%d",&j);
    getchar();
    saveTopperStudentDataToFile(j);

    return 0;
}
