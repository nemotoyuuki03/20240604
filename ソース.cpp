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

	// 演習１
	Container* seq = NULL;			// ①の先頭データへのポインタ

	seq = Items;
	// ①Items[]の内容を定義順に単方向リストの『末尾に』追加する
	for (int i = 0; i < 10; i++)
	{
		seq[i].next = Items[i + 1].next;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << seq[i].data << ",";
		
	}
	cout << endl;
	// ②seqにぶら下がるデータを順に表示する
	/*printf("10,9,8,7,6,5,4,3,2,1");*/

	// 演習２

	Container* ascend = NULL;		// 先頭データへのポインタ
	ascend = Items;
	// ①Items[]の内容を『昇順に』追加する
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
	// ②ascendにぶら下がるデータを順に表示する
	for (int i = 0; i < 10; i++)
	{
		cout << seq[i].data << "," ;
	}
	cout << endl;
	// 演習３

	Container* even = NULL;// 偶数データの先頭データへのポインタ
	even = ascend;
	Container* odd = NULL;			// 奇数データの先頭データへのポインタ
	odd = ascend;
	// ①Items[]の偶数値を昇順にevenに追加する
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

	// ②Items[]の奇数値を昇順にoddに追加する
	
	// ③evenとoddにぶら下がるデータを順に表示する
	
	for (int i = 0; i < 5; i++)
	{
		cout << even[i].data << ",";

	}cout << endl;

	// ④evenの先頭からデータを１つ取り除き、oddのリストに、oddの全てのデータが昇順になるように挿入する

	// ⑤evenとoddにぶら下がるデータを順に表示する

	// ⑥evenのデータが全てなくなるまで④の処理を行う

	// ⑦oddにぶら下がるデータを順に表示する

	return 0;
}
