#include <stdio.h>

// Skapar min struct för en student
typedef struct {
    char first_name[50];
    char last_name[50];
    char city[50];
    int birth_year;
} Student;

// Funktion för att mata in all data
void input_student(Student *s) {
    printf("Förnamn: ");
    scanf("%s", s->first_name);
    
    printf("Efternamn: ");
    scanf("%s", s->last_name);
    
    printf("Stad: ");
    scanf("%s", s->city);
    
    printf("Födelseår: ");
    scanf("%d", &s->birth_year);
}

// Funktion för att skriva ut studentens data
void print_student(const Student *s) {
    printf("\nStudent: %s %s\n", s->first_name, s->last_name);
    printf("Stad: %s\n", s->city);
    printf("Född: %d\n", s->birth_year); 
}

int main() {
    Student student1;
    Student student2;

    printf("Skriv in info för student 1:\n");
    input_student(&student1);
    
    printf("\nSkriv in info för student 2:\n");
    input_student(&student2);

    printf("\n--- Utskrift av studenter ---\n");
    print_student(&student1);
    print_student(&student2);

    return 0;
}