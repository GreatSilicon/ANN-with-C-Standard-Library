#ifndef NN_H_
#define NN_H_
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<double> cell;
typedef vector<cell> mat;
/*һ��������*/
class layer {
public:
	mat weight;//Ȩ��(mxn)
	mat val;//ֵ(mx1)
	mat bias;//ƫ��(mx1)
	mat z;//z(x)
	mat diff;//diff Ek diff aj
	mat delta_weight;//����Ȩ��
	mat delta_bias;//����ƫ��
//public:
	layer();
	layer(int now, int last);//�������Ϊn���ڵ�
	~layer();
};
#endif