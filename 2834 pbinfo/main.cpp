        #include <fstream>

        using namespace std;

        ifstream fin ("sir13.in");
        ofstream fout ("sir13.out");

        int main()
        {
            int n, par = 2, imp = 999999999;
            bool ok = false;
            while(fin >> n)
            {
                if(n%2 == 0)
                {
                    if(n < par)
                    {
                        fout << "NU";
                        ok = true;
                        break;
                    }
                    par = n;
                }
                else
                {
                    if(n > imp)
                    {
                        fout << "NU";
                        ok = true;
                        break;
                    }
                    imp = n;
                }
            }
            if(!ok)
                fout << "DA";
            return 0;
        }
