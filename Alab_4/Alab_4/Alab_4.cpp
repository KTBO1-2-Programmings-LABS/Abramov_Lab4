#include "pch.h"
#include "FileHandler.h"

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

int main(array<System::String^>^ args)
{
    // ������� ������ FileHandler
    FileHandler^ fh = gcnew FileHandler();

    // ��������� ��������� � �� ��������
    List<int>^ gradesA = gcnew List<int>();
    gradesA->Add(5);
    gradesA->Add(5);
    gradesA->Add(4);
    gradesA->Add(3);
    fh->AddStudent("Abramov", gradesA);

    List<int>^ gradesK = gcnew List<int>();
    gradesK->Add(5);
    gradesK->Add(5);
    gradesK->Add(4);
    gradesK->Add(2);
    fh->AddStudent("Karasenko", gradesK);

    List<int>^ gradesKu = gcnew List<int>();
    gradesKu->Add(5);
    gradesKu->Add(4);
    gradesKu->Add(3);
    gradesKu->Add(3);
    fh->AddStudent("Kubanov", gradesKu);

    List<int>^ gradesAk = gcnew List<int>();
    gradesAk->Add(5);
    gradesAk->Add(5);
    gradesAk->Add(4);
    gradesAk->Add(3);
    fh->AddStudent("Akimov", gradesAk);

    // ������������� ��� ����� ��� ����������
    fh->SetTextFileName("FilteredStudents.txt");

    // �������� � ��������� ��������� � ����� "5", ����� "4" � ����� "3"
    fh->SaveToFileStudentsByGrades(2, 1, 1, 0);

    return 0;
}




