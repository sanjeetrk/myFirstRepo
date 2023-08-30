#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[50];
    char phone[20];
    char email[50];
} Contact;

Contact *contacts;
int num_contacts = 0;

void add_contact(char *name, char *phone, char *email)
{
    Contact *new_contact = (Contact *)malloc(sizeof(Contact));
    if (new_contact == NULL)
    {
        printf("Error: Could not allocate memory for new contact\n");
        return;
    }

    strcpy(new_contact->name, name);
    strcpy(new_contact->phone, phone);
    strcpy(new_contact->email, email);
    contacts[num_contacts++] = *new_contact;
}

void delete_contact(char *name)
{
    for (int i = 0; i < num_contacts; i++)
    {
        if (strcmp(contacts[i].name, name) == 0)
        {
            free(&contacts[i]); // Release the memory allocated for the contact
            // Shift the remaining contacts to the left
            for (int j = i; j < num_contacts - 1; j++)
            {
                contacts[j] = contacts[j + 1];
            }
            num_contacts--;
            return;
        }
    }
    printf("Error: Contact with name '%s' not found\n", name);
}


void search_contact(char *name)
{
    for (int i = 0; i < num_contacts; i++)
    {
        if (strcmp(contacts[i].name, name) == 0)
        {
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].email);
            return;
        }
    }
    printf("Error: Contact with name '%s' not found\n", name);
}

void rename_contact(char *old_name, char *new_name)
{
    for (int i = 0; i < num_contacts; i++)
    {
        if (strcmp(contacts[i].name, old_name) == 0)
        {
            strcpy(contacts[i].name, new_name);
            return;
        }
    }
    printf("Error: Contact with name '%s' not found\n", old_name);
}

void save_contacts_to_csv(char *filename)
{
    FILE *fp = fopen(filename, "a"); // Open file in append mode
    if (fp == NULL)
    {
        printf("Error: Could not open file for writing\n");
        return;
    }

    for (int i = 0; i < num_contacts; i++)
    {
        fprintf(fp, "%s,%s,%s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
    }
}
    fclose(fp);
    int main()
    {
        contacts = (Contact *)malloc(sizeof(Contact) * 100);
        if (contacts == NULL)
        {
            printf("Error: Could not allocate memory for contacts\n");
            return 1;
        }

        int contacts_modified = 0;
        // int choice;

        while (1)
        {
            printf("Contact Management System\n");
            printf("1. Add a contact\n");
            printf("2. Delete a contact\n");
            printf("3. Search for a contact\n");
            printf("4. Rename a contact\n");
            printf("5. Quit\n");
            printf("Enter your choice: ");

            int choice;
            scanf("%d", &choice);

            if (choice == 1)
            {
                char name[50], phone[20], email[50];
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter phone: ");
                scanf("%s", phone);
                printf("Enter email: ");
                scanf("%s", email);
                add_contact(name, phone, email);
                contacts_modified = 1;
            }
            else if (choice == 2)
            {
                char name[50];
                printf("Enter name: ");
                scanf("%s", name);
                delete_contact(name);
                contacts_modified = 1;
            }
            else if (choice == 3)
            {
                char name[50];
                printf("Enter name: ");
                scanf("%s", name);
                search_contact(name);
            }
            else if (choice == 4)
            {
                char old_name[50], new_name[50];
                printf("Enter old name: ");
                scanf("%s", old_name);
                printf("Enter new name: ");
                scanf("%s", new_name);
                rename_contact(old_name, new_name);
                contacts_modified = 1;
            }
            else if (choice == 5)
            {
                if (contacts_modified)
                {
                    save_contacts_to_csv("sanjeet.csv"); // Hardcoded filename
                }
                break;
            }
            else
            {
                printf("Error: Invalid choice\n");
            }
        }

        free(contacts);
    return 0;
    }
