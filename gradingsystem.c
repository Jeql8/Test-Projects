#include <stdio.h>

int main() {
    int subjects, exams;
    int grades, avg, highest, lowest, count,high,low;
    int avg2[10];
    highest = 0; // Initialize to the first subject
    lowest = 0; // Initialize to the first subject
    avg = 0;
    count = 0;

    printf("Input number of Subjects: ");
    scanf("%d", &subjects);
    printf("Input number of Exams: ");
    scanf("%d", &exams);

    for (int i = 1; i <=subjects; ++i){
        avg2[i] = 0;
    }

    for (int i = 1; i <= subjects; ++i) {
        for (int k = 1; k <= exams; k++) {
            printf("Input Grade for Subject %d - Exam %d : ", i, k);
            scanf("%d", &grades);
            count++;
            avg += grades;
            avg2[i] += grades;
        }
    }

    for (int i = 1; i <= subjects; i++) {
        if (avg2[i] > highest) {
            highest = avg2[i];
            high = i;
        }
        if (avg2[i] < lowest || i==1 ) {
            lowest = avg2[i];
            low = i;
        }
    }

    printf("\n\nAverage Grade for %d Exams : %d\n\n", count, avg / count);

    if (avg == 0) {
        printf("No Best Subject\n");
        printf("Worst Subject: Subject 1\n");
    } else {
        printf("Best Subject: Subject %d\n", high);
        printf("Worst Subject: Subject %d\n", low);
    }

    if (avg / count > 75) {
        printf("\nPassed this Semester\n");
    } else {
        printf("\nFailed this Semester\n");
    }

    return 0;
}
