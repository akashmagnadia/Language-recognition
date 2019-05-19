// Author: Akash Magnadia & Matt Ziminski

// Translations of Macbeth were created online using Google translate, starting with the
// English version at http://shakespeare.mit.edu/macbeth/full.html
// To trigger the translation option, I went to the Chrome browser / Settings / Language
// option and changed the default language, which triggered showing the translation option
// for the English Macbeth page when it was displayed.  The translated text was then
// copy/pasted into a text file and saved.  The texts are stored using the multi-byte
// UTF-8 format, explained at https://en.wikipedia.org/wiki/UTF-8, though here we are
// not attempting to count more than the first 128 alphabetical characters.
//
/* Results of running the final version of the program are shown below.

 Program 3: Which Language

 Letter Frequency Counts:
 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
 A:   6018  9416  6544  5068  7541  8935  9939 10052
 B:   1464   448  1081  2060  1746  1221  1173  1387
 C:   2144   636  3028  3126  1014  3865  2855  3222
 D:   3331  1013  2698  4592  2265  2945  3687  3815
 E:   9270  7187 12782 14779  8280  9364 10551 10861
 F:   1701   297  1101  1464   932  1099  1039   653
 G:   1333   187   772  2503  2975  1423   983   936
 H:   5244  2384  1004  4775  1687  1485  1413  1263
 I:   4653  8022  5583  7062  2961  8128  4179  3964
 J:     38  1331   538   148  1049     5   216   429
 K:    691  3952    28  1080  3551    51    19    18
 L:   3294  4648  4240  3089  4658  4814  2082  3985
 M:   2481  3526  3269  2861  3812  2790  4415  3021
 N:   4987  7958  5958  9026  4725  5966  4455  5704
 O:   6054  4219  5315  2208  3529  8668  8898  7605
 P:   1000  1331  2297   466   448  2060  1862  1842
 Q:    121    78   907    84    77   548   954   883
 R:   4518  1784  5986  5955  2802  5357  5328  5706
 S:   4943  5425  6898  5852  4538  4863  6774  6468
 T:   7055  7620  6025  5477  5632  5373  3729  3932
 U:   2590  4226  5373  3327   963  3081  3840  3591
 V:    657  1784  1566   661  1297  1287  1351   893
 W:   1926   120    78  1797   138   141    68    61
 X:    112    45   328    89    49    42   260    91
 Y:   1637  1403   247   169  1998   216    65   891
 Z:     15     3   343   939  2742   490   314   301

 Letter frequency order:
 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
 E     A     E     E     E     E     E     E
 T     I     S     N     A     A     A     A
 O     N     A     I     T     O     O     O
 A     T     T     R     N     I     S     S
 H     E     R     S     L     N     R     R
 N     S     N     T     S     T     N     N
 S     L     I     A     M     R     M     L
 I     U     U     H     K     S     I     I
 R     O     O     D     O     L     U     T
 D     K     L     U     G     C     T     D
 L     M     M     C     I     U     D     U
 U     H     C     L     R     D     C     C
 M     R     D     M     Z     M     L     M
 C     V     P     G     D     P     P     P
 W     Y     V     O     Y     H     H     B
 F     J     F     B     B     G     V     H
 Y     P     B     W     H     V     B     G
 B     D     H     F     V     B     F     V
 G     C     Q     K     J     F     G     Y
 P     B     G     Z     C     Q     Q     Q
 K     F     J     V     U     Z     Z     F
 V     G     Z     P     F     Y     X     J
 Q     W     X     Y     P     W     J     Z
 X     Q     Y     J     W     K     W     X
 J     X     W     X     Q     X     Y     W
 Z     Z     K     Q     X     J     K     K

 Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac):
 Ma per arrivare a un agreement bisogna essere in due. E dato che il governo intende
 resistere sui numeri della manovra, è necessario offrire garanzie all’Europa e ai
 mercati. Perciò sono stati stabiliti due capisaldi: uno tecnico, l’altro più politico.
 La riduzione strutturale del debito viene fissato come un «obiettivo strategico»,
 non a caso sottolineato da Di Maio dopo il vertice. La linea dell’esecutivo è che
 per far ripartire l’Italia sia necessario «cambiare approccio» con una manovra
 espansiva «dopo anni di cure rigoriste senza risultati», ma s

 A:51 B:5 C:20 D:15 E:55 F:4 G:6 H:2 I:54 J:0 K:0 L:22 M:10 N:29 O:39 P:13 Q:0 R:37 S:28 T:31 U:15 V:9 W:0 X:0 Y:0 Z:3

 Letter frequency order:
 Engl  Finn  Fren  Germ  Hung  Ital  Port  Span  User
 E     A     E     E     E     E     E     E     E
 T     I     S     N     A     A     A     A     I
 O     N     A     I     T     O     O     O     A
 A     T     T     R     N     I     S     S     O
 H     E     R     S     L     N     R     R     R
 N     S     N     T     S     T     N     N     T
 S     L     I     A     M     R     M     L     N
 I     U     U     H     K     S     I     I     S
 R     O     O     D     O     L     U     T     L
 D     K     L     U     G     C     T     D     C
 L     M     M     C     I     U     D     U     D
 U     H     C     L     R     D     C     C     U
 M     R     D     M     Z     M     L     M     P
 C     V     P     G     D     P     P     P     M
 W     Y     V     O     Y     H     H     B     V
 F     J     F     B     B     G     V     H     G
 Y     P     B     W     H     V     B     G     B
 B     D     H     F     V     B     F     V     F
 G     C     Q     K     J     F     G     Y     Z
 P     B     G     Z     C     Q     Q     Q     H
 K     F     J     V     U     Z     Z     F     J
 V     G     Z     P     F     Y     X     J     K
 Q     W     X     Y     P     W     J     Z     Q
 X     Q     Y     J     W     K     W     X     W
 J     X     W     X     Q     X     Y     W     X
 Z     Z     K     Q     X     J     K     K     Y

 60    78    16    50    94    10    18    13  <--- Difference (This line is not part of expected output, but is helpful!)

 Language is Italian

 */

// --------------------------------------------------------------------

/**Mallavarapu: Use camelCase varaible names,
 * Comments regarding functions should have details of the parameters
 * Major code blocks within the function also should have comments
 * 
 * */
#include <iostream>
#include <cctype>       // For the letter checking functions
#include <fstream>       // For file input
#include <iomanip>      // For setw
#include <cstdlib>      // For exit()
#include <cstring>
using namespace std;

const int LIMIT = 26;
const string fileNames[8] = //list of files to read different languages from
{
  "MacbethEnglish.txt",
  "MacbethFinnish.txt",
  "MacbethFrench.txt",
  "MacbethGerman.txt",
  "MacbethHungarian.txt",
  "MacbethItalian.txt",
  "MacbethPortuguese.txt",
  "MacbethSpanish.txt"
};

const string languages[8] = { //8 different languages being used in this program
  "English",
  "Finnish",
  "French",
  "German",
  "Hungarian",
  "Italian",
  "Portuguese",
  "Spanish"
};

int letterCount [26][9];//9 column because 8 languages and 1 for userText
char letterFreq [26][9];//9 column because 8 languages and 1 for userText


//prints out how many times each letter has been detected from the different language files
void letterFrequencyCounts(int (letterCount)[26][9], bool shouldDisplay = true)
{
  int ROW = LIMIT; // 26
  int COL = 8;

  for (int row = 0; row < ROW; row++)
  {
    for (int col = 0; col < COL; col++)
    {
      letterCount [row][col] = 0; //initialize all the numbers to 0
    }
  }

  ifstream inputFileStream;  // declare the input file stream

  string fileName = "";
  char c = ' ';

  for(int f = 0; f < 8; f++)
  {
    fileName = fileNames[f];

    // open input file and verify
    inputFileStream.open( fileName.c_str());   // Convert C++ string to expected C-style string

    if( !inputFileStream.is_open()) {
      cout << "Could not find input file.  Exiting..." << endl; //if no files it recognized
      exit( -1);
    }

    while( inputFileStream >> c) {
      if( isalpha(c))
      {
        c = toupper(c); // convert alphabetic input characters to upper case
        letterCount[c-'A'][f]++; // update letter count, using the character as the index
      }
    }

    inputFileStream.close();
  }

  if (shouldDisplay == true) {
    cout << "Letter Frequency Counts:" << endl;
    cout << "     Engl  Finn  Fren  Germ  Hung  Ital  Port  Span" << endl;

    for (int row = 0; row < 26; row++)
    {
      cout << (char)(row+'A') << ": ";
      for (int col = 0; col < COL; col++)
      {
        // See if it is a printable character and if there were any of that character
        if ( letterCount[row][col] != 0 )
        {
          //displays frequency of each letter in each language in numbers
          cout << setw(6) << letterCount[row][col]; 
        }
      }
      cout << endl;
    }
    cout << endl;
  }
}

//prints out the letter frequency in order from most used to least used letters for each of the languages
void letterFrequencyOrder(int (letterCount)[26][9], int (userInputLetterCount)[26] = {})
{
  if (userInputLetterCount) {
    letterFrequencyCounts(letterCount, false);
  }

  int ROW = LIMIT; // 26
  int COL = (userInputLetterCount != NULL) ? 9 : 8; // if userInputLetterCount is NULL set COL to 8, else 9

  char c = ' ';
  cout << endl;
  cout << "Letter frequency order:";
  cout << endl;
  if (userInputLetterCount == NULL) {
    cout << "     Engl  Finn  Fren  Germ  Hung  Ital  Port  Span" << endl;
  } else {
    cout << "     Engl  Finn  Fren  Germ  Hung  Ital  Port  Span  User" << endl;
  }

  for (int col = 0; col < COL; col++) { // 8

    for (int row = 0; row < ROW; row++) { // 26

      int max = letterCount[row][col];

      for (int i = LIMIT - 1; i >= 0; i--) {
        if (letterCount[i][col] >= max) {
          max = letterCount[i][col];
          c = i + 'A';
        }
      }
      letterFreq[row][col] = c;
      letterCount[c - 'A'][col] = -1;
    }
  }

  if (userInputLetterCount) {
    for (int  row= 0; row < ROW; row++) { // 26

      int max = userInputLetterCount[0];

      for (int i = LIMIT - 1; i >= 0; i--) {
        if (userInputLetterCount[i] >= max) {
          max = userInputLetterCount[i];
          c = i + 'A';
        }
      }
      letterFreq[row][COL-1] = c;
      userInputLetterCount[c - 'A'] = -1;
    }
  }

  for (int row = 0; row < 26; row++)
  {
    cout << "   ";
    for (int col = 0; col < COL; col++)
    {
      // See if it is a printable character and if there were any of that character
      cout << setw(6) << letterFreq[row][col];
    }
    cout << endl;
  }
  cout << endl;
}

string userText = "";
//prints out the letter frequency in order from most used to least used letters for each of the languages
//with ninth colomn which sorts most used letters from user's input
void letterFrequencyOrderWithUserText(int (letterCount)[26][9], char (letterFreq)[26][9] = {})
{
  int ROW = LIMIT; // 26
  char letter = ' ';
  cout << "Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac):" << endl;
  cout << endl;

  int userInputCounts[LIMIT] = {};

  while (cin >> userText) {
    char userTextArray[userText.size() + 1];
    strcpy(userTextArray, userText.c_str());

    for (int i = 0; i < userText.size(); i++)
    {
      letter = userText[i];
      if( isalpha(letter))
      {
        letter = toupper(letter); // convert alphabetic input characters to upper case
        userInputCounts[letter-'A']++; // update letter count, using the character as the index
      }
    }
  }

  cout << endl;

  cout << endl;

  for (int i = 0; i < ROW; i++)
  {
    cout << (char)(i + 'A') << ":" << userInputCounts[i] << " ";
  }

  cout << endl;

  letterFrequencyOrder(letterCount, userInputCounts);
}

//displays what language the user has inputed
void displayLanguage(char (letterFreq)[26][9])
{
    const int diffThreshold = 4; // the threshold discussed in piazza @509

    int distancefromOrigin = 1;
    int score[8]; //keeps track of the score for each language

    for (int i = 0; i < 8; i++)
    {
      score[i] = 0; //initialize all the scores to 0
    }

    for (int i = 0; i < 8; i++)
    {
      for (int j =0; j < 26; j++)
      {
        distancefromOrigin = 0; //sets the compare spot to 0

        for (int l = j; l < 26; l++)
        {
          if (distancefromOrigin >= diffThreshold) {
            score[i] += diffThreshold; //adds 4 if the target letter is not found after 4 loops as been ran
          }

          if ((letterFreq[j][8] == letterFreq[l][i]) || (letterFreq[j][8] == letterFreq[l-distancefromOrigin][i])) 
          //checks above and below the taget location for target letter
          {
            score[i] += distancefromOrigin; //adds how mant spots has been checked before finding the target letter to score
            break; //breaks out of loop when the target letter is found
          }
          distancefromOrigin++;
        }
      }
    }

    int minIndex = 0;

    //score in this case works like golf lowest score wins
    for (int i = 0; i < 8;i++) {
        if (score[i] < score[minIndex]) {
          minIndex = i; //compares all the values in score array to find the smallest value
        }
    }

    cout << "Language is " << languages[minIndex] << endl;

}

int main()
{
  cout << "Program 3: Which Language." << endl;
  cout << endl;
  cout << "Select from the following stages of output to display:" << endl;
  cout << "   1. Letter frequency counts " << endl;
  cout << "   2. Letter frequency order" << endl;
  cout << "   3. Get user input and display frequency counts" << endl;
  cout << "   4. Get user input, display frequency counts, and display language" << endl;
  cout << "   0. Exit the program" << endl;
  cout << "Your choice --> " << endl;
  int userChoice = 0;
  cin >> userChoice;
  cout << endl;


  if (userChoice == 1)
  {
    letterFrequencyCounts(letterCount);
  }
  else if(userChoice == 2)
  {
    letterFrequencyCounts(letterCount);
    letterFrequencyOrder(letterCount);
  }
  else if(userChoice == 3)
  {
    letterFrequencyCounts(letterCount);
    letterFrequencyOrder(letterCount);
    letterFrequencyOrderWithUserText(letterCount);
  }
  else if(userChoice == 4)
  {
    letterFrequencyCounts(letterCount);
    letterFrequencyOrder(letterCount);
    letterFrequencyOrderWithUserText(letterCount);
    displayLanguage(letterFreq);
  }
  else
  {
    exit(0);
  }

  return 0;
}
