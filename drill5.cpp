#include "std_lib_facilities.h"

int main()

	try 
	{
		/*1. original:
		Cout << "Success!\n";
		fixed:
		cout << "Success!\n";
		
		2. og.:
		cout << "Success!\n;
		fixed:
		cout << "Success!\n";
		
		3. og.:
		cout << "Success" << !\n"
		fixed:
		cout << "Success" << "!\n";
		
		4. og.:
		cout << success << '\n';
		fixed:
		cout << "Success!" << '\n';
		
		5. og.:
		string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
		fixed:
		string res = "7"; vector<string> v(10); v[5] = res; cout << "Success!\n";
		
		6. og.:
		vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
		fixed:
		vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";
		
		7. og.:
		if (cond) cout << "Success!\n"; else cout << "Fail!\n";
		fixed:
		int cond;
		if (cond) cout << "Success!\n"; else cout << "Fail!\n";
		
		8. og.:
		bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
		fixed:
		bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";
		
		9. og.:
		string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
		fixed:
		string s = "ape"; bool c = "fool">s; if (c) cout << "Success!\n";
		
		10. og.:
		string s = "ape"; if (s=="fool") cout << "Success!\n";
		fixed:
		string s = "ape"; if (s=="ape") cout << "Success!\n";
		
		11. og.:
		string s = "ape"; if (s=="fool") cout < "Success!\n";
		fixed:
		string s = "ape"; if (s=="ape") cout << "Success!\n";
		
		12. og.:
		string s = "ape"; if (s+"fool") cout < "Success!\n";
		fixed:
		string s = "ape"; if (s!="ape") cout << "Success!\n";
		
		13. og.:
		vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
		fixed:
		vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n";
		
		14. og.:
		vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
		fixed:
		vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
		
		15. og.:
		string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
		fixed:
		string s = "Success!\n" ; for (int i=0; i<10; ++i) cout << s[i];
		
		16. og.:
		if (true) then cout << "Success!\n"; else cout << "Fail!\n";
		fixed:
		if (true) cout << "Success!\n"; else cout << "Fail!\n";
		
		17. og.:
		int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
		fixed:
		int x = 2000; int c = x; if (c==2000) cout << "Success!\n";
		
		18. og.:
		string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
		fixed:
		string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
		
		19. og.:
		vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
		fixed:
		vector<int> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
		
		20. og.:
		int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
		fixed:
		int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";
		
		21. og.:
		int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
		fixed:
		int x = 2; double d = 5/(x+2); if (d!=2*x+0.5) cout << "Success!\n";
		
		22. og.:
		string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
		fixed:
		string s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
		
		23. og.:
		int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
		fixed:
		int i=0; int j=9; while (i<10) ++i; if (j<i) cout << "Success!\n";
		
		24. og.:
		int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";
		fixed:
		int x = 4; double d = 5/(x-2); if (d = 2*x + 0.5) cout << "Success!\n";
		
		25. og.:
		cin << "Success!\n";
		fixed:
		cout << "Success!\n"; */
		
		keep_window_open();
		return 0;
	}
	catch (exception& e) 
	{
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
	}
	
	catch (...) 
	{
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
	}