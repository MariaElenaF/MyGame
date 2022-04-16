#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <cmath>
using namespace std;
int senzor[4],i,j,harta[13][13],punctaj=0,OK=1;
char actiune, directie;

void afisare_matrice(){
int k,l;

for(k=0;k<12;k++){
        for(l=0;l<12;l++)
            cout<<harta[k][l]<<" ";
        cout<<endl;
    }

}

void ia_o_actiune();
void consecinte_actiune(){
  while(OK){
    if((actiune=='w')||(actiune=='W')){
        harta[i][j]=0;
        i--;
        if(i>=0 && i<=11){


                if (harta[i][j]==1)
                    senzor[1]=1;

                if(harta[i][j]==2){
                    senzor[2]=1;
                    punctaj=punctaj+100;
                    harta[i][j]==0;

                }

                if(harta[i][j]==3){
                    senzor[3]=1;
                    punctaj=punctaj-1000;
                    harta[i][j]==0;

                }

                harta[i][j]=5;

        }
        else{
                i++;
                harta[i][j]=5;
            cout<<"Nu aveti voie sa iesiti din harta (iesiti din matrice)"<<endl;

        }

    }

    if((actiune=='d')||(actiune=='D')){
        harta[i][j]=0;
        j++;
        if(j>=0 && j<=11){



                if (harta[i][j]==1)
                    senzor[1]=1;

                if(harta[i][j]==2){
                    senzor[2]=1;
                    punctaj=punctaj+100;
                    harta[i][j]==0;

                }

                if(harta[i][j]==3){
                    senzor[3]=1;
                    punctaj=punctaj-1000;
                    harta[i][j]==0;

                }

                harta[i][j]=5;

        }
        else{
                j--;
                harta[i][j]=5;
            cout<<"Nu aveti voie sa iesiti din harta (iesiti din matrice)"<<endl;

        }

    }

    if((actiune=='s')||(actiune=='S')){
        harta[i][j]=0;
        i++;
        if(i>=0 && i<=11){



                if (harta[i][j]==1)
                    senzor[1]=1;

                if(harta[i][j]==2){
                    senzor[2]=1;
                    punctaj=punctaj+100;
                    harta[i][j]==0;

                }

                if(harta[i][j]==3){
                    senzor[3]=1;
                    punctaj=punctaj-1000;
                    harta[i][j]==0;

                }

                harta[i][j]=5;

        }
        else{
                i--;
                harta[i][j]=5;
            cout<<"Nu aveti voie sa iesiti din harta (iesiti din matrice)"<<endl;

        }

    }

    if((actiune=='a')||(actiune=='A')){
        harta[i][j]=0;
        j--;
        if(j>=0 && j<=11){



                if (harta[i][j]==1)
                    senzor[1]=1;

                if(harta[i][j]==2){
                    senzor[2]=1;
                    punctaj=punctaj+100;
                    harta[i][j]==0;

                }

                if(harta[i][j]==3){
                    senzor[3]=1;
                    punctaj=punctaj-1000;
                    harta[i][j]==0;

                }

                harta[i][j]=5;

        }
        else{
                j++;
        harta[i][j]=5;
            cout<<"Nu aveti voie sa iesiti din harta (iesiti din matrice)"<<endl;

        }

    }
    if((actiune=='t')||(actiune=='T')){
        punctaj=punctaj-25;
        cout<<"In ce directie doriti sa trageti? ";
        cin>>directie;

        if(directie=='w'){
            if(harta[i-1][j]==3){
                punctaj=punctaj+50;
                cout<<"Felicitari, ati omorat un monstru!"<<endl;

                harta[i-1][j]=0;

            }
            else
                cout<<"Monstrul nu se afla aici..."<<endl;


        }
        if(directie=='d'){
            if(harta[i][j+1]==3){
                punctaj=punctaj+50;
                cout<<"Felicitari, ati omorat un monstru!"<<endl;

                harta[i][j+1]=0;

            }
            else
                cout<<"Monstrul nu se afla aici..."<<endl;


        }
        if(directie=='s'){
            if(harta[i+1][j]==3){
                punctaj=punctaj+50;
                cout<<"Felicitari, ati omorat un monstru!"<<endl;

                harta[i+1][j]=0;

            }
            else
                cout<<"Monstrul nu se afla aici..."<<endl;


        }
        if(directie=='a'){
            if(harta[i][j-1]==3){
                punctaj=punctaj+50;
                cout<<"Felicitari, ati omorat un monstru!"<<endl;

                harta[i][j-1]=0;

            }
            else
                cout<<"Monstrul nu se afla aici..."<<endl;


        }



    }
    if((actiune=='o')||(actiune=='O'))
        OK=0;

    afisare_matrice();
    cout<<endl;
    cout<<"Punctajul este: "<<punctaj;
    cout<<endl<<endl;
    ia_o_actiune();
    }

}

void ia_o_actiune(){
    if (senzor[1] == 1)
			cout << "Ati dat intr-un PERETE." << endl;
    if (senzor[2] == 1)
			cout << "Ati gasit o COMOARA!" << endl;
    if (senzor[3] == 1)
			cout << "Ati dat de un MONSTRU" << endl;

    senzor[1] = senzor[2] = senzor[3] = 0;




    if(OK){
            cout<<"Ce doriti sa faceti? ";
            cin>>actiune;
            cout<<endl;
            punctaj--;
            consecinte_actiune();
            }
        else{

    cout<<endl<<endl<<"Punctajul acumulat este: "<<punctaj+1<<endl<<endl;
    cout<<"-------------GAME OVER--------------";
        }
}

int main()
{
    //Mai intai fac harta goala

    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
            harta[i][j]=0;

    //Adaug zdurile

    for (i = 1;i <= 9;i++)
		harta[i][1] = 1;

	for (i = 1;i <= 4;i++)
		harta[i][4] = 1;

    for (j = 1;j <= 4;j++)
		harta[4][j] = 1;

	harta[3][6] = 1;
	harta[3][7] = 1;

	for (i = 2;i <= 6;i++)
		harta[i][9] = 1;

	for (i = 3;i <= 6;i++)
		harta[10][i] = 1;

	for (i = 7;i <= 10;i++)
		harta[8][i] = 1;

    //Adaug comorile

    harta[2][2] = 2;
	harta[1][10] = 2;
	harta[10][8] = 2;

    //Adaug monstrii

    harta[11][5] = 3;
	harta[1][7] = 3;
	harta[5][11] = 3;

	i=11;
	j=0;

	harta[i][j]=5;

	afisare_matrice();



	cout<<"Exploratorul incepe de la linia: 11, coloana 0"<<endl<<"Actiunile pe care le poate lua sunt: ";
	cout<<endl<<"W = merge in fata"<<endl<<"S = merge in spate"<<endl<<"D = merge in dreapta";
	cout<<endl<<"A = merge stanga"<<endl<<"T = trage in camera urmatoare"<<endl<<"O = Game Over"<<endl<<endl<<endl;

	ia_o_actiune();


return 0;
}
