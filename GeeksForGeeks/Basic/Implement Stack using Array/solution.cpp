class myStack {
  private:
    int *arr;
    int capacity;
    int topindex;
  public:
    myStack(int n) {
        // Define Data Structures
        capacity=n;
        arr=new int[capacity];
        topindex=-1;
        
    }

    bool isEmpty() {
        // check if the stack is empty
            return topindex==-1;
    }

    bool isFull() {
        // check if the stack is full
            return topindex==capacity-1;
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(!isFull()){
            topindex++;
            arr[topindex]=x;
        }
        
    }

    void pop() {
        // removes an element from the top of the stack
        if(!isEmpty()){
            topindex--;
        }
    }

    int peek() {
        // Returns the top element of the stack
        if(!isEmpty()){
            return arr[topindex];
        }
        return -1;
    }
};