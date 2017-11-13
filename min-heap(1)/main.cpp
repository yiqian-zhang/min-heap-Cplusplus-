#include "Assistance.h"
#include "MineHeap.h"

int main()
{
	int a[12]={80,57,99,35,23,11,74,29,62,16};
	MinHeap<int> ha(a,20,10);
	int e;
	cout<<endl;
	
	cout << "最小堆序列为：" << endl;
	ha.Traverse(Write<int>);
	cout << endl << endl;	
	
	cout << "插入元素 14 后的最小堆序列为：" << endl;
	ha.Insert(14);
	ha.Traverse(Write<int>);
	cout << endl << endl;
	
	ha.DeleteTop(e);
	cout<<"删除的堆顶元素为:"<<e<<endl;
	ha.Traverse(Write<int>);
	cout<<endl;
	
	system("pause");
	
	
	int b[12]={59,14,4,50,21,11,79,38,70,30};
	MinHeap<int> hb(b,20,10);
	int f;
	cout<<endl;
	
	cout << "最小堆序列为：" << endl;
	hb.Traverse(Write<int>);
	cout << endl << endl;	
	
	cout << "插入元素 45 后的最小堆序列为：" << endl;
	hb.Insert(45);
	hb.Traverse(Write<int>);
	cout << endl << endl;
	
	hb.DeleteTop(f);
	cout<<"删除的堆顶元素为:"<<f<<endl;
	hb.Traverse(Write<int>);
	cout<<endl;
	
	system("pause");
	return 0;
}
