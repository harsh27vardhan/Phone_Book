#include<iostream>
#include<string.h>
using namespace std;
class phoneBook{
    string contacts[8];
    string names[8];
    int contactSaved=0;
    public:
        void add(){
            if(contactSaved==8){
                contacts[0]="";
                names[0]="";
                for(int i=1;i<8;i++){
                    contacts[i] = contacts[i-1];
                    names[i] = names[i-1];
                }
                contactSaved--;
            }
            string name;
            cout<<"Enter name : ";
            cin>>name;
            names[contactSaved]=name;
            string contact;
            cout<<"Enter contact number : ";
            cin>>contact;
            contacts[contactSaved]=contact;
            contactSaved++;
        }
        void search(string name){
            for(int i=0;i<8;i++){
                if(names[i]==name){
                    cout<<contacts[i]<<endl;
                    return;
                }
            }
            cout<<"Name is not present in the Phone Book."<<endl;
            return;
        }
        void exit(){
            cout<<"Thank you for using Phone Book"<<endl;
            exit();
        }
};
int main(){
    phoneBook pb;
    cout<<"WELCOME TO PHONEBOOK"<<endl;
    while(1){
        cout<<"Select   1.Add   2.Search    3.Exit"<<endl;
        int inp;
        cin>>inp;
        switch(inp){
            case 1:
                pb.add();
                break;
            case 2:
                // string s;
                // cout<<"Enter the name you want to search in the Phone Book : ";
                // cin>>s;
                // pb.search(s);
                break;
            case 3:
                pb.exit();
                break;
            default:
                cout<<"Please enter a valid Input"<<endl;
        }
    }

    return 0;
}