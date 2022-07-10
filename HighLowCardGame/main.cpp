#include <iostream>
#include <vector>
#include <string>
#include "Card.h"
#include "Common.h"
#include "Initialize.h"

using namespace std;

//1. 52���� ī�带 ������ ����
//2. ������ ���۵Ǹ� ī�� �ϳ��� ����
//3. �÷��̾�� ����ī�尡
// ���µ� ī�庸�� ���� ī������
// ���� ī�������� ���Ͽ� ������ �Ѵ�
//4. ���� �´ٸ� �¸� Ʋ���� �й�
//5. ī��� 1�� ���� ���� K�� ���� ����
//6. ������ ������Ʈ > ���̾� > ��Ʈ > Ŭ�ι�
//������ ����.

int main()
{
	// ���̷ο� ī�����
	Initialize();
	int count = 0;	// ��� �����ߴ��� Ȯ�� ����
	int money = 10000;	// �Ӵ� ����
	int betting = 0;	// ���� ����
	while (true)
	{
		system("cls");
		Shuffle();

		betting = Betting(money);	// ����

		cards[0].printCard();
		char c;
		bool result = true;
		cin >> c;
		while (!(c == 'h' || c == 'l'))
		{
			cout << "h Ȥ�� l �� �Է����ּ���..." << endl;
			cin >> c;
		}
		cards[1].printCard();

		result = CompareCard(cards[0], cards[1]);	// ī�� ��

		ResultCard(result, c, count);	// ���� ���� Ȯ��

		BettingResult(result, betting, money);	// ���� ���

		result = ContinueCard(result);	// ��� ���� ���� Ȯ��
		if (result == false)
		{
			break;
		}

		system("pause");
	}
}