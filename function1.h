#ifndef FUNC_H
#define FUNC_H
#include "layer1.h"
#include<ctime>
#include<cmath>
#include<iostream>
#include<opencv2\core.hpp>
#include<opencv2\opencv.hpp>
using namespace cv;
using namespace std;
const double inf = 1e9;
double sigmoid(double x);
double diff_sigmoid(double x);
double ReLU(double x);
double diff_ReLU(double x);
void init(vector<layer*>& net);//��������г�ʼ��
void setzero(mat& m);//��һ��������Ϊ0
int rev(int n);//С��intת��
void read_img(string file, vector<mat>& pic, int used);//��ȡmnist�����ļ�
void read_label(string file, vector<unsigned char>& type, int used);//��ȡmnist��ǩ�ļ�
void convert_to_mat(vector<unsigned char>& label, vector<mat>& ans);//��������labelת���������
mat mul(mat& a, mat& b);//�����
mat add(mat& a, mat& b,double flag);//�����
void update_diff(layer* now, layer* last);//����now->diff
void update_weight(layer* now, layer* next,double rate);//����now->delta_weight,now->delta_bias
void BP(vector<layer*>& net,mat& loss,double rate);//���򴫲�
mat FP(vector<layer*>& net);//���򴫲�
mat countloss(mat& ans, mat& sample);//������ʧ(ƽ��ǰ)
void train(vector<layer*>& net, int n, double rate, double wrong);
void trainonce(vector<layer*>& net, vector<mat>& minibatch, vector<mat>& label, double rate);//����һ��ѵ��
void update(vector<layer*>& net);//����Ȩֵ��ƫ��
void save(vector<layer*>& net, string filename);//��������,���浽filename.xml
void load(vector<layer*>& net,string filename);//��filename��������
bool judge(mat& ans, int label);//�жϷ�������
//debug
void outmat(mat& out);//�������
double test(vector<layer*>& net,vector<mat>& img,vector<unsigned char>& label);//����һ����������ۻ����
void net_read(vector<layer*>& net, mat& img);//��ȡͼƬ������
void pow_ele(mat& m);//�������ÿ��ֵ��ƽ��
#endif