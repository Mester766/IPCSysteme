# IPCSysteme
Projet de Systeme

# objectif
il faut utiliser `shmget()` pour creer des memoires partagées

## les fichiers
### lanceur.c
execute les autres processus (1 visualisation et on rempli les autres thread avec 1 random par thread)

### visualisation.c
lis les valeurs de la memoire partagée et affiche la moyenne toute les 10 secondes

### random.c
genere une valeur aleatoire ([0-99]) et la rajoute a la memoire partagée
