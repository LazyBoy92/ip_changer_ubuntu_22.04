#include<bits/stdc++.h>
#include <sys/types.h> 
#include <sys/socket.h>

using namespace std;
int main(int argc,char *argv[]){

    if(argc >= 4){
        cout << "CARA MENGGUNAKAN\n ./uzuy {jaringan kamu misal : enp0} {ip address}"<<endl;
    }else{

            char x[10001];

            string s = " nmcli device modify " +string(argv[1])+" ipv4.address "+string(argv[2]);
            for (int i = 0; i < s.size(); i++)
            {
                x[i] = s[i];
            }

            system(x);
        
    
    }

}

