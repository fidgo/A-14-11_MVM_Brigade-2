/*   */
class Tmp {//������������� ���������
public:
	int in;
	int h;
	int mas[1000];
};

class Matrix{
	int n,m;//�����������
	Tmp *t;
	
	int Isintmp(int i,int j);//���������� �� ������� � ������������� ���������
	int GetNewTmp(FILE *f,int i,int j);//���� ���,�� �������� ����� ������������� ���������
	int GetNewTmp(FILE *f);//��� ���
public:	
	int GetElem(int i,int j);//��������� ��������
	Matrix(FILE *f,int a,int b);
	~Matrix();
};
