
template<typename t>
class Vector{
    t cs;
    int ms;
    t *arr;
public:
    Vector(){
        cs=0;
        ms = 1;
        arr = new t[ms];
    }
    void push_back(const t d){
        if (cs==ms)
        {
            t *oldArr = arr;
            arr = new t[2*ms];
            ms = 2*ms;
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }
            delete [] oldArr;
        }
        arr[cs]=d;
        cs++;
    }
    void pop_back(){
        cs--;
    }
    t front() const{
        return arr[0];
    }
    t back() const{
        return arr[cs-1];
    }
    bool empty() const{
        return cs==0;
    }
    int capacity() const{
        return ms;
    }
    t operator[](const int i){
        return arr[i];
    }
    int size(){
        return cs;
    }
};