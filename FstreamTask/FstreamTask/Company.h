#pragma once


class Company {
	vector<Applier*> appliers;

public:
	void hireUp(Applier* cv) {
		for (size_t i = 0; i < appliers.size(); i++)
		{
			appliers.push_back(cv);
		}
	}

	void showAllCV() {

		for (size_t i = 0; i < appliers.size(); i++) {
			appliers[i]->cv();
		}
	}


	void writeToFile(string filename) {
		ofstream fout(filename, ios::app);
		if (!fout)
			throw new exception("File can not created");
		if (!fout.is_open()) {
			fout.close();
			throw new exception("File can not opened");
		}
		fout << "CV Info:" << endl;
		for (size_t i = 0; i < appliers.size(); i++) {

			fout << "Name: " << appliers[i]->getName() << endl;
			fout << "Age: " << appliers[i]->getAge() << endl;
			fout << "Speciality: " << appliers[i]->getSpeciality() << endl;
			fout << "Text: " << appliers[i]->getText() << endl;

		}
		fout.close();

	}
	friend istream& operator>>(istream& input, Applier& apilliers);

	void readToFile(string filename) {
		ifstream fin("myFile.txt", ios::in);

		if (!fin)
			throw  exception("File can not find");

		if (!fin.is_open()) {
			fin.close();
			throw  exception("File can not opened");
		}




		while (!fin.eof()) {
			Applier a;
			for (size_t i = 0; i < appliers.size(); i++) {

				fin >> a.getName();
				fin >> a.getAge();
				fin >> a.getSpeciality();
				fin >> a.getText();
			}
		}


		fin.close();
	}


};

