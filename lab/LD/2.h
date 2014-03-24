/*   */
class Tmp {//промежуточная структура
public:
	int in;
	int h;
	int mas[1000];
};

class Matrix{
	int n,m;//размерность
	Tmp *t;
	
	int Isintmp(int i,int j);//находиться ли элемент в промежуточной структуре
	int GetNewTmp(FILE *f,int i,int j);//если нет,то получить новую промежуточную структуру
	int GetNewTmp(FILE *f);//или так
public:	
	int GetElem(int i,int j);//получение элемента
	Matrix(FILE *f,int a,int b);
	~Matrix();
};
