class BrowserHistory {
    public:
    struct ListNode {
        string data;
        ListNode* back;
        ListNode* next;
        ListNode(string u) : data(u), back(nullptr), next(nullptr) {}
    };
    ListNode* currPage;

    BrowserHistory(string homepage) {
    currPage = new ListNode(homepage);
    }
    
    void visit(string url) {
        ListNode* newNode = new ListNode(url);
        currPage->next = newNode;
        newNode->back = currPage;
        currPage = newNode;
    }
    
    string back(int steps) {
        while(steps > 0){
            if(currPage->back){
                currPage = currPage->back;
            }
            else break;
            steps--;
        }
        return currPage->data;
    }
    
    string forward(int steps) {
        while(steps){
            if(currPage->next){
                currPage = currPage->next;
            }
            else break;
            steps--;
        }
        
    return currPage->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */