#include <iostream>
#include <vector>

using namespace std;




//void exceptionExamples(int value) {
//	switch (value)
//	{
//	case 1:
//		throw 15;
//	case 2:
//		throw 566u;
//	case 3:
//		throw "Hakuna";
//	case 4:
//		throw true;
//	case 5:
//		throw 26;
//
//	default:
//		throw exception("my exception message");
//	}
//
//}

/*
int main()
{

	try
	{
		exceptionExamples(5);
	}
	catch (int ex)
	{
		cout << "(int) Exception occured -> " << ex << endl;
	}
	catch (const char* ex)
	{
		cout << "(const char*) Exception occured -> " << ex << endl;
	}
	catch (bool ex)
	{
		cout << "(bool) Exception occured -> " << ex << endl;
	}
	catch (bad_alloc ex)
	{
		cout << "(exception) Exception occured -> " << ex.what() << endl;
	}*/
	/*catch (...) {
		cout << "(...) Exception occured" << endl;
	}


	cout << "Terminated\n";


	return 0;
}

*/









//int Division(int a, int b) throw(const char*)
//{
//	if (b == 0)
//		throw "ZeroDivisionException";
//
//	return a / b;
//}
//
//
//int main()
//{
//	try
//	{
//		cout << "Result: " << Division(5, 0) << endl;
//	}
//	catch (const char* ex)
//	{
//		cout << "Exception occured -> " << ex << endl;
//	}
//
//	return 0;
//}








//
//int Division(int a, int b) throw(const char*)
//{
//	if (b == 0)
//		throw "ZeroDivisionException";
//
//	return a / b;
//}
//
//
//int main()
//{
//	try
//	{
//		try
//		{
//			cout << "Result: " << Division(5, 0) << endl;
//		}
//		catch (const char* ex)
//		{
//			cout << "(inner) Exception occured -> " << ex << endl;
//
//			// rethrow
//			cout << "Result: " << Division(5, 0) << endl;
//		}
//
//	}
//	catch (const char* ex)
//	{
//		cout << "(outer) Exception occured -> " << ex << endl;
//	}
//
//	return 0;
//}







//
//enum StatusCode { NotFound = 404, ServerError = 503};
//
//void main() {
//
//	try
//	{
//		throw NotFound;
//	}
//	catch (StatusCode ex)
//	{
//		cout << "Exception occured " << ex << endl;;
//	}
//}
//









int main() {
	vector<int> vec;
	vec.push_back(53);
	vec.push_back(768);

	try
	{
		cout<<vec.at(2);
	}
	catch (out_of_range& ex)
	{
		cout << "Exception occurred!" << ex.what() << endl;
	}
	return 0;
}
