CREATE TABLE mat_e
(
    id_mat number , nom varchar2(10),quantite number,date_ajout date
);

CREATE TABLE mat_a
(
    id_mat number , nom varchar2(10),etat number,date_ajout date
);

create table abris
(
    id_abris number, etat varchar2(100), type_abri varchar2(100)
);

create table animaux
(
id_ani number, surnom varchar2(100), race_ani varchar2(100), qualite varchar2(100), valeur number, objectif varchar2(100), foyer varchar2(100), âge number
);
 
CREATE TABLE NOURRITURE
(	
    ID NUMBER NOT NULL ENABLE, ALIMENT VARCHAR2(20 BYTE), ANIMAL VARCHAR2(20 BYTE), TYPE VARCHAR2(20 BYTE), QT NUMBER
);
  
CREATE TABLE NOURRITURE_V
 (	
     ID NUMBER NOT NULL ENABLE, ALIMENT VARCHAR2(20 BYTE), PLANTE VARCHAR2(20 BYTE), TYPE VARCHAR2(20 BYTE), QT NUMBER
 );
 
 CREATE TABLE "CONGES"
   (	"DATE_DEPART" VARCHAR2(100 BYTE), 
	"DATE_RETOUR" VARCHAR2(100 BYTE), 
	"ID_OUVRIER" NUMBER, 
	"ID_ADMIN" NUMBER, 
	"ID_CONGES" NUMBER, 
	"SOLDE_CONGES" NUMBER
   );

  CREATE TABLE "OUVRIER" 
   (	"ID_OUVRIER" NUMBER, 
	"NOM" VARCHAR2(100 BYTE), 
	"PRENOM" VARCHAR2(100 BYTE), 
	"MOT_DE_PASSE" VARCHAR2(100 BYTE), 
	"CONTACT" NUMBER, 
	"VILLE" VARCHAR2(100 BYTE), 
	"RUE" NUMBER, 
	"CODE_POSTAL" NUMBER
   );

  CREATE TABLE "ADMIN" 
   (	"ID_ADMIN" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"PRENOM" VARCHAR2(20 BYTE), 
	"MOT_DE_PASSE" VARCHAR2(100 BYTE), 
	"CONTACT" NUMBER, 
	"RUE" NUMBER, 
	"CODE_POSTAL" NUMBER, 
	"VILLE" VARCHAR2(100 BYTE),
);
