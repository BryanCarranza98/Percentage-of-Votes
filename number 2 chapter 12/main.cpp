// Bryan carranza

/*This program will let the user input how many candidates are in the competion and input the number each candidate recieved.
 the program will let the user the know the percentage of each user and tell the user which candidate is the winner. */



#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()

{
    int i,n = 0, index = 0;
    string *p;
    float vote[100];
    double total = 0.0;
    float *percent;
    

    cout << "How many Candidates are in the race? "; // entering how many candidates are in the competition.
    cin >> i;
    
    p= new string[i];
    percent = new float [i];
    
    
    for (n=0; n<i; n++)
    {
        cout << "Enter the Name of Candidate:  " << n + 1 << " : "; // the name of each candidate
        cin >> p[n];
        cout << "Enter the Votes for the candidate: " ; // the votes each candidate recieved.
        cin >> vote[n];
        
        
        total = total + vote[n] ; // equation for the total number of votes
        
    }
    
    
    cout << "                            "<< endl;
    cout << "The total number of votes are : " << total <<  endl;
    cout << "                            "<< endl;
    
    
    for ( n=0; n<i; n++)
    {
        percent[n]= (vote[n] / total)*100; // calculating the percentage of the votes
    }
    
    
    for (n=0; n<i; n++)
    {
        
        cout << p[n] << " has " << percent[n] << setprecision(2)<< "% of the Votes "  <<endl; //evaluating the percentage of each candidate
        
    }
    
    
    
    
    for ( n=1; n<i; n++) // calling the name of the winner candidate, the highest index
    {
        
        
        if (vote[0] <vote[n])
            index = n;
        
        
    }
    
    cout << "Winner of the election is : " << p[index] << "!!" << endl;
    

    
    
    system("pause");
    return 0;
}
