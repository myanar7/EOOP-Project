template <class T>
class ArrayList{
    private:
        T* head = nullptr;
        ArrayList* next;
        ArrayList* prev;
        int size = 0;
    public:
        ArrayList(){};
        void insert(T);
        T* find(int index);
        void remove(int index);
};