// BSTree.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "BSTree.h"
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	BSTree<double> t;
	int num = rand();
	for (int i = 1; i <= 12; i++) {
		t.insert(num);
		num = rand();
	}

	cout << endl << "inOrder "<< endl;
	t.inOrder();

	cout << "Maximum: " << t.search_maximum() << endl;
	cout << "Minimum: " << t.search_minimun() << endl;
	
	return 0;
}
