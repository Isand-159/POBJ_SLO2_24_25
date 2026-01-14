# POBJ - Cours de programmation objet année 2025 - 2026 - V3_7
## Infos Pratiques sur Git

### Créer un compte sur un serveur GIT 
pour l'ES nous utiliserons <span sytle="color: #FF0000">Github</span>
	
* => Pour gérer votre **propre dépôt** (local -> serveur)
	
	A. => sur votre machine (local) -> créez un **répertoire vide** (directory) où vous voulez 
	
	Conseil : placez sur le disque C: et créez-vous un répertoire de travail
	
	```
	// exemple sous windows 
	c:\mesDossierGit_XXX\monDepot_1 
	```
	B. => sur votre serveur Git, créer un **dépôt** (new repository) 
	
	C. => lier les deux *en ligne de commande* 
		* => ouvrir un **shell** 
		* => placez-vous dans votre répertoire vide créé précédemment :  
	
	```
	C: 
	> cd c:\mesDossierGit_XXX\monDepot_1 
	```

	D. => tapez les ligne de commande suivante : 	
	```
	git init
	git branch -M votreBranche (la "branch" principale est généralement nommée **main** ou **master**)
	git remote add origin https://github.com/nomUserGit/votreNomDepotGit.git
	```
	
	E. => pour mettre à jour votre dépôt distant -> placez-vous dans votre répertoire de travail local 
	```
	// exemple sous windows - répertoire de travail  
	C:
	> c:\mesDossierGit\monDepot 
	```
	
	* => 3 commandes à connaitre 
	
	```
	git add -A 
	git commit -m "votre commentaire" 	
	git push 
	```
* => vous voulez utiliser un dépôt distant (serveur) de quelqu'un (camarade par exemple) 
	
	A. => depuis le serveur -> "forker" le dépôt qui vous intéresse sur votre serveur 
	```
	FORK -> creat fork -> entrer les indications necéessaire -> nom de votre futur dépôt
	```
	
	B.  => sur votre machine (local) -> créez un **répertoire vide** où vous voulez 
	```
	// exemple sous windows 
	C: 
	> mkdir c:\mesDossierGit\monDepot_2 
	```
	
	C. => associez votre dépot (serveur) -> à votre dépôt local (machine) 
	```
	git clone https://github.com/nomUserGit/votreNomDepotGit.git
	``` 

*=> Vous pouvez aussi utiliser des clients git Graphique (Source Tree - Github Desktop - TortoiseGit - etc), 
prenez celui-qui vous convient 
	
## Suivi des exercices 
---

| Exercices \ Initial Etudiant | **[DSY](https://github.com/Z1nghy)** | **[ABR](https://github.com/AlanBadertscher)** | **[JJE](https://github.com/SwissMaverick)** | **[KSA](https://github.com/Isand159)** | **[LFO](https://github.com/VolutedPenny235)** | **[KGR](https://github.com/Kazanaris)** | **[BSH](https://github.com/Hayatache)** | **[LCX](https://github.com/REXI38)** | **[TMK](https://github.com/ThomasMlynek)** | 
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| UML | | | | | | | | | | 
| [Ex1](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex1_UML) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [PRJ UML]() | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| C++ | | | | | | | | | |
| [Ex1](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex1_CPP_ConversionC_Cpp) | OK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex2](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex2_CPP_Fonctions) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex3](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex3_CPP_ClassFigGeo) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |  NOK |
| [Ex4](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex4_CPP_ClassFigGeo2) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex5](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex5_CPP_RevisionChap1_6_Cpp) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex6](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex6_CPP_ClassAffichageLCD) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| C# | | | | | | | | | |
| [Ex1](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex2_ConversionC_CSharp) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex2](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex6_RevisionClass2_CSharp) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [5] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [5] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [5] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [5] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [6] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [7] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [8] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [9] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [10] | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex10 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| JAVA | | | | | | | | | |
| [Ex2](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex2_ConversionC_POO) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK |
| [Ex3](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex3_Fonctions_POO) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| [Ex4](https://github.com/PBYetml/POBJ_SLO2_23_24/tree/main/Exercices/Ex4_ClassFigGeo_POO) | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex4 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex5 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex6 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex7 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex8 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex9 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex10 | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | NOK | 

## **UML**
### ***Exo1***
* donnee : exercice 1 - UML  
* voir chapitre théorique : UML -> Ch1, Ch2, Ch3
* etat d'avancement => voir [#22](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/22)

### ***PRJ UML - Correction***
* donnee : Test - Prj - UML  
* voir chapitre théorique : UML -> Ch1, Ch2, Ch3
* etat d'avancement => voir [#40](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/40)

## **C ++**
### ***Exo2*** 
* donnee : exercice 1 - C++
* voir chapitre théorique : C++ -> Ch2, Ch3
* etat d'avancement => voir [#28](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/28)

### ***Exo3***  
* donnee : exercice 2 - C++
* voir chapitre théorique : C++ -> Ch2, Ch3 
* etat d'avancement => voir [#29](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/29)

### ***Exo4***  
* donnee : exercice 3 - C++ 
* voir chapitre théorique : C++ -> Ch2, Ch3, Ch4, Ch5 
* etat d'avancement => voir [#34](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/34)

### ***Exo5*** 
* donnee : exercice 4 - C++
* voir chapitre théorique : C++ -> Ch2, Ch3, Ch4, Ch5 
* etat d'avancement => voir [#35](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/35)

### ***Exo6*** 
* donnee : exercice 5 - C++
* voir chapitre théorique : C++ -> Ch2, Ch3, Ch4, Ch5, Ch6 
* etat d'avancement => voir [#36](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/36)

### ***Exo7*** 
* donnee : exercice 6 - C++
* voir chapitre théorique : C++ -> Ch2, Ch3, Ch4, Ch5, Ch6 
* etat d'avancement => voir [#36](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/36)

### ***PRJ C++ - Correction***
* donnee : Test - Prj - C++ 
* voir chapitre théorique : C++ -> Ch2, Ch3, Ch4, Ch5, Ch6 
* etat d'avancement => voir []()

## **C#**
### ***Exo8*** 
* donnee : exercice 1 - C#
* voir chapitre théorique : C# -> Ch2 
* etat d'avancement => voir [#42](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/42)

### ***Exo9*** 
* donnee : exercice 1 - C#
* voir chapitre théorique : C# -> Ch2 
* etat d'avancement => voir [#42](https://github.com/PBYetml/POBJ_SLO2_24_25/issues/42)








