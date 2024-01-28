#include<iostream>
using namespace std;

class phan_so {
private:
    double tu;
    double mau;

public:
    static int i;

    friend istream& operator >> (istream& in, phan_so& a) {
        ++i;
        cout << "Nhap tu so " << i << ": ";
        in >> a.tu;
        cout << "Nhap mau so " << i << ": ";
        in >> a.mau;
        return in;
    }

    friend ostream& operator << (ostream& out, phan_so a) {
        out << "Phan so da nhap: ";
        out << a.tu << "/" << a.mau;
        return out;
    }

    int ucln(int x, int y) {
        if (x == 0 || y == 0) {
            return x + y;
        }
        while (x != y) {
            if (y > x) y -= x;
            else x -= y;
        }
        return x;
    }

    int bcnn(int x, int y) {
        int j = ucln(x, y);
        return ((x * y) / j);
    }

    friend phan_so operator + (phan_so a, phan_so b) {
        phan_so c;
        if (a.mau == b.mau) {
            c.tu = a.tu + b.tu;
            c.mau = a.mau; // or b.mau, as they are the same
        }
        else {
            int bc = a.bcnn(a.mau, b.mau);
            c.tu = (a.tu * (bc / a.mau)) + (b.tu * (bc / b.mau));
            c.mau = bc;
        }
        return c;
    }

    void rut_gon(phan_so& a) {
        int i = ucln(a.tu, a.mau);
        a.tu /= i;
        a.mau /= i;
    }
};

int phan_so::i = 0;

int main() {
    phan_so a, b;
    cin >> a >> b;
    a.rut_gon(a);
    b.rut_gon(b);
    cout << "Tong hai phan so: " << a + b;
    return 0;
}
