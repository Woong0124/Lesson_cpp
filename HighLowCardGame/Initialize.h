#pragma once
#include "Common.h"

// ���� ī�� ������ �̿��ϴ� ��� ���

void Initialize();
void Shuffle();
int Betting(int money);	// ����
bool CompareCard(const StCard& CardA, const StCard& CardB);	// ī�� ��
void ResultCard(bool& result, char c, int& count);	// ���� ���� Ȯ��
void BettingResult(const bool result, int& betting, int& money);	// ���� ���
bool ContinueCard(bool result);	// ��� ���� ���� Ȯ��