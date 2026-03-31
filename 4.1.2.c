struct node {
    int data;
    struct node* next;
};

typedef struct node* NODE;

NODE createNode(int x) {
    //write your code here..
    NODE temp = (NODE)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    return temp;
    
    
    
}

NODE addNode(NODE first, int x) {
    //write your code here..
    NODE temp = createNode(x);

    // If list is empty
    if (first == NULL) {
        return temp;
    }

    NODE cur = first;

    // Traverse till last node
    while (cur->next != NULL) {
        cur = cur->next;
    }

    cur->next = temp;

    return first;
    
    
    
}

NODE concatenate(NODE t1, NODE t2) {
    //write your code here..
    if (t1 == NULL) return t2;

    // If second list empty
    if (t2 == NULL) return t1;

    NODE temp = t1;

    // Go to last node of first list
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Link last node of first list to first node of second list
    temp->next = t2;

    return t1;


    
    
    
}

void displayList(NODE first) {
    //write your code here..
    if (first == NULL) {
        printf("NULL\n");
        return;
    }

    NODE temp = first;

    while (temp != NULL) {
        printf("%d --> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");


    
    
    
}
