#ifndef MOD_LINEAER
#define MOD_LINEAER

#ifdef SERVIDOR_LINEAR
#define EXT_MOD_LINEAR
#else 
#define EXT_MOD_LINEAR extern
#endif

EXT_MOD_LINEAR void PercursoLinear(lista1 *pini);

#endif
