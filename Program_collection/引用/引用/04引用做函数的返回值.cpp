//#include<iostream>
//using namespace std;
//
////�����������ķ���ֵ
////1����Ҫ���ؾֲ�����������
//int& test01()
//{
//	int a = 10;	//�ֲ���������������е�  ջ��
//	return a;
//}
////2�������ĵ��ÿ�����Ϊ��ֵ
//
//int& test02()
//{
//	static int a = 10;	//��̬�����������ȫ������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
//	return a;
//}
//int main()
//{
//	int& ref = test01();
//
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;
//
//	int& ref1 = test02();
//	cout << "ref1 = " << ref1 << endl;//ʵ�ֶ��ھ�̬�����ķ���
//	cout << "ref1 = " << ref1 << endl;//�ڳ������֮ǰ���ᱻ�ͷ�
//
//	//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
//
//	test02() = 1000;//���ص���a���൱�ڶ�aֱ�Ӳ���
//
//	cout << "ref1 = " << ref1 << endl;//ref1����a�ı��������Դ�ʱ�ͻ�ı�˴���ֵ��
//	cout << "ref1 = " << ref1 << endl;
//
//	system("pause");
//}