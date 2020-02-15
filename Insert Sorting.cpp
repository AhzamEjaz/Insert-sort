#include<iostream> 

using namespace std; 

int main () 

{   
	int w;
	
	cout<<"Write the size of input array=";
	cin>>w;
	int myarray[w];
    for(int q=0;q<w;q++)
    {
    	cout<<"Input the "<<q+1<<" th element=";
		cin>>myarray[q];
	}
	
    cout<<"\nInput list is \n";
    for(int i=0;i<w;i++) 
    { 
        cout <<myarray[i]<<"\t"; 
    }   

    for(int k=1; k<w; k++)  
    { 
        int temp = myarray[k]; 
        int j= k-1; 
        while(j>=0 && temp <= myarray[j]) 
        { 
            myarray[j+1] = myarray[j];  
            j = j-1; 
        } 
        myarray[j+1] = temp; 
    } 
    cout<<"\nSorted list is \n";
    for(int i=0;i<w;i++) 
    { 
        cout <<myarray[i]<<"\t"; 
    } 
}

