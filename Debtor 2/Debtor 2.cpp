#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
#include "Debtor.h"

void hasRythaorDayrep(const Debtor & debtor) {
	if (debtor.getEmail().find("rhyta.com") || debtor.getEmail().find("dayrep.com"))
		cout << debtor << endl;
}
void findPhonehasnt8(const Debtor& debtor) {
	if (debtor.getPhone().find("8") == false) {
		cout << "Name: " << debtor.getFullname() << endl;
		cout << "Age: " << 2022 - (debtor.getBirthday().year) << endl;
		cout << "Total debt: " << debtor.getDebt() << endl;
	}
}
int main(){
vector<Debtor> debtors;
debtors.push_back(Debtor("Shirley T. Qualls", DateTime(30, 3, 2000), "530-662-7732", "ShirleyTQualls@teleworm.us", "3565 Eagles Nest Drive Woodland, CA 95695", 2414));
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
debtors.push_back(Debtor("Martin S. Malinowski", DateTime(17, 1, 1992), "765-599-3523", "MartinSMalinowski@dayrep.com", "3749 Capitol Avenue New Castle, IN 47362", 1816));







cout << "----------- 2)rhyta.com ve ya dayrep.com domenlerinde emaili olan borclulari cixartmag -----------" << endl;
//lambda
for_each(debtors.begin(), debtors.end(), [](const Debtor& debtor)
	{
		if (debtor.getEmail().find("rhyta.com")  || debtor.getEmail().find("dayrep.com"))
			cout << debtor << endl;
	});
//predicate
for_each(debtors.begin(), debtors.end(), hasRythaorDayrep);
cout << "----------- 9)Telefon nomresinde 8 olmayan borclularin yalniz familyasin, yashin ve umumi borcun meblegin cixarmaq -----------" << endl;
//lambda
for_each(debtors.begin(), debtors.end(), [&](const Debtor& debtor){
if (debtor.getPhone().find("8") == false){
	cout << "Name: " << debtor.getFullname() << endl;
	cout << "Age: " << 2022 - (debtor.getBirthday().year) << endl;
	cout << "Total debt: " << debtor.getDebt() << endl;
}});

for_each(debtors.begin(), debtors.end(), findPhonehasnt8);


cout << "----------- 11)Adinda ve familyasinda hec olmasa 3 eyni herf olan borclularin siyahisin cixarmaq ve onlari elifba sirasina gore sortirovka elemek -----------" << endl;

cout << "----------- 13)borclulardan en coxu hansi ilde dogulubsa hemin ili cixartmaq -----------" << endl;

cout << "----------- 18)Nomresinde tekrar reqemler olmayan borclularin ve onlarin borcunun meblegin cixartmaq -----------" << endl;



cout << "----------- 19)Tesevvur edek ki, butun borclari olanlar bugunden etibaren her ay 500 azn pul odeyecekler.Oz ad gunune kimi borcun oduyub qurtara bilenlerin siyahisin cixartmaq -----------" << endl;



cout << "----------- 20)Adindaki ve familyasindaki herflerden smile sozunu yaza bileceyimiz borclularin siyahisini cixartmaq -----------" << endl;


}
