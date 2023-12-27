//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

/* Function to get the middle of the linked list*/
struct Node *deleteMid(struct Node *head);
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		head = deleteMid(head);
		printList(head); 
	}
	return 0; 
} 



// } Driver Code Ends


/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
int countOfNodes(struct Node* head) 
{ 
    int count = 0; 
    while (head != NULL) { 
        head = head->next; 
        count++; 
    } 
    return count; 
}

Node* deleteMid(Node* head)
{
    // Your Code Here
    if (head == NULL) 
        return NULL; 
    if (head->next == NULL) { 
        delete head; 
        return NULL; 
    } 
    
    struct Node* temp = head; 
    // Find the count of nodes 
    int count = countOfNodes(head); 
    // Find the middle node 
    int mid = count / 2; 
    // Delete the middle node 
    while (mid-- > 1) 
        head = head->next; 
    // Delete the middle node 
    head->next = head->next->next; 
    return temp; 
} 