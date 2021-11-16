#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float prix;
int nojour;
char nome[10];
char type[10];
char car[20];

info()
{
    printf("\n Entrez le nombre de jours \t");
    scanf("%d", &nojour);
    printf (" Nome : \t");
    scanf("%s",nome);

    prix*=nojour;
    printf("\n#################################||||||||||##################################n");
    printf("\n\t\t___________________________La facteur_________________________________________\n");
    printf("\n\t\t\t\t Monsieur %s \n\t\t\t\t Reserve une voiture %s d'un color [%s]\n\t\t\t\t nomber des jours: %d jours \n\t\t\t\t Prix Total:%2.fDh",nome,car,type,nojour,prix);
    printf("\n\t\t_______________________________________________________________________________\n");
}
int main()
{
  int u,d,r,l ,nod;

    printf("################################################ \n");
     printf("#    CAR Mohamed   #  MODEL  # LOYER PAR JOUR # \n");
     printf("##################################################\n");
     printf("\t# Rolls-Royce   #   103  #      250 dh     # \n");
     printf("\t#     SUZUKI    #  102   #      250 dh     # \n");
     printf("\t#     Bugatti   #  104   #      250 dh     # \n");
     printf("\t#     Bentley.  #  105   #      250 dh     # \n");
     printf("\t#   Maserati    #   106  #      250 dh     # \n");
     printf("\t#  Porsche      #   107  #      250 dh     # \n");
     printf("\t#    MERCEDES   #  108   #      250 dh     # \n");
     printf("\t#    Lamborghini#  109   #      250 dh     # \n");
     printf("\t#     ISUZU     #  110   #      250 dh     # \n");
     printf("################################################ \n");







    printf("\n\t\t_________ DEMANDE DE LOCATION DE VOITURE_________ \n");
    printf("\n --------------------------------------------------------------\n");
    printf("\n\t\t Appuyez sur 1 pour les vhicules economiques\n");
    printf("\n\t\t Appuyez sur 2 pour les gros vehicules \n");
    printf("\n\t\t Appuyez sur 3 pour un vehicule de luxe\n");
    printf("\n----------------------------------------------------------------\n");
    printf("\n\t\t Appuyez sur n'importe quelle option :\t");
    scanf("%d", &u);
    switch(u)
    {
    case 1 :
        printf("\t\tVous avez selectionne Vehicules economiques \n");
        printf("\n\t\t ===> Les vehicules economiques disponibles sont <==== \n");
        printf("\n\t\t Dacia Logan || Suzuki Celerio || Dacia Duster\n");
        printf("\n\t\t ---------------------------------------------- \n");
        printf("\n\t\t Que voulez-vous reserver :\n 1=> Dacia Logan \n 2=> Suzuki Celerio \n 3=> Dacia Duster \n appuez :");
        scanf("%d",&d);
        switch(d)
        {
        case 1:
            printf("\n\t\t Vous avez selectionne  Dacia Logan   || 20dh/24h\n");
            prix=20 ;
            printf("\n\t\t enter color :\t");
            scanf("%s",type);
            strcpy(car,"Dacia Logan");


            info();

            break;
        case 2:
            printf("\n\t\t Vous avez selectionnes uzuki Celerio || 200dh/24h\n");
            prix =200;
            printf("\n\t\t enter color :\t");
            scanf("%s",type);
            strcpy(car,"uzuki Celerio");
            info();
            break;
        case 3:
            printf("\n\t\t Vous avez selectionnes Dacia Duster  || 99dh/24h\n");
            prix =99;
            printf("\n\t\t enter color :\t");
            scanf("%s",type);
            strcpy(car,"Dacia Duster ");
            info();
            break ;

        }
        break;

        case 2 :
        printf("\t\tVous avez selectionne les gros vehicules  \n");
        printf("\n\t\t ===> les gros vehicules disponibles sont <==== \n");
        printf("\n\t\t Ford || Toyta || Nissan \n");
        printf("\n\t\t ---------------------------------------------- \n");
        printf("\n\t\t Que voulez-vous reserver :\n 1=>  Ford \n 2=>  Toyta \n 3=> Nissan \n appuez :");
        scanf("%d",&r);

        switch(r)
        {
        case 1 :
            printf("\n\t\t Vous avez selectionne  Ford   || 499 dh/24h\n");
            prix =499;
            printf("\n\t\t enter color :\t");
            scanf("%s",type);
            strcpy(car,"Ford ");
            info();
            break;
        case 2:
            printf("\n\t\t Vous avez selectionnes Toyta  || 399 dh/24h\n");
            prix =399;
            printf("\n\t\t enter color :\t");
            scanf("%s",type);
            strcpy(car,"Toyta ");
            info();
            break;
        case 3:
            printf("\n\t\t Vous avez selectionnes Nissan || 199 dh/24h\n");
            prix =199;
            printf("\n\t\t enter color :\t");
            scanf("%s",type);
            strcpy(car,"Nissan");
            info();
            break ;

        }
         break;

        case 3 :

        printf("\n\t\tVous avez selectionne les vehicules de luxe\n");
        printf("\n\t\t ===> les gros vehicules disponibles sont <==== \n");
        printf("\n\t\t Rolls-Royce || Audi || Bentley || Porsche \n");
        printf("\n\t\t ---------------------------------------------- \n");
        printf("\n\t\t Que voulez-vous reserver :\n 1=>\tRolls-Royce \n 2=>\tAudi \n 3=>\tBentley \n 4=>\tPorsche \n appuez :");
        scanf("%d",&l);

            switch(l)
            {
            case 1:

                printf("\n\t\t Vous avez selectionne  Rolls-Royce   || 1099 dh/24h\n");
                prix =1099;
                printf("\n\t\t enter color :\t");
                scanf("%s",type);
                strcpy(car,"Rolls-Royce");
                info();
                break;
            case 2:

                printf("\n\t\t Vous avez selectionne  Audi  || 1099 dh/24h\n");
                prix =1099;
                printf("\n\t\t enter color :\t");
                scanf("%s",type);
                strcpy(car,"Audi");
                info();
                break;
            case 3 :

                printf("\n\t\t Vous avez selectionne Bentley || 999 dh/24h\n");
                prix =999;
                printf("\n\t\t enter color :\t");
                scanf("%s",type);
                strcpy(car,"Bentley");
                info();
                break;
            case 4 :
                printf("\n\t\t Vous avez selectionne Porsche|| 999 dh/24h\n");
                prix =999;
                printf("\n\t\t enter color :\t");
                scanf("%s",type);
                strcpy(car,"Porsche");
                info();
                break;


            }


    }




    return 0;
}
