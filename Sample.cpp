// Sample.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int bucket,sampleNum;
	vector <double> sample;
	vector <double> result;
	int flag = 0;
	while (true) {
		cout << "是否使用默认程序（默认桶数为4，每桶采样点为5）" << endl;
		cout<<"如果使用默认程序输入1，如果使用自定义程序请输入0（输入结束按回车键）" << endl;
		cin >> flag;
		if (flag == 0) {
			cout << "请输入桶数：(输入结束按回车键)" << endl;
			cin >> bucket;
			for (int j = 0; j < bucket; j++) {
				cout << "请输入第"<<j<<"桶采样点个数：" << endl;
				cin >> sampleNum;
				cout << "请输入" << sampleNum << "个采样值,以空格来区分不同采样值（输入结束按回车键）" << endl;
				for (int i = 0; i < sampleNum; i++) {
					double temp;
					cin >> temp;
					sample.insert(sample.begin() + i, temp);
					//if (i > 0) {
						//sample[i] = (sample[i] - sample[0]) / (i * 5);
					//}
				}
				for (int i = 0; i < sampleNum; i++) {
					for (int k = i + 1; k < sampleNum; k++) {
						cout << (sample[k] - sample[i]) / ((k - i) * 5) << " ";
					}
				}
				//cout << "第" << j << "桶结果:" << endl;
				//for (int i = 0; i < sampleNum - 1; i++) {
				//cout << sample[i + 1] << " ";
				//}
				sample.clear();
				cout << endl;
			}
		}
		else if (flag == 1) {
			for (int j = 0; j < 4; j++) {
				cout << "请输入第"<<j<<"桶的5个采样值,以空格来区分不同采样值（输入结束按回车键）" << endl;
				for (int i = 0; i < 5; i++) {
					double temp;
					cin >> temp;
					sample.insert(sample.begin() + i, temp);
					//if (i > 0) {
						//sample[i] = (sample[i] - sample[0]) / (i * 5);
					//}
				}
				//cout << "第" << j << "桶结果:" << endl;
				//for (int i = 0; i < 4; i++) {
					//cout << sample[i + 1] << " ";
				//}
				for (int i = 0; i < 5; i++) {
					for (int k = i + 1; k < 5; k++) {
						cout << (sample[k] - sample[i]) / ((k - i) * 5) << " ";
					}
				}
				sample.clear();
				cout << endl;
			}
		}
		else {
			cout << "输入有错,请重新输入" << endl;
		}
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
