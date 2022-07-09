# moulileuleu

Moulinette (+norminette )pour les studs 42, avant de perdre des points de correction bêtement . à enrichir !

Fonctionne de base pour tester le c00 (sauf le dernier exo, il manque un fichier de reference ex08_result, je vous en prie, rajoutez le ! faite des pull request).

## Utilisation :
COPIER/COLLER DANS LE DOSSIER RACINE LE DOSSIER D'EXERCICES QUE VOUS VOULEZ TESTER(par défaut, test le c00)
par exemple, vous voulez tester le c01 : copier tout ce qu'il y a dans test_c01 et coller le dans le dossier racine de moulileuleu (remplacer les fichiers)

puis, SE METTRE DANS LE DOSSIER PARENT DE VOTRE DOSSIER D'EXERCICES

et faire :

*git clone https://github.com/aLeuleu/moulileuleu.git moulileuleu/*

*cp -r VOTRE_DOSSIER_OU_IL_Y_A_TOUT_LES_EXOS/* moulileuleu/*

*cd moulileuleu/*

*bash moulileuleu.sh*


et la correction commence.
exemple avec c01 :

<img width="555" alt="Screen Shot 2022-07-07 at 9 01 58 PM" src="https://user-images.githubusercontent.com/97832618/177855476-4d014f01-4fd3-4fd5-ba74-f48aac141e05.png">




Si tout est OK dans le terminal, votre code a passé tout les tests unitaires personnels et respecte la norminette 42.
NB : les tests unitaires, ca vaut ce que ca vaut. A vous de faire des trucs de fou ! .. 
Sinon, les diffrences entre vos sorties et les sorties sont notees dans des fichiers *.diff

Vous pouvez editer les tests unitaires que vous voulez dans les fichiers "test_exXX.c"

## Adaptation pour les prochains days de C : 
- adapter le script shell moulileuleu.sh avec les noms de fonctions
- adapter les programmes tests test_cXX.c par exercice (attention a la déclaration de la fonction testee en haut du programme test)
- adapter les fichiers de sortie exXX_result qui servent de référence

N'hésitez pas à faire des pull request sur ce depot.

Mon login : alevra

**By: alevra <alevra@student.42lyon.fr>**


Bisous
