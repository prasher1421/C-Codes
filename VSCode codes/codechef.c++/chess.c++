#include<iostream>
using namespace std;
int main(){ 
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++){
        int init;
        char result[14];
        cin>>init;
        for (int i=0;i<14;i++){
                cin>>result[i];
                    }
                    int carlson=0,chef=0;
                    for(int i=0;i<14;i++){
                //        if(result[i]=='c'){carlson=carlson+2;
                //        }
                //       if(result[i]=='d'){carlson++;chef++;}
                //        else{chef=chef+2;}
                     switch (result[i])
                        {
                     case 'C':
                             carlson=carlson+2;
                             break;
                     case 'D':carlson++;chef++;
                             break;
                     case 'N':
                         chef=chef+2;
                         break;
                     }
                  }
                
                  if (carlson>chef)
                  {
                      cout<<init*60<<endl;
                  }
                  else if(carlson<chef)
                  {
                      cout<<init*40<<endl;
                  }

                  else 
                  {
                      cout<<init*55<<endl;
                  }
    }
    return 0;
}