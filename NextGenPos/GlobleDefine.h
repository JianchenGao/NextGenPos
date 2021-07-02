#pragma once
class ItemID
{
public:
	ItemID(int id)
	{
		m_id = id;
	}
private:
	int m_id;
};

class Money
{
public:
	Money(double money)
	{
		m_money = money;
	}
private:
	double m_money;
};