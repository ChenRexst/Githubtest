#include<iostream>
#include<string>
using namespace std;

template<typename T>
class myClass{
    private:
        T word;
    public:
        void word_set(T new_word){
            word = new_word;
        }
        void word_print(){
            cout << word;
        }
};

int main(){
    myClass<string> myObj;
    string str;
    cin >> str;
    myObj.word_set(str);
    myObj.word_print();

    return 0;
}
