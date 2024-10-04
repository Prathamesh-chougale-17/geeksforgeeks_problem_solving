//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Structure for the linked list node
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Function to print nodes in a given circular linked list
void printList(struct Node *head) {
    if (head != NULL) {
        struct Node *temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    } else {
        cout << "empty" << endl;
    }
    cout << endl;
}


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse a circular linked list
     Node* reverse(Node* head) {
        if(head==NULL || head->next == head) return head;
        
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;
        
        do{
          next = curr->next;
          curr->next = prev;
          prev = curr;
          curr = next;
        }while(curr!=head);
        head->next = prev;
        head = prev;
        return head;
    }
    Node* deleteNode(Node* head, int key) {
       Node* temp = head;
      if(head->data == key)
      {
        while(temp->next != head)
        {
            temp=temp->next;
        }
        temp->next = head->next;
        return head->next;
      }
      do{
          if(temp->next->data==key)
          {
              temp->next = temp->next->next;
              return head;
          }
          temp=temp->next;
      }while(temp!=head);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Reading input into a vector
        while (ss >> number) {
            arr.push_back(number);
        }

        int key;
        cin >> key;
        cin.ignore();

        // Creating the circular linked list
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        tail->next = head; // Make the list circular

        Solution ob;

        // Delete the node with the given key
        head = ob.deleteNode(head, key);

        // Reverse the circular linked list
        head = ob.reverse(head);

        // Print the modified list
        printList(head);
    }
    return 0;
}

// } Driver Code Ends