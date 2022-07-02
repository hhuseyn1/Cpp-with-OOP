#include <iostream>
#include <vector>


using namespace std;


class DatabaseService { 
public:
	virtual void Create() = 0;
	virtual void Read() = 0;
	virtual void Update() = 0;
	virtual void Delete() = 0;
};


class MsSql : public DatabaseService {
public:
	void MSCreate() { cout << "Create with MsSql\n"; }
	void MSRead() { cout << "Read with MsSql\n"; }
	void MSUpdate() { cout << "Update with MsSql\n"; }
	void MSDelete() { cout << "Delete with MsSql\n"; }


	void Create() override { MSCreate(); };
	void Read() override { MSRead(); };
	void Update() override { MSUpdate(); };
	void Delete() override { MSDelete(); };
};

class Oracle : public DatabaseService {
public:
	void Insert() { cout << "Create with Oracle\n"; }
	void Select() { cout << "Read with Oracle\n"; }
	void Modifer() { cout << "Update with Oracle\n"; }
	void Remove() { cout << "Delete with Oracle\n"; }


	void Create() override { Insert(); };
	void Read() override { Select(); };
	void Update() override { Modifer(); };
	void Delete() override { Remove(); };
};

class MongoDb : public DatabaseService {
public:
	void InsertOne() { cout << "Create with MongoDb\n"; }
	void SelectOne() { cout << "Read with MongoDb\n"; }
	void UpdateOne() { cout << "Update with MongoDb\n"; }
	void RemoveOne() { cout << "Delete with MongoDb\n"; }

	void Create() override { InsertOne(); };
	void Read() override { SelectOne(); };
	void Update() override { UpdateOne(); };
	void Delete() override { RemoveOne(); };
};



class DaydayDb {
public:
	void Create() { cout << "Create with MongoDb\n"; };
	void Read() { cout << "Read with MongoDb\n"; };
	void Update() { cout << "Update with MongoDb\n"; };
	void Delete() { cout << "Delete with MongoDb\n"; };
};


class Application
{
	DatabaseService* _database;

public:

	Application(DatabaseService* database)
		:_database(database) {}

	void doSomething() {
		_database->Create();
		_database->Read();
		_database->Update();
		_database->Delete();
	}
};



int main()
{
	Application app(new MsSql());
	app.doSomething();

}