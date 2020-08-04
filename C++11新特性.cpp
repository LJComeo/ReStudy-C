#include <iostream>
using namespace std;

#if 0

class Test
{
	int m_a;
	char m_c;
public:
	Test(int a = 0, char c = '\0') :
		m_a(a),
		m_c(c)
	{}

	Test(char c) :
		Test(0, c)
	{}
	void show()
	{
		cout << m_a << ' ' << m_c << endl;
	}
};
//ί�ɹ��죺������һ�����캯���е��������Ĺ��캯��
	//ί�ɹ��캯�������þ����ܹ����ٳ���Ա��д���캯����ʱ��

int main()
{
	Test t('a');
	t.show();

	return 0;
}
#endif

#if 0
class Test
{
	int m_a;
public:
	Test() = default;//�����������default��������ʽȱʡ����;�ñ���������Ĭ�ϵĺ���
	Test(const Test &a) = delete;//ɾ��Ĭ�Ϻ���������delete֮�󣬱�������������Ĭ�ϵĺ���
	Test & operator = (const Test &a) = delete;

	Test(int a) :
		m_a(a)
	{}
};

int main()
{
	Test t1;
}
#endif

#if 1
#include <vector>
//�ƶ����캯��
/*
�ƶ����캯������������ֵ����;
��ֵ��Ϊ������ֵ�뽫����ֵ->����ֵ���ǵ����ĳ�����������ֵ������ʱ�����ȣ�
�ж���ֵ�ķ���������ȡ��ַ�ľ�����ֵ
��������ϵͳ�ṩ���ƶ����캯����ִ�е���һ��ǳ����������������֮�󴫽����Ķ����û���ˣ��������ǻ�Ҫ��
�������Ǿ�ͨ���Լ�ʵ������ƶ����캯����
move�������Խ�һ��ֵ��ǿ�Ƶ�ת������ֵ
forward������һ��ֵת������ֵ������ֵ(����ת������ʹ����forward���������)
ΪʲôҪʹ����ֵ��ʹ����ֵ������ΪҪ���ƶ������ϣ������ޱ�Ҫ����Դ��֧����ߴ���Ч��
�ƶ�������ǽ�һ�������е���Դ�ƶ�������һ��������
����ת����
ͨ�����ã�ʹ��ģ��
template <tyoename T>
T func(T &&t)
{}
����ʹ���������۵���&& + && = && ��&& + & = &
����ת�����������Ľ���������Ĵ��ݸ�����ģ���е��õ�����һ���������������Ͳ��ܷ����仯
*/
class String
{
	char *m_str;
public:
	static int s_m_Ccount;
	static int s_m_Mcount;

	String(char *str = "")
	{
		if (nullptr == str)
		{
			str = "";
		}
		m_str = new char[strlen(str) + 1];
		strcpy(m_str, str);
	}

	String(const String & s) :
		m_str(new char[strlen(s.m_str) + 1])
	{
		s_m_Ccount++;
		strcpy(m_str, s.m_str);
	}


	String(String && s) :
		m_str(s.m_str)
	{
		s_m_Mcount++;
		s.m_str = nullptr;
	}

	String & operator = (const String & s)
	{
		if (this != &s)
		{
			char *ptmp = new char[strlen(s.m_str) + 1];
			strcpy(ptmp, s.m_str);
			delete[]m_str;
			m_str = ptmp;
		}
		return *this;
	}

	~String()
	{
		if (m_str)
		{
			delete[]m_str;
		}
	}

	void show()
	{
		cout << m_str << endl;
	}
};

int String::s_m_Ccount = 0;
int String::s_m_Mcount = 0;

String getString(char *str)
{
	return String(str);
}

int main()
{
	vector<String> vs;
	vs.reserve(1000);

	for (int i = 0; i < 1000; i++)
	{
		vs.push_back(String("cai"));
	}

	cout << String::s_m_Ccount << endl;
	cout << String::s_m_Mcount << endl;
	return 0;
}
#endif

#if 1
//lambda���ʽ
#include <string>
#include <algorithm>

struct Goods
{
	string _name;
	double _price;
};

struct compare
{
	bool operator()(Goods & gl, Goods & gr)
	{
		return gl._price <= gr._price;
	}
};

int main()
{
	Goods gds[] = { { "ƻ��", 2.1 }, { "�㽶", 3 }, { "����", 2.2 }, { "����", 1.5 } };
	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), compare());
	return 0;
}

int main()
{
	Goods gds[] = { { "ƻ��", 2.1 }, { "�㽶", 3 }, { "����", 2.2 }, { "����", 1.5 } };
	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), [](const Goods & gl, const Goods & gr)->bool
													{
														return gl._price <= gr._price;

													}
	);
	return 0;
}
/*
���������������[]�Լ�����Ķ�������һ��lambda���ʽ��lambda����[]��ʼ�ı��ʽ
lambda���ʽ���ֵ�ԭ����ǣ��������ھ�����ʹ�÷º����������������¶����࣬Ȼ��ʵ��()���صķ������ǹ����鷳
Ϊ�˽���������⣬C++11������lambda���ʽ�����Ż���
lambda���ʽ���÷���
1.[]�д�ŵ��ǲ�׽�б���׽�б�ֻ����һ��ջ�ı�����ȫ�ֱ������ܲ�׽�����ǿ���ʹ��
2.()�еĲ����б�һ�����ʡ�ԣ�������mutable��ʱ��Ͳ���ʡ��
3.mutable��lambda����Ĭ����const������ʹ��mutable���Խ��������
4.->����ֵ����
5.{������}
��׽�б��˵����
[var]:ֵ���ݲ�׽����
[=]:ֵ���ݲ�׽������������б���
[&var]:���ô��ݲ�׽����
[&]:���ô��ݲ�׽������������б���
[this]:ֵ���ݲ�׽thisָ��
Ҳ���Դ��ݶ����[=,&var]

lambda���ʽ�ײ��Ƿº��������Ը�ֵ������ָ��
*/
#endif

#if 1
//�߳̿�
//����Linux�߳�ѧϰ
#endif

#if 1

int main()
{
	int a = 0;
	char c = 'a';

	decltype (a + c) d;

	return 0;
}



#endif
