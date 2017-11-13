#include "Assistance.h"
#include "MineHeap.h"

int main()
{
	int a[12]={80,57,99,35,23,11,74,29,62,16};
	MinHeap<int> ha(a,20,10);
	int e;
	cout<<endl;
	
	cout << "��С������Ϊ��" << endl;
	ha.Traverse(Write<int>);
	cout << endl << endl;	
	
	cout << "����Ԫ�� 14 �����С������Ϊ��" << endl;
	ha.Insert(14);
	ha.Traverse(Write<int>);
	cout << endl << endl;
	
	ha.DeleteTop(e);
	cout<<"ɾ���ĶѶ�Ԫ��Ϊ:"<<e<<endl;
	ha.Traverse(Write<int>);
	cout<<endl;
	
	system("pause");
	
	
	int b[12]={59,14,4,50,21,11,79,38,70,30};
	MinHeap<int> hb(b,20,10);
	int f;
	cout<<endl;
	
	cout << "��С������Ϊ��" << endl;
	hb.Traverse(Write<int>);
	cout << endl << endl;	
	
	cout << "����Ԫ�� 45 �����С������Ϊ��" << endl;
	hb.Insert(45);
	hb.Traverse(Write<int>);
	cout << endl << endl;
	
	hb.DeleteTop(f);
	cout<<"ɾ���ĶѶ�Ԫ��Ϊ:"<<f<<endl;
	hb.Traverse(Write<int>);
	cout<<endl;
	
	system("pause");
	return 0;
}
