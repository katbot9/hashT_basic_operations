#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct tag{
    int id;
    char name[30];
    struct tag* next;
}student_node;

typedef struct{
int id;
char name[30];
int status;
}student;

student_node* create_initialize_node(){
    student_node* new_node;
    char temp;
    new_node = (student_node*) malloc(sizeof(student_node));
    scanf("%c", &temp);
    printf("Enter student name: ");
    gets(new_node->name);
    printf("Enter id");
    scanf("%d",&new_node->id);
    new_node->next = NULL;
    return new_node;
}

void initialize_hash_table(student_node* arr[], int size){
    for(int i = 0; i<size;i++){
        arr[i] = NULL; 
    }
}

int hash_function1(int key, int size){
    return key%size;
}

void add_student(student_node* arr[], student_node* toadd, int index){
    if(arr[index]==NULL){
        arr[index] = toadd;
    }else{
        toadd->next = arr[index];
        arr[index] = toadd;
    }

}

student_node* delete_node(student_node* arr[], int index, int id){
    student_node* walker, *temp;
    if(arr[index]==NULL){
        return NULL;
    }else{
        walker = arr[index];
        if(walker->id = id){
            arr[index] = walker->next;
            return walker;
        }else{
            while(walker->next!=NULL){
                if(walker->next->id == id){
                    temp = walker->next;
                    walker->next = walker->next->next;
                    return temp;
                }else{
                    walker = walker->next;
                }
            }
            return NULL;
        }
    }
}

char* student_search(student_node* arr[], int id, int index){
    student_node* walker;
    if(arr[index]==NULL){
        return "not found";
    }else{
        if(arr[index]->id==id){
            return arr[index]->name;
        }else{
            walker = arr[index+1];
            while(walker!=NULL){
                if(walker->id==id){
                    return walker->name;
                }else{
                    walker = walker->next;
                }
            }
            return "not found";
        }
    }
}

void initialize_ht(student arr[], int size){
    for(int i = 0; i<size;i++){
        arr[i].id = -1;
        strcpy(arr[i].name,"nothing");
        arr[i].status = 0;
    }
}

int add_person(student arr[], student toadd, int index, int *n_persons, int colres){
    int i = 1, h_index = index;
    if(*n_persons == 10){
        return 2;
    }
    while(arr[index].status==1){
        if(colres==0)
            index = (index+1)% 10;
    else{
        index = (h_index + i*hf2(Toadd.id))%10;
        i++;
    }
    strcpy(arr[index].name, toadd.name);
    arr[index].id = toadd.id;
    arr[index].status = 1;
    (*n_persons)++;
    return 1;
    }}

int hash1(int id){
    return id%10;
}

int hash2(int id){
    return 5-(id%5);
}
int delete_e(student arr[], int index, int *n_persons, int id, int size){
    int n_tries = 0, flag = 0, h_index = index, i=1;
    if(*n_persons == 0){
        return 3;
    }else{
        while(arr[index].status != 0 && n_tries<=size){
            if(arr[index].id == id){
                arr[index].id = 0;
                strcpy(arr[index].name,"nothing");
                arr[index].status = -1;
                (*n_persons)--;
                flag = 1;
                break;
            }else{
                if(colres == 0){
                    index = (index + 1)%size;
                }else{
                    index = (h_index+i*hash2(arr[index].id));
                    
                }
                n_tries++;
            }
        }
        if(flag == 1){
            return 1;
        }else{
            return 0;
        }
    }
}

