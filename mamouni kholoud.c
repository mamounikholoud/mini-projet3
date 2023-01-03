#include<stdio.h>
struct enseignants{
char nom[30],prenom[30];
int age,numero;
int cour,td,tp;
};
int main()
{
struct enseignants e[100];
int n,i;
 printf("\nenter number enseignants:");
 scanf("%d",&n);
for(i=0;i<n;i++){
 printf("\nenter information enseignants[%d]:",i);
 printf("\nenter nome:");
 scanf("%s",&e[i].nom);
 printf("\nenter prenome:");
 scanf("%s",&e[i].prenom);
 printf("\nenter age:");
 scanf("%d",&e[i].age);
 printf("\nenter numero:");
 scanf("%d",&e[i].numero);
 printf("\nenter cour:");
 scanf("%d",&e[i].cour);
 printf("\nenter td:");
 scanf("%s",&e[i].td);
 printf("\nenter tp:");
 scanf("%d",&e[i].tp);
}
for(i=0;i<n;i++){
 printf("\ninformation enseignants[%d]:",i);
 printf("\nnome: %s",e[i].nom);
 printf("\nprenome %s:",e[i].prenom);
 printf("\nage %s:",e[i].age);
 printf("\nnumero de serie: %d",e[i].numero);
 printf("\ncour: %d",e[i].cour);
 printf("\ntd: %d",e[i].td);
 printf("\ntp: %d",e[i].tp);
}
return 0;
}
//ecrire struct et que dans algoritme enregistrment
//et on rontre les variables (nom et prenom que est dans chancaractire
//et cour et age et td et tp et numero quui est dans enter et appel struct
//et nous utilisons tablou et on rontre les variable n,i et ecrire (enter number enseignants)
//et lire number et nous utilisons for et que est dans algorithme puor
//et nous mettons i=0 et alor i=i+1 il continue augmenter de 1 alors ecrire (enter information enseignants)
//et nous utilisons for et ecrire nom et prenom... ala fine ecrire return 0

