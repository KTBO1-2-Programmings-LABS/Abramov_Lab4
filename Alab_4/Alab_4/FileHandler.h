using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

ref class FileHandler
{
public:
    // ����������� ������
    FileHandler(void);
    // �������� �������� � �������� � ������
    void AddStudent(String^, List<int>^);
    // ������� �������� �� ������
    void DelStudent(String^);
    // ���������� ��� ����� ��� ���������� ����������� ������
    void SetTextFileName(String^);
    // �������� ������ ��������� � �������� ����������� ������
    ArrayList^ GetStudentsByGrades(int, int, int, int);
    // ��������� ������ ��������� � �������� ����������� ������
    void SaveToFileStudentsByGrades(int, int, int, int);

private:
    String^ TextFileName;
    Dictionary<String^, List<int>^>^ studentGrades;
};