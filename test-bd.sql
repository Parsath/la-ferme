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
id_ani number, race_ani varchar2(100), qualite varchar2(100), valeur number, objectif varchar2(100), foyer varchar2(100), âge number
);