#include<fstream.h>
int main()
{
    ofstream fout("myfile.txt",ios::app);
    fout<<"Nalin Shani\n";
    fout.close();
    ifstream fin("myfile.txt");
    char ch;
    int c=0;
    while(!fin.eof())
    {
        fin>>ch;
        cout<<ch;
        c++;
    }
    cout<<"\nNo. of characters=" <<ch;
    return 0;
}