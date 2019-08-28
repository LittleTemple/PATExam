#include <iostream>
#include <string>
#include <vector>
#include<map>
using namespace std;

//栈的实现
//class divStack{
//    int *s;
//    int TOP;//用top来表示栈顶指针在数组中的位置
//public:
//    divStack(){
//        int a = 0;
//        s = &a;
//        TOP = -1;
//    }
//
//public:
//    void clear(){
//        TOP = -1;
//    }
//
//
//    int size(){
//        return TOP+1;
//    }
//    bool empty(){
//        return TOP == -1;
//    }
//    void push(int x){
//        s[++TOP] = x;
//    }
//    void pop(){
//        TOP--;
//    }
//    int top(){//返回栈顶元素
//        return s[TOP];
//    }
//};
////队列的实现
//class divQueue{
//    int front;
//    int rear;
//    int *q;
//
//public:
//    divQueue(){
//        int a = 0;
//        q = &a;//这儿的问题
//        front = -1;
//        rear = -1;
//    }
//    int size(){
//        return rear-front;
//    }
//    void clear(){
//        front = rear = -1;
//    }
//
//    void push(int x){
//        q[++rear] = x;
//    }
//    void pop(){
//        front++;
//    }
//    bool empty(){
//        return rear == front;
//    }
//
//    int get_front(){
//        return q[front+1];
//    }
//    int get_rear(){
//        return q[rear];
//    }
//
//
//};

//int main(){
//    divStack s;
//    divQueue q;
////    s.push(1);
//    q.push(2);
//    q.push(3);
//    q.push(4);
//    q.push(5);
//
//    cout<<q.get_rear()<<endl;
//    cout<<q.get_front()<<endl;
//
////    cout<<s.size()<<endl;
//
//}

