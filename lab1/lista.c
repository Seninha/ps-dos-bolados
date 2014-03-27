/*
 * lista.c
 * Last Change:  2014-03-26
 * Maintainer:   Lucas de Sena <contact@seninha.net>
 * License:      This file is placed in public domain.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char dado;
	struct elemento *prox;
} elemento;

void insere (elemento **pinicio, char novo) {
	elemento *p1;

	// Verificar se lista está vazia
	if (pinicio == NULL) {
		p1=(elemento) malloc(sizeof(elemento));
		pinicio=p1;

		pinicio->dado = novo;
		pinicio->prox = NULL;
	}

	p1->dado=novo;



int main (int argc, char **argv) {
	elemento *lista;
	return 0;
}

/* vim: set ai fdm=marker fmr={{{,}}} ft=c: */
