#include <stdio.h>
#include <stdlib.h>

struct node {
    char c;
    struct node* next;
};
struct node* head;

void insert_ll(char x) {
    struct node* temp =(struct node*) malloc(sizeof(struct node));
	struct node* q=head;
    temp->c = x;
    if(head == NULL) {
        head = temp; 
        return;
    }
    while(q->next != NULL) q = q->next;
    q->next = temp;
}

void display_odd() {
    int i=1; struct node* q = head;
    printf("Characters at odd position are:\n");
    while(q!=NULL) {
        if(i%2==0) printf("%c", q->c);
        q = q->next; i++;
    }

}

int main() {
    printf("Enter number of characters: ");
    int n;
    scanf("%d", &n);
    printf("Enter your name: ");
    int word = 1, vowel = 0;
    for(int i=0; i<=n; i++) {
        char c;
        scanf("%c", &c);
        if(c==' ') word++;
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u') 
        vowel++;
        insert_ll(c);
    }
    printf("Number of words: %d\n", word);
    printf("Number of vowels: %d\n", vowel);
    display_odd();
    return 0;
}