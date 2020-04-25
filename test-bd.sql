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
