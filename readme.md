## 记录了循环链表的实现
+ 获取链表长度 unsigned int get_size();
+ 直接创建链表 void cteByindex(int index);
+ 根据数组创建 void cteByarray(int data[], int lenth);
+ 显示链表 void show_list();
+ 链表插入 void istByindex(int index, int value);
+ 头插法 void istBytop(int value);
+ 尾插法 void istBybottom(int value);
+ 是否存在局部环形链 bool isCircle();