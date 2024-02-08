/* This file was automatically generated by CasADi 3.6.4.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) myfunction_ ## ID
#endif

#include <math.h>
#include <Eigen/Dense>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[11] = {3, 2, 0, 3, 6, 0, 1, 2, 0, 1, 2};
static const casadi_int casadi_s1[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s2[279] = {3, 69, 0, 3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45, 48, 51, 54, 57, 60, 63, 66, 69, 72, 75, 78, 81, 84, 87, 90, 93, 96, 99, 102, 105, 108, 111, 114, 117, 120, 123, 126, 129, 132, 135, 138, 141, 144, 147, 150, 153, 156, 159, 162, 165, 168, 171, 174, 177, 180, 183, 186, 189, 192, 195, 198, 201, 204, 207, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2};

/* f:(i0[3x2],i1,i2[3x69])->(o0,o1[3x2],o2[3x69]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a2;
  a0=arg[1]? arg[1][0] : 0;
  a1=sqrt(a0);
  a2=1.;
  a1=(a1-a2);
  if (res[0]!=0) res[0][0]=a1;
  a1=arg[0]? arg[0][0] : 0;
  a1=sin(a1);
  a1=(a1-a0);
  if (res[1]!=0) res[1][0]=a1;
  a1=arg[0]? arg[0][1] : 0;
  a1=sin(a1);
  a1=(a1-a0);
  if (res[1]!=0) res[1][1]=a1;
  a1=arg[0]? arg[0][2] : 0;
  a1=sin(a1);
  a1=(a1-a0);
  if (res[1]!=0) res[1][2]=a1;
  a1=arg[0]? arg[0][3] : 0;
  a1=sin(a1);
  a1=(a1-a0);
  if (res[1]!=0) res[1][3]=a1;
  a1=arg[0]? arg[0][4] : 0;
  a1=sin(a1);
  a1=(a1-a0);
  if (res[1]!=0) res[1][4]=a1;
  a1=arg[0]? arg[0][5] : 0;
  a1=sin(a1);
  a1=(a1-a0);
  if (res[1]!=0) res[1][5]=a1;
  a1=arg[2]? arg[2][0] : 0;
  if (res[2]!=0) res[2][0]=a1;
  a1=arg[2]? arg[2][1] : 0;
  if (res[2]!=0) res[2][1]=a1;
  a1=arg[2]? arg[2][2] : 0;
  if (res[2]!=0) res[2][2]=a1;
  a1=arg[2]? arg[2][3] : 0;
  if (res[2]!=0) res[2][3]=a1;
  a1=arg[2]? arg[2][4] : 0;
  if (res[2]!=0) res[2][4]=a1;
  a1=arg[2]? arg[2][5] : 0;
  if (res[2]!=0) res[2][5]=a1;
  a1=arg[2]? arg[2][6] : 0;
  if (res[2]!=0) res[2][6]=a1;
  a1=arg[2]? arg[2][7] : 0;
  if (res[2]!=0) res[2][7]=a1;
  a1=arg[2]? arg[2][8] : 0;
  if (res[2]!=0) res[2][8]=a1;
  a1=arg[2]? arg[2][9] : 0;
  if (res[2]!=0) res[2][9]=a1;
  a1=arg[2]? arg[2][10] : 0;
  if (res[2]!=0) res[2][10]=a1;
  a1=arg[2]? arg[2][11] : 0;
  if (res[2]!=0) res[2][11]=a1;
  a1=arg[2]? arg[2][12] : 0;
  if (res[2]!=0) res[2][12]=a1;
  a1=arg[2]? arg[2][13] : 0;
  if (res[2]!=0) res[2][13]=a1;
  a1=arg[2]? arg[2][14] : 0;
  if (res[2]!=0) res[2][14]=a1;
  a1=arg[2]? arg[2][15] : 0;
  if (res[2]!=0) res[2][15]=a1;
  a1=arg[2]? arg[2][16] : 0;
  if (res[2]!=0) res[2][16]=a1;
  a1=arg[2]? arg[2][17] : 0;
  if (res[2]!=0) res[2][17]=a1;
  a1=arg[2]? arg[2][18] : 0;
  if (res[2]!=0) res[2][18]=a1;
  a1=arg[2]? arg[2][19] : 0;
  if (res[2]!=0) res[2][19]=a1;
  a1=arg[2]? arg[2][20] : 0;
  if (res[2]!=0) res[2][20]=a1;
  a1=arg[2]? arg[2][21] : 0;
  if (res[2]!=0) res[2][21]=a1;
  a1=arg[2]? arg[2][22] : 0;
  if (res[2]!=0) res[2][22]=a1;
  a1=arg[2]? arg[2][23] : 0;
  if (res[2]!=0) res[2][23]=a1;
  a1=arg[2]? arg[2][24] : 0;
  if (res[2]!=0) res[2][24]=a1;
  a1=arg[2]? arg[2][25] : 0;
  if (res[2]!=0) res[2][25]=a1;
  a1=arg[2]? arg[2][26] : 0;
  if (res[2]!=0) res[2][26]=a1;
  a1=arg[2]? arg[2][27] : 0;
  if (res[2]!=0) res[2][27]=a1;
  a1=arg[2]? arg[2][28] : 0;
  if (res[2]!=0) res[2][28]=a1;
  a1=arg[2]? arg[2][29] : 0;
  if (res[2]!=0) res[2][29]=a1;
  a1=arg[2]? arg[2][30] : 0;
  if (res[2]!=0) res[2][30]=a1;
  a1=arg[2]? arg[2][31] : 0;
  if (res[2]!=0) res[2][31]=a1;
  a1=arg[2]? arg[2][32] : 0;
  if (res[2]!=0) res[2][32]=a1;
  a1=arg[2]? arg[2][33] : 0;
  if (res[2]!=0) res[2][33]=a1;
  a1=arg[2]? arg[2][34] : 0;
  if (res[2]!=0) res[2][34]=a1;
  a1=arg[2]? arg[2][35] : 0;
  if (res[2]!=0) res[2][35]=a1;
  a1=arg[2]? arg[2][36] : 0;
  if (res[2]!=0) res[2][36]=a1;
  a1=arg[2]? arg[2][37] : 0;
  if (res[2]!=0) res[2][37]=a1;
  a1=arg[2]? arg[2][38] : 0;
  if (res[2]!=0) res[2][38]=a1;
  a1=arg[2]? arg[2][39] : 0;
  if (res[2]!=0) res[2][39]=a1;
  a1=arg[2]? arg[2][40] : 0;
  if (res[2]!=0) res[2][40]=a1;
  a1=arg[2]? arg[2][41] : 0;
  if (res[2]!=0) res[2][41]=a1;
  a1=arg[2]? arg[2][42] : 0;
  if (res[2]!=0) res[2][42]=a1;
  a1=arg[2]? arg[2][43] : 0;
  if (res[2]!=0) res[2][43]=a1;
  a1=arg[2]? arg[2][44] : 0;
  if (res[2]!=0) res[2][44]=a1;
  a1=arg[2]? arg[2][45] : 0;
  if (res[2]!=0) res[2][45]=a1;
  a1=arg[2]? arg[2][46] : 0;
  if (res[2]!=0) res[2][46]=a1;
  a1=arg[2]? arg[2][47] : 0;
  if (res[2]!=0) res[2][47]=a1;
  a1=arg[2]? arg[2][48] : 0;
  if (res[2]!=0) res[2][48]=a1;
  a1=arg[2]? arg[2][49] : 0;
  if (res[2]!=0) res[2][49]=a1;
  a1=arg[2]? arg[2][50] : 0;
  if (res[2]!=0) res[2][50]=a1;
  a1=arg[2]? arg[2][51] : 0;
  if (res[2]!=0) res[2][51]=a1;
  a1=arg[2]? arg[2][52] : 0;
  if (res[2]!=0) res[2][52]=a1;
  a1=arg[2]? arg[2][53] : 0;
  if (res[2]!=0) res[2][53]=a1;
  a1=arg[2]? arg[2][54] : 0;
  if (res[2]!=0) res[2][54]=a1;
  a1=arg[2]? arg[2][55] : 0;
  if (res[2]!=0) res[2][55]=a1;
  a1=arg[2]? arg[2][56] : 0;
  if (res[2]!=0) res[2][56]=a1;
  a1=arg[2]? arg[2][57] : 0;
  if (res[2]!=0) res[2][57]=a1;
  a1=arg[2]? arg[2][58] : 0;
  if (res[2]!=0) res[2][58]=a1;
  a1=arg[2]? arg[2][59] : 0;
  if (res[2]!=0) res[2][59]=a1;
  a1=arg[2]? arg[2][60] : 0;
  if (res[2]!=0) res[2][60]=a1;
  a1=arg[2]? arg[2][61] : 0;
  if (res[2]!=0) res[2][61]=a1;
  a1=arg[2]? arg[2][62] : 0;
  if (res[2]!=0) res[2][62]=a1;
  a1=arg[2]? arg[2][63] : 0;
  if (res[2]!=0) res[2][63]=a1;
  a1=arg[2]? arg[2][64] : 0;
  if (res[2]!=0) res[2][64]=a1;
  a1=arg[2]? arg[2][65] : 0;
  if (res[2]!=0) res[2][65]=a1;
  a1=arg[2]? arg[2][66] : 0;
  if (res[2]!=0) res[2][66]=a1;
  a1=arg[2]? arg[2][67] : 0;
  if (res[2]!=0) res[2][67]=a1;
  a1=arg[2]? arg[2][68] : 0;
  if (res[2]!=0) res[2][68]=a1;
  a1=arg[2]? arg[2][69] : 0;
  if (res[2]!=0) res[2][69]=a1;
  a1=arg[2]? arg[2][70] : 0;
  if (res[2]!=0) res[2][70]=a1;
  a1=arg[2]? arg[2][71] : 0;
  if (res[2]!=0) res[2][71]=a1;
  a1=arg[2]? arg[2][72] : 0;
  if (res[2]!=0) res[2][72]=a1;
  a1=arg[2]? arg[2][73] : 0;
  if (res[2]!=0) res[2][73]=a1;
  a1=arg[2]? arg[2][74] : 0;
  if (res[2]!=0) res[2][74]=a1;
  a1=arg[2]? arg[2][75] : 0;
  if (res[2]!=0) res[2][75]=a1;
  a1=arg[2]? arg[2][76] : 0;
  if (res[2]!=0) res[2][76]=a1;
  a1=arg[2]? arg[2][77] : 0;
  if (res[2]!=0) res[2][77]=a1;
  a1=arg[2]? arg[2][78] : 0;
  if (res[2]!=0) res[2][78]=a1;
  a1=arg[2]? arg[2][79] : 0;
  if (res[2]!=0) res[2][79]=a1;
  a1=arg[2]? arg[2][80] : 0;
  if (res[2]!=0) res[2][80]=a1;
  a1=arg[2]? arg[2][81] : 0;
  if (res[2]!=0) res[2][81]=a1;
  a1=arg[2]? arg[2][82] : 0;
  if (res[2]!=0) res[2][82]=a1;
  a1=arg[2]? arg[2][83] : 0;
  if (res[2]!=0) res[2][83]=a1;
  a1=arg[2]? arg[2][84] : 0;
  if (res[2]!=0) res[2][84]=a1;
  a1=arg[2]? arg[2][85] : 0;
  if (res[2]!=0) res[2][85]=a1;
  a1=arg[2]? arg[2][86] : 0;
  if (res[2]!=0) res[2][86]=a1;
  a1=arg[2]? arg[2][87] : 0;
  if (res[2]!=0) res[2][87]=a1;
  a1=arg[2]? arg[2][88] : 0;
  if (res[2]!=0) res[2][88]=a1;
  a1=arg[2]? arg[2][89] : 0;
  if (res[2]!=0) res[2][89]=a1;
  a1=arg[2]? arg[2][90] : 0;
  if (res[2]!=0) res[2][90]=a1;
  a1=arg[2]? arg[2][91] : 0;
  if (res[2]!=0) res[2][91]=a1;
  a1=arg[2]? arg[2][92] : 0;
  if (res[2]!=0) res[2][92]=a1;
  a1=arg[2]? arg[2][93] : 0;
  if (res[2]!=0) res[2][93]=a1;
  a1=arg[2]? arg[2][94] : 0;
  if (res[2]!=0) res[2][94]=a1;
  a1=arg[2]? arg[2][95] : 0;
  if (res[2]!=0) res[2][95]=a1;
  a1=arg[2]? arg[2][96] : 0;
  if (res[2]!=0) res[2][96]=a1;
  a1=arg[2]? arg[2][97] : 0;
  if (res[2]!=0) res[2][97]=a1;
  a1=arg[2]? arg[2][98] : 0;
  if (res[2]!=0) res[2][98]=a1;
  a1=arg[2]? arg[2][99] : 0;
  if (res[2]!=0) res[2][99]=a1;
  a1=arg[2]? arg[2][100] : 0;
  if (res[2]!=0) res[2][100]=a1;
  a1=arg[2]? arg[2][101] : 0;
  if (res[2]!=0) res[2][101]=a1;
  a1=arg[2]? arg[2][102] : 0;
  if (res[2]!=0) res[2][102]=a1;
  a1=arg[2]? arg[2][103] : 0;
  if (res[2]!=0) res[2][103]=a1;
  a1=arg[2]? arg[2][104] : 0;
  if (res[2]!=0) res[2][104]=a1;
  a1=arg[2]? arg[2][105] : 0;
  if (res[2]!=0) res[2][105]=a1;
  a1=arg[2]? arg[2][106] : 0;
  if (res[2]!=0) res[2][106]=a1;
  a1=arg[2]? arg[2][107] : 0;
  if (res[2]!=0) res[2][107]=a1;
  a1=arg[2]? arg[2][108] : 0;
  if (res[2]!=0) res[2][108]=a1;
  a1=arg[2]? arg[2][109] : 0;
  if (res[2]!=0) res[2][109]=a1;
  a1=arg[2]? arg[2][110] : 0;
  if (res[2]!=0) res[2][110]=a1;
  a1=arg[2]? arg[2][111] : 0;
  if (res[2]!=0) res[2][111]=a1;
  a1=arg[2]? arg[2][112] : 0;
  if (res[2]!=0) res[2][112]=a1;
  a1=arg[2]? arg[2][113] : 0;
  if (res[2]!=0) res[2][113]=a1;
  a1=arg[2]? arg[2][114] : 0;
  if (res[2]!=0) res[2][114]=a1;
  a1=arg[2]? arg[2][115] : 0;
  if (res[2]!=0) res[2][115]=a1;
  a1=arg[2]? arg[2][116] : 0;
  if (res[2]!=0) res[2][116]=a1;
  a1=arg[2]? arg[2][117] : 0;
  if (res[2]!=0) res[2][117]=a1;
  a1=arg[2]? arg[2][118] : 0;
  if (res[2]!=0) res[2][118]=a1;
  a1=arg[2]? arg[2][119] : 0;
  if (res[2]!=0) res[2][119]=a1;
  a1=arg[2]? arg[2][120] : 0;
  if (res[2]!=0) res[2][120]=a1;
  a1=arg[2]? arg[2][121] : 0;
  if (res[2]!=0) res[2][121]=a1;
  a1=arg[2]? arg[2][122] : 0;
  if (res[2]!=0) res[2][122]=a1;
  a1=arg[2]? arg[2][123] : 0;
  if (res[2]!=0) res[2][123]=a1;
  a1=arg[2]? arg[2][124] : 0;
  if (res[2]!=0) res[2][124]=a1;
  a1=arg[2]? arg[2][125] : 0;
  if (res[2]!=0) res[2][125]=a1;
  a1=arg[2]? arg[2][126] : 0;
  if (res[2]!=0) res[2][126]=a1;
  a1=arg[2]? arg[2][127] : 0;
  if (res[2]!=0) res[2][127]=a1;
  a1=arg[2]? arg[2][128] : 0;
  if (res[2]!=0) res[2][128]=a1;
  a1=arg[2]? arg[2][129] : 0;
  if (res[2]!=0) res[2][129]=a1;
  a1=arg[2]? arg[2][130] : 0;
  if (res[2]!=0) res[2][130]=a1;
  a1=arg[2]? arg[2][131] : 0;
  if (res[2]!=0) res[2][131]=a1;
  a1=arg[2]? arg[2][132] : 0;
  if (res[2]!=0) res[2][132]=a1;
  a1=arg[2]? arg[2][133] : 0;
  if (res[2]!=0) res[2][133]=a1;
  a1=arg[2]? arg[2][134] : 0;
  if (res[2]!=0) res[2][134]=a1;
  a1=arg[2]? arg[2][135] : 0;
  if (res[2]!=0) res[2][135]=a1;
  a1=arg[2]? arg[2][136] : 0;
  if (res[2]!=0) res[2][136]=a1;
  a1=arg[2]? arg[2][137] : 0;
  if (res[2]!=0) res[2][137]=a1;
  a1=arg[2]? arg[2][138] : 0;
  if (res[2]!=0) res[2][138]=a1;
  a1=arg[2]? arg[2][139] : 0;
  if (res[2]!=0) res[2][139]=a1;
  a1=arg[2]? arg[2][140] : 0;
  if (res[2]!=0) res[2][140]=a1;
  a1=arg[2]? arg[2][141] : 0;
  if (res[2]!=0) res[2][141]=a1;
  a1=arg[2]? arg[2][142] : 0;
  if (res[2]!=0) res[2][142]=a1;
  a1=arg[2]? arg[2][143] : 0;
  if (res[2]!=0) res[2][143]=a1;
  a1=arg[2]? arg[2][144] : 0;
  if (res[2]!=0) res[2][144]=a1;
  a1=arg[2]? arg[2][145] : 0;
  if (res[2]!=0) res[2][145]=a1;
  a1=arg[2]? arg[2][146] : 0;
  if (res[2]!=0) res[2][146]=a1;
  a1=arg[2]? arg[2][147] : 0;
  if (res[2]!=0) res[2][147]=a1;
  a1=arg[2]? arg[2][148] : 0;
  if (res[2]!=0) res[2][148]=a1;
  a1=arg[2]? arg[2][149] : 0;
  if (res[2]!=0) res[2][149]=a1;
  a1=arg[2]? arg[2][150] : 0;
  if (res[2]!=0) res[2][150]=a1;
  a1=arg[2]? arg[2][151] : 0;
  if (res[2]!=0) res[2][151]=a1;
  a1=arg[2]? arg[2][152] : 0;
  if (res[2]!=0) res[2][152]=a1;
  a1=arg[2]? arg[2][153] : 0;
  if (res[2]!=0) res[2][153]=a1;
  a1=arg[2]? arg[2][154] : 0;
  if (res[2]!=0) res[2][154]=a1;
  a1=arg[2]? arg[2][155] : 0;
  if (res[2]!=0) res[2][155]=a1;
  a1=arg[2]? arg[2][156] : 0;
  if (res[2]!=0) res[2][156]=a1;
  a1=arg[2]? arg[2][157] : 0;
  if (res[2]!=0) res[2][157]=a1;
  a1=arg[2]? arg[2][158] : 0;
  if (res[2]!=0) res[2][158]=a1;
  a1=arg[2]? arg[2][159] : 0;
  if (res[2]!=0) res[2][159]=a1;
  a1=arg[2]? arg[2][160] : 0;
  if (res[2]!=0) res[2][160]=a1;
  a1=arg[2]? arg[2][161] : 0;
  if (res[2]!=0) res[2][161]=a1;
  a1=arg[2]? arg[2][162] : 0;
  if (res[2]!=0) res[2][162]=a1;
  a1=arg[2]? arg[2][163] : 0;
  if (res[2]!=0) res[2][163]=a1;
  a1=arg[2]? arg[2][164] : 0;
  if (res[2]!=0) res[2][164]=a1;
  a1=arg[2]? arg[2][165] : 0;
  if (res[2]!=0) res[2][165]=a1;
  a1=arg[2]? arg[2][166] : 0;
  if (res[2]!=0) res[2][166]=a1;
  a1=arg[2]? arg[2][167] : 0;
  if (res[2]!=0) res[2][167]=a1;
  a1=arg[2]? arg[2][168] : 0;
  if (res[2]!=0) res[2][168]=a1;
  a1=arg[2]? arg[2][169] : 0;
  if (res[2]!=0) res[2][169]=a1;
  a1=arg[2]? arg[2][170] : 0;
  if (res[2]!=0) res[2][170]=a1;
  a1=arg[2]? arg[2][171] : 0;
  if (res[2]!=0) res[2][171]=a1;
  a1=arg[2]? arg[2][172] : 0;
  if (res[2]!=0) res[2][172]=a1;
  a1=arg[2]? arg[2][173] : 0;
  if (res[2]!=0) res[2][173]=a1;
  a1=arg[2]? arg[2][174] : 0;
  if (res[2]!=0) res[2][174]=a1;
  a1=arg[2]? arg[2][175] : 0;
  if (res[2]!=0) res[2][175]=a1;
  a1=arg[2]? arg[2][176] : 0;
  if (res[2]!=0) res[2][176]=a1;
  a1=arg[2]? arg[2][177] : 0;
  if (res[2]!=0) res[2][177]=a1;
  a1=arg[2]? arg[2][178] : 0;
  if (res[2]!=0) res[2][178]=a1;
  a1=arg[2]? arg[2][179] : 0;
  if (res[2]!=0) res[2][179]=a1;
  a1=arg[2]? arg[2][180] : 0;
  if (res[2]!=0) res[2][180]=a1;
  a1=arg[2]? arg[2][181] : 0;
  if (res[2]!=0) res[2][181]=a1;
  a1=arg[2]? arg[2][182] : 0;
  if (res[2]!=0) res[2][182]=a1;
  a1=arg[2]? arg[2][183] : 0;
  if (res[2]!=0) res[2][183]=a1;
  a1=arg[2]? arg[2][184] : 0;
  if (res[2]!=0) res[2][184]=a1;
  a1=arg[2]? arg[2][185] : 0;
  if (res[2]!=0) res[2][185]=a1;
  a1=arg[2]? arg[2][186] : 0;
  if (res[2]!=0) res[2][186]=a1;
  a1=arg[2]? arg[2][187] : 0;
  if (res[2]!=0) res[2][187]=a1;
  a1=arg[2]? arg[2][188] : 0;
  if (res[2]!=0) res[2][188]=a1;
  a1=arg[2]? arg[2][189] : 0;
  if (res[2]!=0) res[2][189]=a1;
  a1=arg[2]? arg[2][190] : 0;
  if (res[2]!=0) res[2][190]=a1;
  a1=arg[2]? arg[2][191] : 0;
  if (res[2]!=0) res[2][191]=a1;
  a1=arg[2]? arg[2][192] : 0;
  if (res[2]!=0) res[2][192]=a1;
  a1=arg[2]? arg[2][193] : 0;
  if (res[2]!=0) res[2][193]=a1;
  a1=arg[2]? arg[2][194] : 0;
  if (res[2]!=0) res[2][194]=a1;
  a1=arg[2]? arg[2][195] : 0;
  if (res[2]!=0) res[2][195]=a1;
  a1=arg[2]? arg[2][196] : 0;
  if (res[2]!=0) res[2][196]=a1;
  a1=arg[2]? arg[2][197] : 0;
  if (res[2]!=0) res[2][197]=a1;
  a1=arg[2]? arg[2][198] : 0;
  if (res[2]!=0) res[2][198]=a1;
  a1=arg[2]? arg[2][199] : 0;
  if (res[2]!=0) res[2][199]=a1;
  a1=arg[2]? arg[2][200] : 0;
  if (res[2]!=0) res[2][200]=a1;
  a1=arg[2]? arg[2][201] : 0;
  if (res[2]!=0) res[2][201]=a1;
  a1=arg[2]? arg[2][202] : 0;
  if (res[2]!=0) res[2][202]=a1;
  a1=arg[2]? arg[2][203] : 0;
  if (res[2]!=0) res[2][203]=a1;
  a1=arg[2]? arg[2][204] : 0;
  if (res[2]!=0) res[2][204]=a1;
  a1=arg[2]? arg[2][205] : 0;
  if (res[2]!=0) res[2][205]=a1;
  a1=arg[2]? arg[2][206] : 0;
  if (res[2]!=0) res[2][206]=a1;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int f(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

extern "C" CASADI_SYMBOL_EXPORT int f_alloc_mem(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT int f_init_mem(int mem) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void f_free_mem(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT int f_checkout(void) {
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void f_release(int mem) {
}

extern "C" CASADI_SYMBOL_EXPORT void f_incref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT void f_decref(void) {
}

extern "C" CASADI_SYMBOL_EXPORT casadi_int f_n_in(void) { return 3;}

extern "C" CASADI_SYMBOL_EXPORT casadi_int f_n_out(void) { return 3;}

extern "C" CASADI_SYMBOL_EXPORT casadi_real f_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* f_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const char* f_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* f_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT const casadi_int* f_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    case 1: return casadi_s0;
    case 2: return casadi_s2;
    default: return 0;
  }
}

extern "C" CASADI_SYMBOL_EXPORT int f_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 3;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

extern "C" CASADI_SYMBOL_EXPORT void f_eigen (Eigen::Matrix<double,3,2> &i0,
				Eigen::Matrix<double,1,1> &i1,
				Eigen::Matrix<double,3,69> &i2,
				Eigen::Matrix<double,1,1> &o0, 
				Eigen::Matrix<double,3,2> &o1, 
				Eigen::Matrix<double,3,69> &o2) {
// create arguments for generated casadi function
const casadi_real *arg[] = {i0.data(), i1.data(), i2.data()};
// create results for generated casadi function
casadi_real *res[] = {o0.data(), o1.data(), o2.data()};
// call the generated casadi function
f(arg, res, nullptr, nullptr, 0);
}

