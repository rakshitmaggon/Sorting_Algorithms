//BINARY TREE SORT
//create binary search tree and then in  order traversal
#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(value){
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}


struct node* insert(struct node* root, int data)
{
    if (root == NULL) return createNode(data);

    if (data < root->data)
        root->left  = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}


void inorder(struct node* root){
    if(root == NULL) return;
    inorder(root->left);

    printf(" %d ", root->data);
    inorder(root->right);
}


int main(){
    int i,num;
    struct node *root = NULL;


    printf("Enter the number of elements:");
    scanf("%d",&num);
    int array[num];

    for(i=0;i<num;i++)
     {
         array[i]=rand();
     }

     printf("The unsorted array is :");
     for(i=0;i<num;i++)
    {
        printf(" %d ",array[i]);
    }
    printf("\n");


    for(i=0;i<num;i++)
    {
        root=insert(root, array[i]);
    }

    printf("the sorted array is :");

    inorder(root);
}
