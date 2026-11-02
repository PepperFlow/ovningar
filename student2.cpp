#include <stdio.h>

// Struct för en student
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
    printf("Student: %s %s, Stad: %s, Född: %d\n", 
        s->first_name, s->last_name, s->city, s->birth_year);
}

int main() {
    // Max 10 studenter
    Student students[10];
    
    int antal = 0; 
    char val;

    printf("--- Registrera studenter (Max 10) ---\n");

    while (antal < 10) {
        printf("\nMata in student %d:\n", antal + 1);
        
        // Mata in studentdata
        input_student(&students[antal]);
        antal++;

        if (antal == 10) {
            printf("\nNu är listan full (10 st)!\n");
            break;
        }

        printf("Vill du lägga till en till student? (j/n): ");
        scanf(" %c", &val);  
        
        if (val == 'n' || val == 'N') { 
            break; // 
        }
    }

    // Skriv ut alla registrerade studenter
    printf("\n--- Alla registrerade studenter ---\n");
    for (int i = 0; i < antal; i++) {
        print_student(&students[i]);
    }

    // Hitta den äldsta studenten
    if (antal > 0) { 
        Student *oldestStudent = &students[0];// Starta med första studenten som äldst

        // Loopa igenom resten för att jämföra
        for (int i = 1; i < antal; i++) {
            if (students[i].birth_year < oldestStudent->birth_year) {
                oldestStudent = &students[i]; 
            }
        }
        
        // Skriv ut namnet på den äldsta genom vår pekare
        printf("\nDen äldsta studenten är: %s %s (född %d)\n", 
            oldestStudent->first_name, oldestStudent->last_name, oldestStudent->birth_year);
    }

    return 0;
}