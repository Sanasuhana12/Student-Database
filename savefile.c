#include <stdio.h>
#include <stdlib.h>
#include "student.h"

void save_to_file(Student *head, const char *filename) {
    FILE *fp = fopen(filename, "w");
    while (head) {
        fprintf(fp, "%s %s %s %.2f %.2f %.2f %s %s\n", head->id, head->name, head->dob,
                head->marks[0], head->marks[1], head->marks[2],
                head->contact, head->email);
        head = head->next;
    }
    fclose(fp);
}

Student* load_from_file(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) return NULL;
    Student *head = NULL, *temp;
    while (1) {
        temp = (Student *)malloc(sizeof(Student));
        if(!temp)
                break;
        int ret=fscanf(fp, "%s %s %s %f %f %f %s %s", temp->id, temp->name, temp->dob,
                   &temp->marks[0], &temp->marks[1], &temp->marks[2],
                   temp->contact, temp->email);
        if(ret==8)
        {
            temp->next = head;
            head = temp;
        }
        else
        {
           free(temp);
            break;
        }
    }
    fclose(fp);
    return head;
}