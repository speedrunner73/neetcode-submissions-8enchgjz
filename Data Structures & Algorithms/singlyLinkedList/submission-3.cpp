class LinkedList {
   private:
    struct Node {
        int val;
        Node* next;
        Node(int val) : val(val), next(nullptr) {};
    };

    Node* head;

   public:
    LinkedList() { head = nullptr; }

    int get(int index) {
        Node* temp = head;
        int i = 0;

        while (temp != nullptr) {
            if (i == index) {
                return temp->val;
            }
            ++i;
            temp = temp->next;
        }

        return -1;
    }

    void insertHead(int val) {
        Node* newHead = new Node(val);
        newHead->next = head;
        head = newHead;
    }

    void insertTail(int val) {
        Node* newTail = new Node(val);

        if (head == nullptr) {
            head = newTail;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newTail;
    }

    bool remove(int index) {
        // Exit if list is empty
        if (head == nullptr) {
            return false;
        }

        // If it's the first item:
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return true;
        }

        Node* temp = head;
        int i = 0;

        while (temp != nullptr && i < index - 1) {
            temp = temp->next;
            ++i;
        }

        if (temp == nullptr || temp->next == nullptr) {
            return false;
        }

        Node* temp2 = temp->next;
        temp->next = temp2->next;
        delete temp2;
        return true;
    }

    vector<int> getValues() {
        vector<int> result;
        Node* temp = head;

        while (temp != nullptr) {
            result.push_back(temp->val);
            temp = temp->next;
        }

        return result;
    }
};
