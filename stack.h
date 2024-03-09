typedef int T;
const int MAX_ITENS = 100;

class stack {
    private:
        int length;
        T* vec;

    public:
        stack(); // constructor
        ~stack(); // destructor
        bool isfull();
        bool isempty();
        void push(T item);
        T pop();
        void print();
        int lengthvec();
};