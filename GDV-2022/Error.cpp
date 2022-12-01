#include "stdafx.h"
#include "Error.h"

namespace Error
{
	// ����� ������:	0 - 99 - ��������� ������
	//					100 - 109 - ������ ���������
	//					110 - 119 - ������ �������� � ������ ������

	ERROR errors[ERROR_MAX_ENTRY] = // ������� ������
	{
		ERROR_ENTRY(0, "���������� ��� ������"),
		ERROR_ENTRY(1, "��������� ����"),
		ERROR_ENTRY_NODEF(2), ERROR_ENTRY_NODEF(3), ERROR_ENTRY_NODEF(4), ERROR_ENTRY_NODEF(5),
		ERROR_ENTRY_NODEF(6), ERROR_ENTRY_NODEF(7), ERROR_ENTRY_NODEF(8), ERROR_ENTRY_NODEF(9),
		ERROR_ENTRY_NODEF10(10), ERROR_ENTRY_NODEF10(20), ERROR_ENTRY_NODEF10(30), ERROR_ENTRY_NODEF10(40), ERROR_ENTRY_NODEF10(50),
		ERROR_ENTRY_NODEF10(60), ERROR_ENTRY_NODEF10(70), ERROR_ENTRY_NODEF10(80), ERROR_ENTRY_NODEF10(90),
		ERROR_ENTRY(100, "�������� -in ������ ���� �����"),
		ERROR_ENTRY_NODEF(101),ERROR_ENTRY_NODEF(102),ERROR_ENTRY_NODEF(103),
		ERROR_ENTRY(104, "��������� ����� �������� ���������"),
		ERROR_ENTRY_NODEF(105),ERROR_ENTRY_NODEF(106),ERROR_ENTRY_NODEF(107),
		ERROR_ENTRY_NODEF(108),ERROR_ENTRY_NODEF(109),
		ERROR_ENTRY(110, "������ ��� �������� ����� � �������� ����� (-in)"),
		ERROR_ENTRY(111, "������������ ������ � �������� ����� (-in)"),
		ERROR_ENTRY(112, "������ ��� �������� ����� ��������� (-log)"),
		ERROR_ENTRY(113, "������ ��� �������� ������� ������. ��������� ������� ������� ������"),
		ERROR_ENTRY(114, "������ ��� ���������� ������� � �������. ������� ������ ���������"),
		ERROR_ENTRY(115, "������ ��� ��������� ������� �� �������. ������������ ����� �������"),
		ERROR_ENTRY(116, "������ ��� �������� ������� ���������������. ��������� ������� ������� ���������������"),
		ERROR_ENTRY(117, "������ ��� ���������� �������������� � �������. ������� ��������������� ���������"),
		ERROR_ENTRY(118, "������ ��� ��������� ������ �� ������� ���������������. ������������ ����� ��������������"),
		ERROR_ENTRY(119, "������. � ����������� ���������� GDV-2022 ����� ������� ���"),
		ERROR_ENTRY(120, "������. ���� '-' ����� ���� �����������, ������ ����� ���������!"),
		ERROR_ENTRY(121, "������ � ����������!"),
		ERROR_ENTRY_NODEF(122),
		ERROR_ENTRY_NODEF(123),
		ERROR_ENTRY_NODEF(124),
		ERROR_ENTRY_NODEF(125),
		ERROR_ENTRY_NODEF(126),
		ERROR_ENTRY_NODEF(127),
		ERROR_ENTRY_NODEF(128),
		ERROR_ENTRY_NODEF(129),
		ERROR_ENTRY_NODEF10(130),ERROR_ENTRY_NODEF10(140),ERROR_ENTRY_NODEF10(150),
		ERROR_ENTRY_NODEF10(160),ERROR_ENTRY_NODEF10(170),ERROR_ENTRY_NODEF10(180),ERROR_ENTRY_NODEF10(190),
		ERROR_ENTRY_NODEF100(200),ERROR_ENTRY_NODEF100(300),ERROR_ENTRY_NODEF100(400),ERROR_ENTRY_NODEF100(500),
		ERROR_ENTRY(600, "��� ����������� �������"),
		ERROR_ENTRY(601, "������� ������������ �����"),
		ERROR_ENTRY(602, "������������� �������������������� ����������"),
		ERROR_ENTRY(603, "������������ ���������� �������"),
		ERROR_ENTRY(604, "��� ������������� ������� �� ������� ����������� ������ ')'"),
		ERROR_ENTRY(605, "��� ������������� ������� �� ������ ��� ������������� ��������"),
		ERROR_ENTRY(606, "������. ��������� ������������� ����������!"),
		ERROR_ENTRY(607, "������ ��� ���������� ��������. ����� �������� �������� ������������ ������ ���� ���������������!"),
		ERROR_ENTRY(608, "���������� ���������� ��� ����������, ������������������ ������! ����� ��������� => ������ ���� ���� �������������, ���� �������"),
		ERROR_ENTRY(609, "������������ ������������ ����������"),
		ERROR_ENTRY(610, "������ ��� ������ �������! ���������� ���������� �� ���������"),
		ERROR_ENTRY(611, "��� ������������� ������-��������� el => {} �� ������� �������� ����� For"),
		ERROR_ENTRY_NODEF(612),
		ERROR_ENTRY_NODEF(613),
		ERROR_ENTRY_NODEF(614),
		ERROR_ENTRY_NODEF(615),
		ERROR_ENTRY_NODEF(616),
		ERROR_ENTRY_NODEF(617),
		ERROR_ENTRY_NODEF(618),
		ERROR_ENTRY_NODEF(619),
		ERROR_ENTRY_NODEF10(620),ERROR_ENTRY_NODEF10(630),ERROR_ENTRY_NODEF10(640),
		ERROR_ENTRY(650, "������ � ���������� �������!"),
		ERROR_ENTRY(651, "������ � ���������"),
		ERROR_ENTRY(652, "������ ��� ���������� ���������� ����������"),
		ERROR_ENTRY(653, "������ ��� �������� ����� ������ ��� ����������"),
		ERROR_ENTRY(654, "������ ��� ������ �������"),
		ERROR_ENTRY(655, "������ � ���������� ���������� �������"),
		ERROR_ENTRY(656, "������ � ���� �������"),
		ERROR_ENTRY(657, "������ � ������������� ����������"),
		ERROR_ENTRY(658, "������ � ������������� ��������� ���������"),
		ERROR_ENTRY(659, "������ ��� ����������� �������� �������"),
		
		ERROR_ENTRY(660, "������ � ��� ������������� ��� ��������� ����� ��������"),
		ERROR_ENTRY(661, "������ � ���� ��������� ���������"),
		ERROR_ENTRY(662, "������ ��� ������ ��������� console(). �������� ���������. console(��������);"),
		ERROR_ENTRY(663, "������ � ������������� ������� ���������!"),
		ERROR_ENTRY(664, "������ � ���������� �����"),
		ERROR_ENTRY(665, "������ � ���� �����"),
		ERROR_ENTRY(666, "������ ��� ������������ �������"),
		ERROR_ENTRY(667, "������ � ����������� ���� ����������/�������"),
		ERROR_ENTRY_NODEF(668),
		ERROR_ENTRY_NODEF(669),
		ERROR_ENTRY_NODEF10(670),ERROR_ENTRY_NODEF10(680),ERROR_ENTRY_NODEF10(690),
		ERROR_ENTRY_NODEF100(700),ERROR_ENTRY_NODEF100(800),ERROR_ENTRY_NODEF100(900)
	};

	ERROR geterror(int id) // ��������� ������ �� �� ����
	{
		if (!(id > 0 && id < ERROR_MAX_ENTRY))
		{
			ERROR e = errors[0]; // ������������ ��� ������
			e.inext.col = e.inext.line = -1; // ������������ ���������� ������
			return e;
		}
		else
		{
			ERROR e = errors[id]; // ������ �� ����
			e.inext.col = e.inext.line = -1; // ������������ ���������� ������
			return e;
		}
	}

	ERROR geterrorin(int id, int line = -1, int col = -1) // ����������� ������ �� ����, ���� ����� ������ � �����
	{
		if (!(id > 0 && id < ERROR_MAX_ENTRY))
		{
			ERROR e = errors[0];
			return e;
		}
		else
		{
			ERROR e = errors[id];
			e.inext = { short(line), short(col) };
			return e;
		}
	}
}