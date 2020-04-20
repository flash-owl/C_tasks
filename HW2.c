#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

typedef struct linked_list
{
    char *Name;
    char *Open;
    char *Close;
    struct linked_list *Next;
}
linked_list;


void display(linked_list *start)
{
    linked_list *i = start;
    for (; i != NULL; i = i -> Next)
    {
        printf("Name %s, open %s, close %s\n", i -> name, i -> Open, i -> Close);
    }
}


void release(linked_list *start)
{
    linked_list *i = start;
    linked_list *Next = NULL;
    for (; i != NULL; i = Next)
    {
        next = i->next;
        free(i->Name);
        free(i->Open);
        free(i->Close);
        free(i->Next);
        free(i);
    }
}


void menu()
{
    char s[7][60] = 
    {
        "1) Create the first element of a single-linked list.",
        "2) Add an element to the end of a single-linked list.",
        "3) Delete an element from the end of a single-linked list.",
        "4) to View the linked list.",
        "5) Delete the entire linked list.",
        "6) to Perform sequential searches for the specified element in odnotsvetna list.e"
        "7) Exit the program."
    };
    int i;
    printf("\n%s", "Select an action from the list: (1,..,7).\n");
    for (i = 0; i < 7; i++)
        printf("%s\n", s[i]);
}


int main()
{
    int a, N = 1, mode = 0, n;
    char count;
    char Name[40][50];
    char Open[40][50];
    char Close[40][50];
    linked_list *arr = (linked_list *)malloc(sizeof(linked_list));
    do
    {
        do
        {
            menu();
            scanf("%s", &count);
        } while (count < '1' || count > '7');
        
        if (count == '1')
        {
            if (mode == 0)
            {
                mode = 1;
                printf("\n%s", "Name:");
                scanf("%s", &Name[0]);
                printf("\n%s", "Open:");
                scanf("%s", &Open[0]);
                printf("\n%s", "Close:");
                scanf("%s", &Close[0]);
                arr[0].name = Name[0];
                arr[0].openn = Open[0];
                arr[0].closee = Close[0];
                arr[0].next = NULL;
            }
            else
                printf("\n%s", "The first element from the list was created.\n");
        }
        
        if (count == '2')
        {
            if (mode != 0)
            {
                printf("\n%s", "Name:");
                scanf("%s", &name[N]);
                printf("\n%s", "Open:");
                scanf("%s", &Open[N]);
                printf("\n%s", "Close:");
                scanf("%s", &Close[N]);
                arr = (linked_list *)realloc(arr, sizeof(linked_list) * (N + 1));
                arr[N].name = Name[N];
                arr[N].openn = Open[N];
                arr[N].closee = Close[N];
                arr[N].next = NULL;
                arr[N - 1].next = &arr[N];
                N += 1;
            }
            else
                printf("\n%s");
        }
       
        if (count == '3')
        {
            if (N > 1)
            {
                arr[N - 2].next = NULL;
                N--;
            }
            else
            {
                free(&arr[0]);
                linked_list *arr = (linked_list *)malloc(sizeof(linked_list));
                mode = 0;
            }
        }
        
        if (count == '4')
            if (mode == 0)
                printf("\n%s\n", "The list is empty.");
            else
                display(&arr[0]);
       
        if (count == '5')
        {
            if (mode != 0)
            {
                release(&arr[0]);
                N = 1;
                linked_list *arr = (linked_list *)malloc(sizeof(linked_list));
                mode = 0;
            }
        }
        
        if (count == '6')
        {
            printf("\n%s", "The key word:");
            char word[50];
            scanf("%s", &word);
            for (a = 0; a < N; a++)
            {
                if (strcmp(arr[a].name, word) == 0 || strcmp(arr[a].openn, word) == 0 || strcmp(arr[a].closee, word) == 0)
                    printf("\n%s %d\n", "Struct #:", a);
            }
        }
    }
    while (count != '7');
    return 0;
}