 /**********************
*  Indirection alphabet *
*   George Koskeridis   *
 **********************/

#include <stdio.h>


void single_indir(void *x, int arr_sz);
void double_indir(void **x, int arr_sz);
void triple_indir(void ***x, int arr_sz);
void quadruple_indir(void ****x, int arr_sz);
void quintuple_indir(void *****x, int arr_sz);
void sextuple_indir(void ******x, int arr_sz);
void septuple_indir(void *******x, int arr_sz);
void octuple_indir(void ********x, int arr_sz);
void nonuple_indir(void *********x, int arr_sz);
void decuple_indir(void **********x, int arr_sz);
void undecuple_indir(void ***********x, int arr_sz);
void duodecuple_indir(void ************x, int arr_sz);
void tredecuple_indir(void *************x, int arr_sz);
void quattuordecuple_indir(void **************x, int arr_sz);
void quindecuple_indir(void ***************x, int arr_sz);
void sexdecuple_indir(void ****************x, int arr_sz);
void septendecuple_indir(void *****************x, int arr_sz);
void octodecuple_indir(void ******************x, int arr_sz);
void novemdecuple_indir(void *******************x, int arr_sz);
void vigintuple_indir(void ********************x, int arr_sz);
void unvigintuple_indir(void *********************x, int arr_sz);
void duovigintuple_indir(void **********************x, int arr_sz);
void trevigintuple_indir(void ***********************x, int arr_sz);
void quattuorvigintuple_indir(void ************************x, int arr_sz);
void quinvigintuple_indir(void *************************x, int arr_sz);
void sexvigintuple_indir(void **************************x, int arr_sz);


int main(void)
{
#define ARR_SIZE 10
	int arr[ARR_SIZE] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int *a = arr;
	int **b = &a;
	int ***c = &b;
	int ****d = &c;
	int *****e = &d;
	int ******f = &e;
	int *******g = &f;
	int ********h = &g;
	int *********i = &h;
	int **********j = &i;
	int ***********k = &j;
	int ************l = &k;
	int *************m = &l;
	int **************n = &m;
	int ***************o = &n;
	int ****************p = &o;
	int *****************q = &p;
	int ******************r = &q;
	int *******************s = &r;
	int ********************t = &s;
	int *********************u = &t;
	int **********************v = &u;
	int ***********************w = &v;
	int ************************x = &w;
	int *************************y = &x;
	int **************************z = &y;

	printf("one level indirection\n");
	single_indir((void*)&arr, ARR_SIZE);
	single_indir((void*)a, ARR_SIZE);
	printf("\ntwo levels indirection\n");
	double_indir((void**)&a, ARR_SIZE);
	double_indir((void**)b, ARR_SIZE);
	printf("\nthree levels indirection\n");
	triple_indir((void***)&b, ARR_SIZE);
	triple_indir((void***)c, ARR_SIZE);
	printf("\nfour levels indirection\n");
	quadruple_indir((void****)&c, ARR_SIZE);
	quadruple_indir((void****)d, ARR_SIZE);
	printf("\nfive levels indirection\n");
	quintuple_indir((void*****)&d, ARR_SIZE);
	quintuple_indir((void*****)e, ARR_SIZE);
	printf("\nsix levels indirection\n");
	sextuple_indir((void******)&e, ARR_SIZE);
	sextuple_indir((void******)f, ARR_SIZE);
	printf("\nseven levels indirection\n");
	septuple_indir((void*******)&f, ARR_SIZE);
	septuple_indir((void*******)g, ARR_SIZE);
	printf("\neight levels indirection\n");
	octuple_indir((void********)&g, ARR_SIZE);
	octuple_indir((void********)h, ARR_SIZE);
	printf("\nnine levels indirection\n");
	nonuple_indir((void*********)&h, ARR_SIZE);
	nonuple_indir((void*********)i, ARR_SIZE);
	printf("\nten levels indirection\n");
	decuple_indir((void**********)&i, ARR_SIZE);
	decuple_indir((void**********)j, ARR_SIZE);
	printf("\neleven levels indirection\n");
	undecuple_indir((void***********)&j, ARR_SIZE);
	undecuple_indir((void***********)k, ARR_SIZE);
	printf("\ntwelve levels indirection\n");
	duodecuple_indir((void************)&k, ARR_SIZE);
	duodecuple_indir((void************)l, ARR_SIZE);
	printf("\nthirteen levels indirection\n");
	tredecuple_indir((void*************)&l, ARR_SIZE);
	tredecuple_indir((void*************)m, ARR_SIZE);
	printf("\nfourteen levels indirection\n");
	quattuordecuple_indir((void**************)&m, ARR_SIZE);
	quattuordecuple_indir((void**************)n, ARR_SIZE);
	printf("\nfifteen levels indirection\n");
	quindecuple_indir((void***************)&n, ARR_SIZE);
	quindecuple_indir((void***************)o, ARR_SIZE);
	printf("\nsixteen levels indirection\n");
	sexdecuple_indir((void****************)&o, ARR_SIZE);
	sexdecuple_indir((void****************)p, ARR_SIZE);
	printf("\nseventeen levels indirection\n");
	septendecuple_indir((void*****************)&p, ARR_SIZE);
	septendecuple_indir((void*****************)q, ARR_SIZE);
	printf("\neighteen levels indirection\n");
	octodecuple_indir((void******************)&q, ARR_SIZE);
	octodecuple_indir((void******************)r, ARR_SIZE);
	printf("\nnineteen levels indirection\n");
	novemdecuple_indir((void*******************)&r, ARR_SIZE);
	novemdecuple_indir((void*******************)s, ARR_SIZE);
	printf("\ntwenty levels indirection\n");
	vigintuple_indir((void********************)&s, ARR_SIZE);
	vigintuple_indir((void********************)t, ARR_SIZE);
	printf("\ntwentyone levels indirection\n");
	unvigintuple_indir((void*********************)&t, ARR_SIZE);
	unvigintuple_indir((void*********************)u, ARR_SIZE);
	printf("\ntwentytwo levels indirection\n");
	duovigintuple_indir((void**********************)&u, ARR_SIZE);
	duovigintuple_indir((void**********************)v, ARR_SIZE);
	printf("\ntwentythree levels indirection\n");
	trevigintuple_indir((void***********************)&v, ARR_SIZE);
	trevigintuple_indir((void***********************)w, ARR_SIZE);
	printf("\ntwentyfour levels indirection\n");
	quattuorvigintuple_indir((void************************)&w, ARR_SIZE);
	quattuorvigintuple_indir((void************************)x, ARR_SIZE);
	printf("\ntwentyfive levels indirection\n");
	quinvigintuple_indir((void*************************)&x, ARR_SIZE);
	quinvigintuple_indir((void*************************)y, ARR_SIZE);
	printf("\ntwentysix levels indirection\n");
	sexvigintuple_indir((void**************************)&y, ARR_SIZE);
	sexvigintuple_indir((void**************************)z, ARR_SIZE);

	return 0;
}

void single_indir(void *x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *((int*)x + i));
	}
	putchar('\n');
}

void double_indir(void **x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *((int*)*x + i));
	}
	putchar('\n');
}

void triple_indir(void ***x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(int**)*x + i));
	}
	putchar('\n');
}

void quadruple_indir(void ****x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(int***)*x) + i));
	}
	putchar('\n');
}

void quintuple_indir(void *****x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(int****)*x)) + i));
	}
	putchar('\n');
}

void sextuple_indir(void ******x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(int*****)*x))) + i));
	}
	putchar('\n');
}

void septuple_indir(void *******x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(int******)*x)))) + i));
	}
	putchar('\n');
}

void octuple_indir(void ********x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(int*******)*x))))) + i));
	}
	putchar('\n');
}

void nonuple_indir(void *********x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(int********)*x)))))) + i));
	}
	putchar('\n');
}

void decuple_indir(void **********x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(int*********)*x))))))) + i));
	}
	putchar('\n');
}

void undecuple_indir(void ***********x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(int**********)*x)))))))) + i));
	}
	putchar('\n');
}

void duodecuple_indir(void ************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(int***********)*x))))))))) + i));
	}
	putchar('\n');
}

void tredecuple_indir(void *************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(*(int************)*x)))))))))) + i));
	}
	putchar('\n');
}

void quattuordecuple_indir(void **************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(*(*(int*************)*x))))))))))) + i));
	}
	putchar('\n');
}

void quindecuple_indir(void ***************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(*(*(*(int**************)*x)))))))))))) + i));
	}
	putchar('\n');
}

void sexdecuple_indir(void ****************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(*(*(*(*(int***************)*x))))))))))))) + i));
	}
	putchar('\n');
}

void septendecuple_indir(void *****************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(int****************)*x)))))))))))))) + i));
	}
	putchar('\n');
}

void octodecuple_indir(void ******************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(int*****************)*x))))))))))))))) + i));
	}
	putchar('\n');
}

void novemdecuple_indir(void *******************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(int******************)*x)))))))))))))))) + i));
	}
	putchar('\n');
}

void vigintuple_indir(void ********************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(int*******************)*x))))))))))))))))) + i));
	}
	putchar('\n');
}

void unvigintuple_indir(void *********************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(int********************)*x)))))))))))))))))) + i));
	}
	putchar('\n');
}

void duovigintuple_indir(void **********************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(int*********************)*x))))))))))))))))))) + i));
	}
	putchar('\n');
}

void trevigintuple_indir(void ***********************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(int**********************)*x)))))))))))))))))))) + i));
	}
	putchar('\n');
}

void quattuorvigintuple_indir(void ************************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(int***********************)*x))))))))))))))))))))) + i));
	}
	putchar('\n');
}

void quinvigintuple_indir(void *************************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(int************************)*x)))))))))))))))))))))) + i));
	}
	putchar('\n');
}

void sexvigintuple_indir(void **************************x, int arr_sz)
{
	int i;

	for (i = 0; (i < arr_sz) && x; i++) {
		printf("%d ", *(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(*(int*************************)*x))))))))))))))))))))))) + i));
	}
	putchar('\n');
}
