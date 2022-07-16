#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <numeric>
using namespace std;
#include "Debtor.h"

void ageBetween(const Debtor & debtor){
				if ((debtor.getBirthday().year) <= 1996 && (debtor.getBirthday().year) >= 1986)
					cout << debtor << endl;
}
void debtMoreThan500(const Debtor& debtor){
	if (debtor.getDebt()< 5000)
		cout << debtor << endl;
}

void nameUpper18andTwo7numberinPhone(const Debtor& debtor) {
	int count7 = 0;
	for (size_t i = 0; i < debtor.getPhone().size(); i++) {
		if (debtor.getPhone()[i] == '7')
			count7++;
		if (debtor.getFullname().size() >= 18 && count7 >= 2) {
			cout << debtor << endl;
			break;
		}
	}
}

void sawSecondWorldWar(const Debtor& debtor) {
	if (debtor.getBirthday().year >= 1939 && debtor.getBirthday().year <= 1945)
		cout << debtor << endl;
}

void bornInWinter(const Debtor& debtor) {
	if (debtor.getBirthday().month == 1 || debtor.getBirthday().month == 2 || debtor.getBirthday().month == 12)
		cout << debtor << endl;
}
int main(){
    vector<Debtor> debtors;
    debtors.push_back(Debtor("Shirley T. Qualls", DateTime(30,3,2000), "530-662-7732", "ShirleyTQualls@teleworm.us", "3565 Eagles Nest Drive Woodland, CA 95695", 2414));
    debtors.push_back(Debtor("Danielle W. Grier", DateTime(18, 10, 1978), "321-473-4178", "DanielleWGrier@rhyta.com", "1973 Stoneybrook Road Maitland, FL 32751", 3599));
    debtors.push_back(Debtor("Connie W. Lemire", DateTime(18, 7, 1963), "828-321-3751", "ConnieWLemire@rhyta.com", "2432 Hannah Street Andrews, NC 28901", 1219));
    debtors.push_back(Debtor("Coy K. Adams", DateTime(1, 13, 1976), "410-347-1307", "CoyKAdams@dayrep.com", "2411 Blue Spruce Lane Baltimore, MD 21202", 3784));
    debtors.push_back(Debtor("Bernice J. Miles", DateTime(1, 6, 1988), "912-307-6797", "BerniceJMiles@armyspy.com", "4971 Austin Avenue Savannah, GA 31401", 4060));
    debtors.push_back(Debtor("Bob L. Zambrano", DateTime(28, 2, 1990), "706-446-1649", "BobLZambrano@armyspy.com", "2031 Limer Street Augusta, GA 30901", 6628));
    debtors.push_back(Debtor("Adam D. Bartlett", DateTime(6, 5, 1950), "650-693-1758", "AdamDBartlett@rhyta.com", "2737 Rardin Drive San Jose, CA 95110", 5412));
    debtors.push_back(Debtor("Pablo M. Skinner", DateTime(26, 8, 1936), "630-391-2034", "PabloMSkinner@armyspy.com", "16 Fraggle Drive Hickory Hills, IL 60457", 11097));
    debtors.push_back(Debtor("Dorothy J. Brown", DateTime(9, 7, 1971), "270-456-3288", "DorothyJBrown@rhyta.com", "699 Harper Street Louisville, KY 40202", 7956));
    debtors.push_back(Debtor("Larry A. Miracle", DateTime(22, 5, 1998), "301-621-3318", "LarryAMiracle@jourrapide.com", "2940 Adams Avenue Columbia, MD 21044", 7150));
    debtors.push_back(Debtor("Donna B. Maynard", DateTime(26, 1, 1944), "520-297-0575", "DonnaBMaynard@teleworm.us", "4821 Elk Rd Little Tucson, AZ 85704", 2910));
    debtors.push_back(Debtor("Jessica J. Stoops", DateTime(22, 4, 1989), "360-366-8101", "JessicaJStoops@dayrep.com", "2527 Terra Street Custer, WA 98240", 11805));
    debtors.push_back(Debtor("Audry M. Styles", DateTime(7, 2, 1937), "978-773-4802", "AudryMStyles@jourrapide.com", "151 Christie Way Marlboro, MA 01752", 1001));
    debtors.push_back(Debtor("Violet R. Anguiano", DateTime(4, 11, 1958), "585-340-7888", "VioletRAnguiano@dayrep.com", "1460 Walt Nuzum Farm Road Rochester, NY 14620", 9128));
    debtors.push_back(Debtor("Charles P. Segundo", DateTime(21, 11, 1970), "415-367-3341", "CharlesPSegundo@dayrep.com", "1824 Roosevelt Street Fremont, CA 94539", 5648));
    debtors.push_back(Debtor("Paul H. Sturtz", DateTime(15, 9, 1944), "336-376-1732", "PaulHSturtz@dayrep.com", "759 Havanna Street Saxapahaw, NC 27340", 10437));
    debtors.push_back(Debtor("Doris B. King", DateTime(10, 10, 1978), "205-231-8973", "DorisBKing@rhyta.com", "3172 Bedford Street Birmingham, AL 35203", 7230));
    debtors.push_back(Debtor("Deanna J. Donofrio", DateTime(16, 4, 1983), "952-842-7576", "DeannaJDonofrio@rhyta.com", "1972 Orchard Street Bloomington, MN 55437", 515));
    debtors.push_back(Debtor("Martin S. Malinowski", DateTime(17,1, 1992), "765-599-3523", "MartinSMalinowski@dayrep.com", "3749 Capitol Avenue New Castle, IN 47362", 1816));

	cout << "------------3)Yashi 26 - dan 36 - ya qeder olan borclulari cixartmag------------" << endl;
		//lambda
            for_each(debtors.begin(), debtors.end(), [](const Debtor& debtor) {
        if ((debtor.getBirthday().year) <= 1996 && (debtor.getBirthday().year) >=1986)
            cout << debtor << endl;
                });
			
			//Predicate
			for_each(debtors.begin(), debtors.end(), ageBetween);

			cout << "------------4) Borcu 5000 - den cox olmayan borclularic cixartmag------------" << endl;
			//lambda
		for_each(debtors.begin(), debtors.end(), [](const Debtor& debtor) {
			if (debtor.getDebt() < 5000)
				cout << debtor << endl;
			});
		//Predicate
		for_each(debtors.begin(), debtors.end(), debtMoreThan500);
			
		cout << "------------5) Butov adi 18 simvoldan cox olan ve telefon nomresinde 2 ve ya 2-den cox 7 reqemi olan borclulari cixartmaq------------" << endl;
		//lambda
			for_each(debtors.begin(), debtors.end(), [&](const Debtor& debtor) {
				int count7 = 0;
				for (size_t i = 0; i < debtor.getPhone().size(); i++){
					if (debtor.getPhone()[i] == '7')
						count7++;
					if (debtor.getFullname().size() >= 18 && count7 >= 2) {
						cout << debtor << endl;
						break;
					}
				}
				});
			//Predicate

			
			for_each(debtors.begin(), debtors.end(), nameUpper18andTwo7numberinPhone);
			cout << "------------7) Qishda anadan olan borclulari cixardmaq------------" << endl;
			//lambda
			for_each(debtors.begin(), debtors.end(), [](const Debtor& debtor) {
				if (debtor.getBirthday().month == 1 || debtor.getBirthday().month == 2 || debtor.getBirthday().month == 12)
					cout << debtor << endl;
				});
			//predicate
			
			for_each(debtors.begin(), debtors.end(), bornInWinter);

			cout << "------------15) Butun borcu olanlarin borcunu cemleyib umumi borcu cixartmaq------------" << endl;
			//lambda
			auto sum = accumulate(debtors.begin(), debtors.end(), 0, [](float result, const Debtor& debtor) {
				result += debtor.getDebt();
				return result;
				});

			cout << "Sum: " << sum << endl;
			//Predicate
	

			cout << "------------16) 2ci dunya muharibesin gormush borclularin siyahisi cixartmaq------------" << endl;
			for_each(debtors.begin(), debtors.end(), [](const Debtor& debtor) {
				if (debtor.getBirthday().year >= 1939 && debtor.getBirthday().year<= 1945)
					cout << debtor << endl;
				});

			
			for_each(debtors.begin(), debtors.end(), sawSecondWorldWar);

	







}

