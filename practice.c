 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
//typedef char Str50[50];
typedef struct exam {
    int* id;
    char* name[20];
    int* pointertonext;
} Exam;
Exam* Enterstud();
void Printstud(Exam*);
void SearchStud(Exam*);
void EditStud(Exam*);
void DeleteStud(Exam*);
void SortStud(Exam*);
int numofstud = 0;

int main()
{
   
    int manu = 0;
    Exam* emp = 0;
    do {
       
        printf("press 1 for enter students \n");
        printf("press 2 for Print students \n");
        printf("press 3 for Search students \n");
        printf("press 4 for Edit students \n");
        printf("press 5 for Delete students \n");
        printf("press 6 for Sorting students \n");
        printf("press 7 for Terminate students \n");
        scanf("%d", &manu);
        
        switch (manu)
        {
        case 1:
            emp=Enterstud();
            break;
        case 2:
            Printstud(emp);
            break;
        case 3:
            SearchStud(emp);
            break;
        case 4:
            EditStud(emp);
            break;
        case 5:
            DeleteStud(emp);
            break;
        case 6:
            SortStud(emp);
            break;
        case 7:
            break;
        default:
            printf("Please enter a Valid Number \n");
            break;
        }

    } while (manu != 7);
    getch();
    /* for (empprev=emp = startadd, emp != 0;emp; )
     {
         emp = emp->pointertonext;
         free(empprev);
         empprev = emp;
     }*/

    return 1;


}
    
    Exam* Enterstud() {
        Exam* emp = 0;
        printf("Number of Student You want to enter:");
        scanf("%d", &numofstud);
        Exam* startadd=0;// = emp;
        Exam* empprev;// = (Exam*)malloc(sizeof(Exam));
        Exam* empnext;// = (Exam*)malloc(sizeof(Exam));
        for (int i = 0; i < numofstud; i++) {
            if (emp == 0)
            {
                startadd = empnext = emp = (Exam*)malloc(sizeof(Exam));
            }
            else
            {
                empnext = emp->pointertonext = (Exam*)malloc(sizeof(Exam));
                emp = emp->pointertonext;
            }
            printf("Enter serial no: ");
            scanf("%d", &empnext->id);
            printf("Enter name: ");
            scanf("%s", &empnext->name);
            empnext->pointertonext = NULL;
        }
        return startadd;
    }

    void Printstud(Exam* emp) {
        //emp = startadd;
            while (1){
                printf("Address of struct: %p\n", emp);
                printf("Size of employe is %d\n", sizeof(*emp));
                printf("Serial No and name is %d & %s\n", emp->id, emp->name);
                printf("Address of next employe: %x\n", (int)emp->pointertonext);
                if (emp->pointertonext == NULL)
                    break;
                emp=emp->pointertonext;
              
            }
    }

    void SearchStud(Exam* emp) {
        int ser2dlt = 0;
        printf("serial No you want to Search:");
        scanf("%d", &ser2dlt);
        while (1) {
            if (emp->id == ser2dlt) {
                printf("Address of struct: %p\n", emp);
                printf("Size of employe is %d\n", sizeof(*emp));
                printf("Serial No and name is %d & %s\n", emp->id, emp->name);
                printf("Address of next employe: %x\n", (int)emp->pointertonext);
               // if (emp->pointertonext == NULL)
                    break;
            }
            if (emp->pointertonext == NULL) {
                printf("Not Found\n");
                break;
            }
            emp = emp->pointertonext;
        }
    }

    void DeleteStud(Exam* emp) {
        int ser2dlt = 0; Exam* empprev;
            printf("serial No you want to Delete:");
         scanf("%d", &ser2dlt);
        // emp = startadd;
         empprev = emp;
         int isfind = 0;
         while (1) {
             if (emp->id == ser2dlt) {
                 empprev->pointertonext = emp->pointertonext;
                 free(emp);
                 break;
             }
             empprev = emp;
             emp = emp->pointertonext;
         }
    }

    void EditStud(Exam* emp) {
        int ser2dlt = 0; Exam* empprev;
        printf("serial No you want to Edit:");
        scanf("%d", &ser2dlt);
        // emp = startadd;
        empprev = emp;
        int isfind = 0;
        while (1) {
            if (emp->id == ser2dlt) {
                printf("Enter name: ");
                scanf("%s", &emp->name);
                break;
            }
            empprev = emp;
            emp = emp->pointertonext;
        }
    }

    //Exam* emp=0;// = (Exam*)malloc(sizeof(Exam));
    //int numofstud = 0;
    //printf("Number of Student You want to enter:");
    //scanf("%d", &numofstud);
    //Exam* startadd = emp;
    //Exam* empprev;// = (Exam*)malloc(sizeof(Exam));
    //Exam* empnext;// = (Exam*)malloc(sizeof(Exam));
    //    for (int i = 0; i < numofstud; i++) {
    //        if (emp == 0)
    //        {
    //            startadd = empnext = emp = (Exam*)malloc(sizeof(Exam));
    //        }
    //        else
    //        {
    //            empnext =emp->pointertonext = (Exam*)malloc(sizeof(Exam));
    //            emp = emp->pointertonext;
    //        }
    //    printf("Enter serial no: ");
    //    scanf("%d", &empnext->id);
    //    printf("Enter name: ");
    //    scanf("%s", &empnext->name);
    //    empnext->pointertonext = NULL;
    //}

    //    emp = startadd;
    //    while (1){
    //        printf("Address of struct: %p\n", emp);
    //        printf("Size of employe is %d\n", sizeof(*emp));
    //        printf("Serial No and name is %d & %s\n", emp->id, emp->name);
    //        printf("Address of next employe: %x\n", (int)emp->pointertonext);
    //        if (emp->pointertonext == NULL)
    //            break;
    //        emp=emp->pointertonext;
    //      
    //    }
    //    int ser2dlt = 0;
    //    printf("serial No you want to delete:");
    //    scanf("%d", &ser2dlt);
    //    emp = startadd;
    //    empprev = startadd;
    //    int isfind = 0;
    //    while (1) {
    //        if (emp->id == ser2dlt) {
    //            empprev->pointertonext = emp->pointertonext;
    //            free(emp);
    //            break;
    //        }
    //        empprev = emp;
    //        emp = emp->pointertonext;
    //    }
    //    emp = startadd;
    //    while (1 > 0) {
    //        printf("Address of struct: %p\n", emp);
    //        printf("Size of %d\n", sizeof(*emp));
    //        printf("Serial No and name is %d & %s\n", emp->id, emp->name);
    //        printf("Address of next employe: %p\n", emp->pointertonext);
    //        if (emp->pointertonext == NULL)
    //            break;
    //        emp = emp->pointertonext;
    //    }
    //    emp = startadd;
    //    printf("serial No you want to edit:");
    //    scanf("%d", &ser2dlt);
    //    while (1) {
    //        if (emp->id == ser2dlt) {
    //            printf("Enter name: ");
    //            scanf("%s", &emp->name);
    //            break;
    //        }
    //        emp = emp->pointertonext;
    //    }

    //    emp = startadd;
    //    while (1 > 0) {
    //        printf("Address of struct: %p\n", emp);
    //        printf("Size of %d\n", sizeof(*emp));
    //        printf("Serial No and name is %d & %s\n", emp->id, emp->name);
    //        printf("Address of next employe: %p\n", emp->pointertonext);
    //        if (emp->pointertonext == NULL)
    //            break;
    //        emp = emp->pointertonext;
    //    }
//    getch();
//   /* for (empprev=emp = startadd, emp != 0;emp; )
//    {
//        emp = emp->pointertonext;
//        free(empprev);
//        empprev = emp;
//    }*/
//
//    return 1;
//
//  
//}