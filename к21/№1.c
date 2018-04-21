void push(struct node* head, int data) {
struct node* newNode = (struct node*)malloc(sizeof(struct node)); //добавили указатель на структуру node
newNode->data = data;
newNode->next = head;
head = newNode;
}
void push_test() {
newNode head = build(); //меняем List на newNode
push(&head, 1); // добавляем амперсанд перед head
}
