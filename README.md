# moulileuleu

Moulinette pour stud 42, corrige la piscine de Lyon Juillet 2022... à enrichir ! <br>
Ce programme utilise la norminette, installez la norminette avant d'installer ce programme : <br>
`pip install norminette` <br>
## Utilisation :

Clonez le repo git dans un dossier ou vous souhaitez installer la moulileuleu <br>
`git clone https://github.com/aLeuleu/moulileuleu.git` <br>
Lancez le script d'installation : <br>
`sh install_mouli.sh` <br>
L 'installation est terminée. <br>

Rendez vous ensuite dans votre dossier d'exo, tapez simplement "moulileuleu" comme si vous tapiez "norminette",
et la correction commence.
La moulileuleu devine toute seule dans quel days vous etes.


exemple avec c01 :


![image](https://user-images.githubusercontent.com/97832618/182903716-9a50987e-3529-4272-8dfc-b473d693633c.png)




Si tout est OK dans le terminal, votre code a passé tout les tests unitaires personnels et respecte la norminette 42. <br>
NB : les tests unitaires, ca vaut ce que ca vaut. Vous pouvez tout a fait remplacer les mains de tests par les votres (pensez a changer aussi les "expected results" dans le dossier correspondant, pour etre en accord avec vos mains de tests) ! ..  <br>
Sinon, les différences entre vos sorties et les sorties attendues sont notees dans des fichiers *.diff dans le dossier "diff"

## Adaptation pour les prochains days de C : 
1) rajoutez, si ce nést pas deja fait, le nom des programmes dans le script moulileuleu (cette derniere est installée en generale dans /home/$USER/.local/bin):
 ![image](https://user-images.githubusercontent.com/97832618/182904945-2d9f8606-1fbb-4cca-877f-34229ebfbfd1.png)


2)Revenez dans le dossier ou vous avec cloner le repo, et creez un dossier pour un nouveau days, reprennez la meme logique que les days precedents :
Faites vos mains de tests dans le dossier "tests", ecrivez le resultat attendu de chaque mains de test dans le dossier "expected output"
Si les fichiers sont présent, la moulileuleu les executeras.

## Mise à jour :
Dans le dossier d'installation de la moulileuleu, faites simplement un git pull : <br> 
`git pull` <br>

N'hésitez pas à faire des pull request sur ce depot.


**By: alevra <alevra@student.42lyon.fr>**


Bisous
