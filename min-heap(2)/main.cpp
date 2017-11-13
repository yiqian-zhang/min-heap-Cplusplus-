#include "Assistance.h"
#include "MaxHeap.h"

int main()
{
	int a[12]={80,57,99,35,23,11,74,29,62,16};
	MaxHeap<int> ha(a,20,10);
	int e;
	cout<<endl;
	
	cout << "��������Ϊ��" << endl;
	ha.Traverse(Write<int>);
	cout << endl << endl;	
	system("pause");
	
	cout << "����Ԫ�� 90 �����������Ϊ��" << endl;
	ha.Insert(90);
	ha.Traverse(Write<int>);
	cout << endl << endl;
	system("pause");
	
	ha.DeleteTop(e);
	cout<<"ɾ���ĶѶ�Ԫ��Ϊ:"<<e<<endl;
	ha.Traverse(Write<int>);
	cout<<endl<<endl;
	system("pause");
	
	cout << "����Ԫ�� 100 �����������Ϊ��" << endl;
	ha.Insert(100);
	ha.Traverse(Write<int>);
	cout << endl << endl;
	system("pause");
	
	ha.DeleteTop(e);
	cout<<"ɾ���ĶѶ�Ԫ��Ϊ:"<<e<<endl;
	ha.Traverse(Write<int>);
	cout<<endl<<endl;
	system("pause");
	
	cout << "����Ԫ�� 45 �����������Ϊ��" << endl;
	ha.Insert(45);
	ha.Traverse(Write<int>);
	cout << endl << endl;
	system("pause");
	
	return 0;
}
