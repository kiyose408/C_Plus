# ������
## �ܽ�
���顢�ṹ��ָ����C++��3�ָ������͡����������һ�����ݶ����д洢���ͬ�����͵�ֵ��ͨ�� __����__��__�±�__�����Է��������и���Ԫ�ء�
### �ṹ��Structure
�ṹ���Խ������ͬ���͵�ֵ�洢��ͬһ�����ݶ����У�����ʹ�ó�Ա��ϵ�����(.)���������еĳ�Ա��ʹ�ýṹ�ĵ�һ���Ǵ����ṹģ�壬������ṹ�洢����Щ��Ա��ģ������ƽ���Ϊ�����͵ı�ʶ����Ȼ��Ϳ��������������͵Ľṹ������
ʾ����
```
struct inflatable   //structure declaration
{
    char name [20];
    float volume;
    double price;
};
```
### �����壨�����壩��Union 
��������Դ洢һ��ֵ���������ֵ�����ǲ�ͬ�����ͣ���Ա��ָ����ʹ�õ�ģʽ��
ʾ����
```
union ex        //����һ����Ϊex��������/������
{
    int Class;  //��Ա���� ������˵���� ��Ա��
    char name��
}
```
### ָ�롤Point
ָ���Ǳ���������洢��ַ�ı���������˵��ָ��ָ�������洢�ĵ�ַ��ָ������ָ����ָ��ָ��Ķ�������͡���ָ��Ӧ�ý����������������õ�ָ��ָ���λ���е�ֵ��
### ģ����vector
������string����һ�ֶ�̬���飨���������н׶�����vector����ĳ��ȣ����ڽ�β�����µ�����Ҳ�������м���������ݣ������ϣ�����ʹ��new������̬��������Ʒ��vector��ȷʵʹ��new��delete�������ڴ棬�����ֹ���ʱ�Զ���ɵġ�
ʹ��ʾ����
```
# include<vector>
...
using namespace std;
vector<int> vi;         //����һ��0��С��int����
int n;
cin >> n;
vector<double> vd(n);           //����һ��n��double����������
```
���У�vi��һ��vector < int >����vd��һ��vector < double >��������vector�������������������ֵʱ�Զ��������ȣ���˿��Խ�vi��ʼ��������Ϊ0������Ҫ�������ȣ���Ҫʹ��vector���еĸ��ַ�����
һ����˵�������������һ����Ϊvt��vector�������ɴ洢n_elem������ΪtypeName��Ԫ�أ�
```
vector<typeName> vt(n_elem);
```
### ģ����array��C++ 11��
vector�����鹦��ǿ�󣬵���Ч���Ե͡��������ʱ�̶����ȵ����飬ʹ������ʱ���õ�ѡ�񣬵��ǲ���ô��ȫ���㡣������C++11��ר����array�࣬��Ҳλ�����ƿռ�std�С�������һ��Ҳ�ǳ��ȹ̶���Ҳʹ��ջ����̬�ڴ���䣩�����������ɴ洢���������Ч��������һ�������Ǹ��ӷ��㰲ȫ��Ҫ����array������Ҫ����ͷ�ļ�array��ʾ�����£�
```
#include <array>
...
using namespace std;
array<int,5>ai;     //
array<double,4> ad = {1.2,2.1,3.43,4.3};
```
�ƹ�ɵã��������������һ����Ϊarr��array����������n_elem������Ϊtypename��Ԫ�أ�
```
array<typeName,n_elem>arr;
```
�봴��vector����ͬ��ʱ��n_elem�����Ǳ�����
��C++11�У��ɽ��б���ʼ������vector��array���󣬵�����C ++ 98 �У����ܶ�vector������������
### �ַ���
�ַ������Կ��ַ�Ϊ��β��һϵ���ַ����ַ�������������������ַ���������ʾ��������ʽ�����˽�β�Ŀ��ַ������Խ��ַ����洢��char�����У������ñ���ʼ��Ϊָ���ַ�����charָ���ʾ�ַ���������strlen���������ַ������ȣ����в��������ַ�������strcpy�������ַ�����һ��λ�ø��Ƶ���һ��λ�á���ʹ����Щ�ַ���ʱ��Ӧ������ͷ�ļ�csting��string.h��
ͷ�ļ�string֧�ֵ�C++string���ṩ����һ�ֶ��û������Ѻõ��ַ������������������˵��string�������Ҫ�洢���ַ����Զ��������С���û�����ʹ�ø���������������ַ�����
new����������ڳ�������ʱΪ���ݶ���ȫ���ڴ档����������ػ���ڴ�ĵ�ַ�����Խ������ַ����һ��ָ�룬����ֻ��ʹ�ø�ָ������������ڴ档������ݶ����Ǽ򵥱����������ʹ�ýӴ����������(*)�������ֵ��������ݶ��������飬�������ʹ������������ʹ��ָ��������Ԫ�أ�������ݶ����ǽṹ���������ָ���������������->)���������Ա��
### ָ��������
���߹�ϵ���ܡ����ar���������������ʽar[i]������Ϊ*(ar+i)������������������Ϊ��һ��Ԫ�صĵ�ַ�����������������þ���ָ����ͬ��������������ʹ�������ʾ����ͨ��ָ����������new����������е�Ԫ�ء�
�����new��delete������ʽ���ƺ�ʱ�����ݶ�������ڴ棬��ʱ���ڴ�黹���ڴ�ء��Զ�����ʵ�ں����������ı���������̬�������ں��������ʹ�ùؼ���static�����ı����������ֱ�������̫���Զ������ڳ���ִ�е��������Ĵ���飨ͨ���Ǻ������壩ʱ���������뿪�ô����ʱ��ֹ����̬�������������������ڶ����ڡ�
C ++ 98�����ı�׼ģ��⣨STL���ṩ��ģ����vector�����Ƕ�̬��������Ʒ��C ++ 11�ṩ��ģ����array�����Ƕ�����������Ʒ��
