//#include <iostream>
//using namespace std;
////链表的基本操作
//struct node{
//    int val = 0;
//    node* next = nullptr;
//};
////链表的添加
////向链表的最后一位插入一个元素
//void add(node* head,int val){
//    if(head == nullptr) return;
//    node* now = head;
//    int cnt = 0;
//    while(now->next!= nullptr){
//        now = now->next;
//    };
//    node* p = new node;
//    p->val = val;
//    p->next = nullptr;
//    now->next = p;
//}
//
////将数据添加到链表的指定位置
//void add(node* head,int val,int pos){
//    node*p = head;
//    for (int i = 0; i < pos-1; ++i) {
//        p = p->next;
//    }
//    node* q = new node;
//    q->val = val;
//    //这里需要注意
//    q->next = p->next;
//    p->next = q;
//
//}
//
////链表的删除
////需要删除的值,每次只能删除一个值
//void del(node* head,int val){
//    //删除的时候需要两个指针
//    node* p = head->next;
//    node* pre = head;
//
//    if(head->val == val){
//        head = p;
//        delete(pre);
//        return;
//    }
//
//    while(p!=nullptr){
//        if(p->val == val){
//            pre->next = p->next;
//            delete(p);
//            //这里没有给p进行重新赋值
//            p = pre->next;
//        }else{
//            p=p->next;
//            pre = pre->next;
//        }
//    }
//}
//
//void print(node* head){
//    while (head!= nullptr){
//        cout<<head->val<<endl;
//        head = head->next;
//    }
//}
//int main(){
//    node* head = new node;
//    head->val = 0;
//    head->next = nullptr;
//
//    for (int i = 1; i <= 10 ; ++i) {
//        add(head,i);
//    }
//
//    del(head,6);
//    print(head);
//
//
//}