#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <exception>
#include <algorithm>

int main()
{
    /* test container
        map infos
    std::map<std::string, int> note;

    note["ALice"] = 14;
    note["Paul"] = 12;
    note["Liza"] = 15;
    note["Leo"] = 16;
    note["Leo"] = 12;

    std::map<std::string ,int>::iterator it;

        std::cout << "Les infos des etudiant sont: " << std::endl;
    for(it = note.begin() ; it != note.end() ;it++)
    {
            std::cout << "  " << it->first << " : " << it->second << std::endl;
    }

        //set info
        std::set<std::string> M;

        M.insert("Maths");
        M.insert("Info");
        M.insert("Physique");
        M.insert("Info");


        std::set<std::string>::iterator i;
        std::cout << "Les Metiers sont: " << std::endl;
        for(i = M.begin() ;i != M.end();i++)
        {
            std::cout << "  " << *i << " " ;
        }
        std::cout << std::endl;


        //vector info

        double moyenne = 0;
        double somme = 0;
        std::vector<double> N;

        N.push_back(12);
        N.push_back(14.5);
        N.push_back(9);
        N.push_back(12);
        N.push_back(10);


        // std::vector<int>::iterator D;
        int x;
        for(x = 0 ; x < (int)N.size();x++)
        {
            somme += N[x];
        }
        std::cout << "La moyenne de ses notes: " <<  somme / N.size() << std::endl; 


        // stack info

        std::stack<std::string> S;

        S.push("Note Ajouter Avec succes!");
        S.push("Etudiant est absent");
        

        std::cout << "Les Messages d'alertes sont :  " << std::endl;
        while(!S.empty())
        {
            std::cout << S.top() <<std::endl;
            S.pop(); 
        }
    */


    /*
    
    
        std::vector<int> S;

        S.push_back(1);
        S.push_back(-1);
        S.push_back(4);
        S.push_back(2);
        S.push_back(123);
        S.push_back(0);

        for(int i = 0; (int) i < S.size();i++)
        {
            std::cout << "Element[" << i <<"]=  " << S[i] << std::endl;
        }

        //Decroisant 
            //  std::sort(S.begin(),S.end(),std::greater<int>());
        std::sort(S.begin(),S.end());

        std::cout << "\nAfter Sort: " << std::endl;
        for(int i = 0; i < (int)S.size();i++)
        {
            std::cout << "Element[" << i <<"]=  " << S[i] << std::endl;
        }
    */



   // find() and count()

      /*std::vector<int> S;

       S.push_back(3);
       S.push_back(7);
       S.push_back(3);
       S.push_back(1);
       S.push_back(3);   
       S.push_back(9);
       S.push_back(7);

       std::vector<int>::iterator it;
       it = std::find(S.begin(),S.end(),99);

        if(it != S.end())
            std::cout << "Trouve: " << *it << std::endl;
        else
            std::cout << "No Trouve pas : " << std::endl;

        int nb = std::count(S.begin(),S.end(),7);

        std::cout << "le nombre 7 repeter " << nb << " fois." << std::endl;*/ 

    // exercice final:

    std::vector<int> V;

    V.push_back(42);
    V.push_back(7);
    V.push_back(15);
    V.push_back(3);
    V.push_back(99);
    V.push_back(23);

    std::vector<int>::iterator itmax = std::max_element(V.begin(),V.end());
    std::cout << "Le max est : " << *itmax <<  std::endl;
    std::vector<int>::iterator itmin = std::min_element(V.begin(),V.end());
    std::cout << "Le min est : " << *itmin <<  std::endl;


    std::sort(V.begin(),V.end());

    std::reverse(V.begin(),V.end());

    for(int i = 0 ; i < (int)V.size();i++)
    {
        std::cout << "index[" << i << "]= " << V[i];
        std::cout << std::endl;
    }

    
}
