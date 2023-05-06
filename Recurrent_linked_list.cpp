#include "Recurrent_linked_list.h"

rll::rll()
{
    head = nullptr;
}

rll::~rll()
{
    Node *temp = head;
    if(head == nullptr || head->next == nullptr)
    {
        return;
    }else
    {
        Node *p;
        unsigned int num = get_size();
        for(int i=0; i<num-1; i++)
        {
            p = temp;
            temp = temp->next;
            delete p;
            p = nullptr;
        }
    }
}

unsigned int rll::get_size()
{
    if (head == nullptr)
    {
        return 0;
    }
    Node *temp = head;
    unsigned int num = 0;
    while(temp != nullptr)
    {
        num++;
        temp = temp->next;
        if(temp == head)
        {
            break;
        }
    }
    return num;
}

void rll::cteByindex(int index)
{
    head = new Node;
    Node *temp = head;
    for(int i=0; i<index; i++)
    {
        Node *p = new Node;
        std::cin>>p->data;
        temp ->next = p;
        temp = p;
        p->next = head;
    }
}

void rll::show_list()
{
    Node *temp = head->next;
    unsigned int num = get_size();
    while(num>1)
    {
        std::cout<<temp->data<<std::endl;
        temp = temp->next;
        num--;
    }
}

void rll::cteByarray(int data[], int lenth)
{
    head = new Node;
    Node *temp = head;
    for(int i=0; i<lenth; i++)
    {
        Node *p = new Node;
        p->data = data[i];
        temp->next = p;
        temp = p;
        p->next = head;
    }
}

void rll::istByindex(int index, int value)
{
    Node *temp = head;
    int num = get_size();
    if(num<index)
    {
        std::cout<<"no index found!"<<std::endl;
        return;
    }
    for(int i=0;i<index; i++)
    {
        temp = temp->next;
    }
    Node *p = new Node;
    p->data = value;
    p->next = temp->next;
    temp->next = p;
}

void rll::istBytop(int value)
{
    Node *temp = new Node;
    Node *p = new Node;
    if(head->next == nullptr)
    {
        temp->data = value;
        head->next = temp;
        temp->next = head;
    }else
    {
        temp->data = value;
        p = head->next;
        head->next = temp;
        temp->next = p;
    }
}

void rll::istBybottom(int value)
{
    Node *temp = head;
    int num = get_size();

    for(int i=0;i<num-1; i++)
    {
        temp = temp->next;
    }
    Node *p = new Node;
    p->data = value;
    p->next = temp->next;
    temp->next = p;
}

bool rll::isCircle()
{
    Node *temp1 = new Node;
    Node *temp2 = new Node;
    temp1 = temp2 = head;
    while(temp1 != nullptr&&temp2 != nullptr)
    {
        temp1 = temp1->next;
        temp2 = temp2->next->next;
        if(temp1 == head || temp2 == head)
        {
            break;
        }
        if(temp1 == temp2)
        {
            return true;
        }
        return false;
    }
}

