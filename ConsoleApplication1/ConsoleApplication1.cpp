// ConsoleApplication1.cpp: ����Ŀ�ļ���

#include "stdafx.h"
using namespace System;
int main(array<System::String ^> ^args)
{
	double a, b, c;
    Console::WriteLine(L"�����������ε�һ���߳���");
	a =System::Convert::ToDouble(Console::ReadLine());
	Console::WriteLine(L"�����������εڶ����߳���");
	b = System::Convert::ToDouble(Console::ReadLine());
	Console::WriteLine(L"�����������μнǽǶȣ��Ƕ��ƣ�");
	c = System::Convert::ToDouble(Console::ReadLine());
	ClassLibrary2::Class1^ cc = gcnew ClassLibrary2::Class1(a,b,c);
	Console::Write("���Ϊ");
	//System::Diagnostics::Debugger::Break();
	Console::WriteLine(cc->clac());
	double d, e, f;
	Console::WriteLine(L"�����������ε�һ���߳���");
	d = System::Convert::ToDouble(Console::ReadLine());
	Console::WriteLine(L"�����������εڶ����߳���");
	e = System::Convert::ToDouble(Console::ReadLine());
	Console::WriteLine(L"�����������ε������߳���");
	f = System::Convert::ToDouble(Console::ReadLine());
	ClassLibrary3::Class1^ ccc = gcnew ClassLibrary3::Class1(d,e,f);
	Console::Write("���Ϊ");
	//System::Diagnostics::Debugger::Break();
	Console::Write(ccc->clac());
	Console::ReadKey();
    return 0;
}
