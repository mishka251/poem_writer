
#pragma once
#include<string>
#include<string.h>
#include<vector>


struct words
{
	std::vector<std::string> such;
	std::vector<std::string> pril;
	std::vector<std::string> glagol;
};

std::string write_pushkin(std::vector<std::string> them_words)
{
	return
		std::string("����������") + them_words[0] + them_words[1] +
		"��� � " + them_words[2] + " ������" +
		"���� ���� �������� ��" +
		"� �� �������� ���� � ����" +
		"� ���� � ���� " + them_words[4] +
		"� " + them_words[3] + " ������� �������" +
		"� ��� ������� �������� ����" +
		"� ����� ���� ����������";
}
std::string write_blok(std::vector<std::string> them_words)
{
	return std::string("����, �����,") + them_words[0] + them_words[1] +
		"������������� � ������� ���." +
		"���� ��� ���� ������� ������ -" +
		"��� ����� ���." + them_words[2] + " ���.";
}
std::string write_tyutchev(std::vector<std::string> them_words)
{
	return
		std::string("�� ��� ����������� �� �����") +
		"��� � ������ ������� ��������" +
		"�� �� ����� ������ �����" +
		"��� ������ ������ ����" +
		"������ ������� ����������" +
		"���� ������ �� ��� ����" +
		"� ������������� �������" +
		"�� ����� �� ��� �����";
}
std::string write_mayakovskij(std::vector<std::string> them_words)
{
	return std::string("� ��� ����� �����") + them_words[0] + them_words[1] +
		them_words[2] + " ������ ����" +
		"���� ����" +
		"���� ����� -" +
		"�� " + them_words[3] + " ���� ���." +
		"� ���� �� ����" +
		"������ �����" +
		"���� ��� ��� �����.";
}
std::string write_esenin(std::vector<std::string> them_words)
{
	return
		std::string("		���� ���� ����� ") + them_words[0] + " �����" +
		"� ��������� ������� ������ � ����" +
		"� ������ ��� �� ������� ��������" +
		"�� ������ � ��������� ��� �� ����." +
		"�� ���� ��� ��� ������������ ��������" +
		"�� ���� ����� ��������� �����." +
		"� ������ �����" + them_words[1] + them_words[2] + "  �������" +
		"�� ������ �� ����� �� �������.";
}







//////////////////
/////////////////
////////////////
std::string write_pushkin1(words them_words)
{
	return
		std::string("����������") + them_words.such[0] + them_words.pril[1] +
		"��� � " + them_words.such[2] + " ������" +
		"���� ���� �������� ��" +
		"� �� �������� ���� � ����" +
		"� ���� � ���� " + them_words.pril[4] +
		"� " + them_words.pril[3] + " ������� �������" +
		"� ��� ������� �������� ����" +
		"� ����� ���� ����������";
}
std::string write_blok1(words them_words)
{
	return std::string("����, �����,") + them_words.such[0] + them_words.such[1] +
		"������������� � ������� ���." +
		"���� ��� ���� ������� ������ -" +
		"��� ����� ���." + them_words.pril[2] + " ���.";
}
std::string write_tyutchev1(words them_words)
{
	return
		std::string("��� ������� ������ �������") +
		"��� ��������� ��� ����� �����"+
		"��� � ������� �����"+
		"������ ����� � �����"+
		"���� ����� ����� ���"+
		"�� ����� ��� ��� ���"+
		"������������ ����������";
}
std::string write_mayakovskij1(words them_words)
{
	return std::string("� ��� ����� �����") + them_words.such[0] + them_words.glagol[1] +
		them_words.pril[2] + " ������ ����" +
		"���� ����" +
		"���� ����� -" +
		"�� " + them_words.such[3] + " ���� ���." +
		"� ���� �� ����" +
		"������ �����" +
		"���� ��� ��� �����.";
}
std::string write_esenin1(words them_words)
{
	return
		std::string("		���� ���� ����� ") + them_words.pril[0] + " �����" +
		"� ��������� ������� ������ � ����" +
		"� ������ ��� �� ������� ��������" +
		"�� ������ � ��������� ��� �� ����." +
		"�� ���� ��� ��� ������������ ��������" +
		"�� ���� ����� ��������� �����." +
		"� ������ �����" + them_words.pril[1] + them_words.such[2] + "  �������" +
		"�� ������ �� ����� �� �������.";
}