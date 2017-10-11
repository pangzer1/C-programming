#include <iostream>
#include <cstring>

int star(int a);

using namespace std;

int main()
{
	char txt[10000];
	int length, num;
	int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
	a = b = c = d = e = f = g = h = i = j = k = l = m = n = o = p = q = r = s = t = u = v = w = x = y = z = 0;
	int num1 = 0;
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(txt, 10000, ';');
	length	= strlen(txt);
	for (num = 0; num < length; num++)
	{
		if (isalpha(txt[num]) != 0)
		{
			num1 = num1 + 1;
			txt[num] = tolower(txt[num]);
		}
	}
	for (num = 0; num < length; num++)
	{
		switch (txt[num])
		{
		case 'a':
			a = a + 1;
			break;
		case 'b':
			b = b + 1;
			break;
		case 'c':
			c = c + 1;
			break;
		case 'd':
			d = d + 1;
			break;
		case 'e':
			e = e + 1;
			break;
		case 'f':
			f = f + 1;
			break;
		case 'g':
			g = g + 1;
			break;
		case 'h':
			h = h + 1;
			break;
		case 'i':
			i = i + 1;
			break;
		case 'j':
			j = j + 1;
			break;
		case 'k':
			k = k + 1;
			break;
		case 'l':
			l = l + 1;
			break;
		case 'm':
			m = m + 1;
			break;
		case 'n':
			n = n + 1;
			break;
		case 'o':
			o = o + 1;
			break;
		case 'p':
			p = p + 1;
			break;
		case 'q':
			q = q + 1;
 			break;
		case 'r':
			r = r + 1;
			break;
		case 's':
			s = s + 1;
			break;
		case 't':
			t = t + 1;
			break;
		case 'u':
			u = u + 1;
			break;
		case 'v':
			v = v + 1;
			break;
		case 'w':
			w = w + 1;
			break;
		case 'x':
			x = x + 1;
			break;
		case 'y':
			y = y + 1;
			break;
		case 'z':
			z = z + 1;
			break;
		}
	}
	cout << "총 알파벳 수>>" <<  num1 << endl << endl;
	
	cout << "a (" << a << ") : ";
	star(a);
	cout << endl;
	cout << "b (" << b << ") : ";
	star(b);
	cout << endl;
	cout << "c (" << c << ") : ";
	star(c);
	cout << endl;
	cout << "d (" << d << ") : ";
	star(d);
	cout << endl;
	cout << "e (" << e << ") : ";
	star(e);
	cout << endl;
	cout << "f (" << f << ") : ";
	star(f);
	cout << endl;
	cout << "g (" << g << ") : ";
	star(g);
	cout << endl;
	cout << "h (" << h << ") : ";
	star(h);
	cout << endl;
	cout << "i (" << i << ") : ";
	star(i);
	cout << endl;
	cout << "j (" << j << ") : ";
	star(j);
	cout << endl;
	cout << "k (" << k << ") : ";
	star(k);
	cout << endl;
	cout << "l (" << l << ") : ";
	star(l);
	cout << endl;
	cout << "m (" << m << ") : ";
	star(m);
	cout << endl;
	cout << "n (" << n << ") : ";
	star(n);
	cout << endl;
	cout << "o (" << o << ") : ";
	star(o);
	cout << endl;
	cout << "p (" << p << ") : ";
	star(p);
	cout << endl;
	cout << "q (" << q << ") : ";
	star(q);
	cout << endl;
	cout << "r (" << r << ") : ";
	star(r);
	cout << endl;
	cout << "s (" << s << ") : ";
	star(s);
	cout << endl;
	cout << "t (" << t << ") : ";
	star(t);
	cout << endl;
	cout << "u (" << u << ") : ";
	star(u);
	cout << endl;
	cout << "v (" << v << ") : ";
	star(v);
	cout << endl;
	cout << "w (" << w << ") : ";
	star(w);
	cout << endl;
	cout << "x (" << x << ") : ";
	star(x);
	cout << endl;
	cout << "y (" << y << ") : ";
	star(y);
	cout << endl;
	cout << "z (" << z << ") : ";
	star(z);
	cout << endl;
}

int star(int a)
{
	int b = 0;

	while (b < a)
	{
		cout << '*';
		b++;
	}
	return b;
}