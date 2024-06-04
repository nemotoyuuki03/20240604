#include <stdio.h>
#include<iostream>
using namespace std;
typedef struct Container
{
	int data;
	Container* next;
} Container;

int main()
{
	Container Items[] = {
		{ 2, NULL, },
		{ 5, NULL, },
		{ 3, NULL, },
		{ 4, NULL, },
		{ 8, NULL, },
		{ 6, NULL, },
		{ 1, NULL, },
		{ 10, NULL, },
		{ 9, NULL, },
		{ 7, NULL, },
	};

	// ���K�P
	Container* seq = NULL;			// �@�̐擪�f�[�^�ւ̃|�C���^

	seq = Items;
	// �@Items[]�̓��e���`���ɒP�������X�g�́w�����Ɂx�ǉ�����
	for (int i = 0; i < 10; i++)
	{
		seq[i].next = Items[i + 1].next;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << seq[i].data << ",";
		
	}
	cout << endl;
	// �Aseq�ɂԂ牺����f�[�^�����ɕ\������
	/*printf("10,9,8,7,6,5,4,3,2,1");*/

	// ���K�Q

	Container* ascend = NULL;		// �擪�f�[�^�ւ̃|�C���^
	ascend = Items;
	// �@Items[]�̓��e���w�����Ɂx�ǉ�����
	for (int i = 0; i < 10; i++)
	{
		int tmp;
		for (int j = 0; j < 10; j++)
		{
			if (ascend[i].data>ascend[j].data)
			{
				tmp = ascend[i].data;
				ascend[i].data = ascend[j].data;

				ascend[j].data = tmp;
			}
		}
	}
	// �Aascend�ɂԂ牺����f�[�^�����ɕ\������
	for (int i = 0; i < 10; i++)
	{
		cout << seq[i].data << "," ;
	}
	cout << endl;
	// ���K�R

	Container* even = NULL;// �����f�[�^�̐擪�f�[�^�ւ̃|�C���^
	even = ascend;
	Container* odd = NULL;			// ��f�[�^�̐擪�f�[�^�ւ̃|�C���^
	odd = ascend;
	// �@Items[]�̋����l��������even�ɒǉ�����
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10;j++)
		{
		  if (!(ascend[j].data % 2))
		  {
			  even[i].data = ascend[i*2].data;

		  }

		}
	}

	// �AItems[]�̊�l��������odd�ɒǉ�����
	
	// �Beven��odd�ɂԂ牺����f�[�^�����ɕ\������
	
	for (int i = 0; i < 5; i++)
	{
		cout << even[i].data << ",";

	}cout << endl;

	// �Ceven�̐擪����f�[�^���P��菜���Aodd�̃��X�g�ɁAodd�̑S�Ẵf�[�^�������ɂȂ�悤�ɑ}������

	// �Deven��odd�ɂԂ牺����f�[�^�����ɕ\������

	// �Eeven�̃f�[�^���S�ĂȂ��Ȃ�܂ŇC�̏������s��

	// �Fodd�ɂԂ牺����f�[�^�����ɕ\������

	return 0;
}
