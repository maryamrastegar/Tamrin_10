#include<iostream>
#include<string>
using namespace std;

class kasr {
public:

	int surat, makhraj;
	kasr(int s,int m){
		cout << "Enter surat: ";
		cin >> s;
		surat = s;
		cout << "Enter makhraj: ";
		cin >> m;
		makhraj = m;
	}
	kasr(int s,string m) {

	}
    void sum(kasr digar);
	void div(kasr digar);
	void multi(kasr dovom);
	void sub(kasr digar);
	void show(string name)
	{
		if (makhraj == 1) 
			cout << name << ':' << surat<<endl;
		
		else if (makhraj == 0)
			cout << "ERROR /0";
		else
			cout << name <<':'<<surat << '/' << makhraj<<endl;
	};

};
void kasr::sum(kasr digar) {
	int s = surat * digar.makhraj + digar.surat* makhraj;
	int m = makhraj * digar.makhraj;
	cout << "\nsum: "<<s<<'/'<< m;
};
void kasr::multi(kasr dovom) {
	int s = surat * dovom.surat;
	int m = makhraj * dovom.makhraj;
	cout << "\nmutiply: " << s << '/'<<m;
}
void kasr :: sub(kasr digar) {
	int s = surat * digar.makhraj - digar.surat* makhraj;
	int m = makhraj * digar.makhraj;
	cout << "\nsubtract: " << s << '/' << m;
}
void kasr::div(kasr digar) {
	int s = surat * digar.makhraj ;
	int m = makhraj * digar.surat;
	cout << "\nsubtract: " << s << '/' << m;
}
int main() {

	string name;
	kasr kasr1(0,1);
	kasr kasr2(0, 1);

	name = "kasr1";
	kasr1.show(name);

	name = "kasr";
	kasr2.show(name);

	kasr1.sum(kasr2);
	kasr1.multi(kasr2);
	kasr1.sub(kasr2);
	kasr1.div(kasr2);


		system("pause");
	return 0;
}