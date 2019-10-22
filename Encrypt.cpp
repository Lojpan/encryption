/*
 * Encrypt.cpp
 *
 *  Created on: 21 Oct 2019
 *      Author: loialbringer
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string NCRPTD(string);
string DCRPTD(string);

string input, encrypted, decrypted ;
int n;
vector <int> key {3,4,5};

int main()
{
	string eCR;
	string dCR;
			cout << "Type word: " << endl;
			cin >> input;
	//		cout << "Enter encryption key/value: ";
	//		cin >> n;
			eCR = NCRPTD(input);
			dCR = DCRPTD(encrypted);

			cout << eCR << endl;
	//		cout << dCR << endl;
}
string NCRPTD(string)
{
		for (size_t i = 0; i < input.length(); i++)
		{
			int j = (int) input[i];

			//j += n;
			encrypted += (char) (j + key[i]);
		}
				return encrypted;
}
string DCRPTD(string)
{
		for (size_t i = 0; i < encrypted.length(); i++)
		{
			int j = (int) encrypted[i];
			//j -= n;
			decrypted += (char) (j - key[i]);
		}
				return decrypted;
}

