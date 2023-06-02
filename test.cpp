#include "Recurrent_linked_list.h"
#define vprintf(...) printf(__VA_ARGS__, "%d-%s-%s",__LINE__, __DATE__,__FILE__)

int main()
{
    rll list;
    // list.cteByindex(10);
    // std::cout<<"finish push"<<std::endl;
    // list.show_list();

    int a[] = {0,1,2,3,4,5,6,7,8,9};
    list.cteByarray(a, 10);
    list.istBybottom(5);
    list.show_list();
    if(list.isCircle())
    {
        vprintf("it is a circle");
    }else
    {
        vprintf("it is not a circle");
    }
}