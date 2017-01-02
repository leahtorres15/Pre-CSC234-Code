#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct Person { 
    char name[10];
    bool has_no_skills;
    bool is_boringly_studious;
};

void is_nerd(struct Person person) {
    if (person.has_no_skills && person.is_boringly_studious) {
        printf("%s is a total nerd\n", person.name);
    } else if (person.has_no_skills || person.is_boringly_studious) {
        printf("%s is a nerd\n", person.name);
    } else {
        printf("%s is not a nerd\n", person.name);
    }
}

int main() {
    struct Person jim;
    struct Person leah;

    strcpy(jim.name, "Jim");
    strcpy(leah.name, "Leah");

    jim.has_no_skills = true;
    leah.has_no_skills = false;

    jim.is_boringly_studious = true;
    leah.is_boringly_studious = true;

    is_nerd(jim);
    is_nerd(leah);

    return 0;
}
    
