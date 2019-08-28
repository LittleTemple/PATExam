//#include <iostream>
//using namespace std;
//
//#define FREE 0
//#define  BUSY 1
//#define  MAX_length 32767
//
//typedef struct//首先定义空闲区分表结构
//{
//    int flag;
//    int size;
//    int ID;
//    int address;
//}Elemtype;
//
//typedef struct node
//{
//    Elemtype date;
//    struct node *front;
//    struct node *next;
//}node,*nodeList;
//
//
//nodeList block_first;
//nodeList block_last;
//
////辅助性方法
//
//void menu();
//int alloc(int tag);
//
////回收算法
//int acceptment1(int ID);
//int acceptment2(int ID);
//
//int assignment1(int ID,int size);//首次适应算法
//int assignment2(int ID,int size);//最佳适应算法
//
//void print();//打印空闲区队列
//void init();//初始化
//
//
//void init()
//{
//    block_first=new node;
//    block_last = new node;
//    block_first->front=NULL;
//    block_first->next=block_last;
//    block_last->front=block_first;
//    block_last->next=NULL;
//    block_last->date.address=0;
//    block_last->date.flag=FREE;
//    block_last->date.ID=FREE;
//    block_last->date.size=MAX_length;
//}
//
////实现内存分配
//int alloc(int tag)
//{
//    int ID,size1;
//    cout<<"请输入作业号：";
//    cin>>ID;
//    cout<<"请输入所需内存大小：";
//    cin>>size1;
//    if (ID<=0 || size1<=0)
//    {
//        cout<<"ERROR,请输入正确的ID和请求大小"<<endl;
//        return 0;
//    }
//
//    if (tag==1)//采用首次适应算法
//    {
//        if(assignment1(ID,size1))
//        {
//            cout<<"分配成功！"<<endl;
//        }
//        else cout<<"分配失败！"<<endl;
//        return 1;
//    }
//    else
//    {
//        if (assignment2(ID,size1))
//        {
//            cout<<"分配成功！"<<endl;
//        }
//        else cout<<"分配失败！"<<endl;
//        return 1;
//    }
//
//}
//
//int assignment1(int ID,int size)//首次适应算法
//{
//    nodeList temp=(nodeList)malloc(sizeof(node));
//    node *p=block_first->next;
//    temp->date.ID=ID;
//    temp->date.size=size;
//    temp->date.flag=BUSY;
//    while(p)
//    {
//        if (p->date.flag==FREE && p->date.size==size)//请求大小刚好满足
//        {
//            p->date.flag=BUSY;
//            p->date.ID=ID;
//            return 1;
//            break;
//        }
//        if (p->date.flag==FREE && p->date.size>size)//说明还有其他的空闲区间
//        {
//            temp->next=p;
//            temp->front=p->front;
//            temp->date.address=p->date.address;
//            p->front->next=temp;
//            p->front=temp;
//            p->date.address=temp->date.address+temp->date.size;
//            p->date.size-=size;
//            return 1;
//            break;
//        }
//        p=p->next;
//    }
//    return 0;
//}
//
//int assignment2(int ID,int size)//最佳适应算法
//{
//    int surplus;//记录可用内存与需求内存的差值
//    nodeList temp=(nodeList)malloc(sizeof(node));
//    node *p=block_first->next;
//    temp->date.ID=ID;
//    temp->date.size=size;
//    temp->date.flag=BUSY;
//    node *q=NULL;//记录最佳位置
//    while(p)//遍历链表，找到第一个可用的空闲区间将他给q
//    {
//        if (p->date.flag==FREE&&p->date.size>=size)
//        {
//            q=p;
//            surplus=p->date.size-size;
//            break;
//        }
//        p=p->next;
//    }
//    while(p)//继续遍历，找到更加合适的位置
//    {
//        if (p->date.flag==FREE&&p->date.size==size)
//        {
//            p->date.flag=BUSY;
//            p->date.ID=ID;
//            return 1;
//            break;
//        }
//        if (p->date.flag==FREE&&p->date.size>size)
//        {
//            if (surplus>p->date.size-size)
//            {
//                surplus=p->date.size-size;
//                q=p;
//            }
//
//        }
//        p=p->next;
//    }
//    if (q==NULL)//如果没有找到位置
//    {
//        return 0;
//    }
//    else//找到了最佳位置
//    {
//        temp->next=q;
//        temp->front=q->front;
//        temp->date.address=q->date.address;
//        q->front->next=temp;
//        q->front=temp;
//        q->date.size=surplus;
//        q->date.address+=size;
//        return 1;
//    }
//}
//
//int acceptment1(int ID)//主存回收
//{
//    node *p=block_first->next;
//    while(p)
//    {
//        if (p->date.ID==ID)//找到要回收的ID区域
//        {
//            p->date.flag=FREE;
//            p->date.ID=FREE;
//            //判断P与前后区域关系
//            if (p->front->date.flag==FREE&&p->next->date.flag!=FREE)
//            {
//                p->front->date.size+=p->date.size;
//                p->front->next=p->next;
//                p->next->front=p->front;
//            }
//            if (p->front->date.flag!=FREE&&p->next->date.flag==FREE)
//            {
//                p->date.size+=p->next->date.size;
//                if(p->next->next)
//                {
//                    p->next->next->front=p;
//                    p->next = p->next->next;
//                }
//                else p->next=p->next->next;
//            }
//            if(p->front->date.flag==FREE&&p->next->date.flag==FREE)
//            {
//                p->front->date.size+=p->date.size+p->next->date.size;
//                if(p->next->next)
//                {
//                    p->next->next->front=p->front;
//                    p->front->next=p->next->next;
//                }
//                else p->front->next=p->next->next;
//            }
//            if(p->front->date.flag!=FREE&&p->next->date.flag!=FREE)
//            {//
//
//            }
//            break;
//        }
//        p=p->next;
//    }
//    cout<<"回收成功！"<<endl;
//    return 1;
//}
//
//void print()
//{
//    cout<<"------------------"<<endl;
//    cout<<"内存分配情况"<<endl;
//    cout<<"------------------"<<endl;
//    node *p=block_first->next;
//    while(p)
//    {
//        cout<<"分区号：";
//        if (p->date.ID==FREE)
//            cout<<"FREE"<<endl;
//        else cout<<p->date.ID;
//        cout<<"起始地址："<<p->date.address<<endl;
//        cout<<"内存大小："<<p->date.size<<endl;
//        cout<<"分区状态：";
//        if (p->date.flag==FREE)
//            cout<<"空闲"<<endl;
//        else
//            cout<<"已分配"<<endl;
//        cout<<"------------------"<<endl;
//        p=p->next;
//    }
//}
//
//void menu()//菜单
//{
//    int tag=0;
//    int ID;
//    init();
//    cout<<"分区模拟："<<endl;
//    while(tag!=5)
//    {
//        cout<<"请输入要进行的操作："<<endl;
//        cout<<"1-首次适应算法，2-最佳适应算法，3-内存回收，4-显示内存状况，5-退出"<<endl;
//        cin>>tag;
//        switch(tag)
//        {
//            case 1:
//                alloc(tag);
//                break;
//            case 2:
//                alloc(tag);
//                break;
//            case 3:
//                cout<<"请输入需要回收的ID号："<<endl;
//                cin>>ID;
//                acceptment1(ID);
//                break;
//            case 4:
//                print();
//                break;
//        }
//    }
//
//}
//int main()
//{
//    menu();
//}