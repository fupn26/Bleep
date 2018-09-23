#include "std_lib_facilities.h"

int main()
{
vector<string> words;
vector<string> disliked;
cout<<"Please write some words!(stop with 'e')\n";
for (string word; cin>>word;)
	if (word != "e")
		words.push_back(word);
	else
		break;
cout<<"\nPlease enter some words you dislike!(stop with 'e')\n";
for (string dislike; cin>>dislike;)
	if (dislike != "e")
		disliked.push_back(dislike);
	else
		break;
cout<<'\n';
sort(words);
sort(disliked);
for (int i = 0; i<words.size(); ++i)
	{int counter = 0;
	for (int y = 0; y<disliked.size(); ++y)
		{if (words[i] != disliked[y])
			++counter;
			
		else 
			--counter;}
	if (counter == disliked.size())
		cout<<words[i]<<'\n';
	else
		cout<<"Bleep\n";
	}	
}
