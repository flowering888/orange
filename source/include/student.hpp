/*
    This file is part of Orange.

    Orange is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Orange is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Orange; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    Authors: Janez Demsar, Blaz Zupan, 1996--2002
    Contact: janez.demsar@fri.uni-lj.si
*/


/*,	2,	4,	6,	8,	10,	12,	14,	16,	18,	20,	22,	24,	26,	28,	30,	700*/
double students[60][16]={
/*0.1*/ {	0.929465438,	0.925155841,	0.923601952,	0.922804909,	0.922320719,	0.92199557,	0.921762214,	0.921586609,	0.921449688,	0.921339941,	0.921250012,	0.921174978,	0.921111423,	0.9210569,	0.921009612,	0.920372958},
/*0.2*/ {	0.859971992,	0.851237014,	0.848086992,	0.846470991,	0.845489191,	0.844829834,	0.844356591,	0.844000452,	0.843722756,	0.843500167,	0.843317768,	0.843165577,	0.843036667,	0.842926075,	0.842830157,	0.841538668},
/*0.3*/ {	0.792485661,	0.779121428,	0.774299221,	0.771824482,	0.770320608,	0.769310474,	0.768585383,	0.768039667,	0.767614121,	0.767273003,	0.766993463,	0.766760211,	0.766562632,	0.766393125,	0.766246105,	0.76426622},
/*0.4*/ {	0.727834473,	0.709597261,	0.703008232,	0.699624505,	0.69756741,	0.696185305,	0.695193012,	0.694446084,	0.693863566,	0.693396576,	0.693013857,	0.69269449,	0.692423952,	0.692191842,	0.691990517,	0.689278547},
/*0.5*/ {	0.666666667,	0.643329963,	0.634880000,	0.630536076,	0.627893606,	0.626117476,	0.624841916,	0.623881555,	0.623132457,	0.622531842,	0.622039556,	0.621628722,	0.621280674,	0.620982044,	0.620723005,	0.617232215},
/*0.6*/ {	0.609433267,	0.580841158,	0.570456271,	0.565110058,	0.561855182,	0.55966623,	0.558093585,	0.556909208,	0.555985167,	0.555244153,	0.554636701,	0.554129696,	0.553700129,	0.553331522,	0.55301176,	0.54870041},
/*0.7*/ {	0.556393025,	0.522500166,	0.510143381,	0.503771052,	0.49988757,	0.497274154,	0.49539568,	0.493980489,	0.492876071,	0.491990218,	0.491263906,	0.490657607,	0.490143849,	0.489702952,	0.489320444,	0.484159871},
/*0.8*/ {	0.507634036,	0.468527136,	0.454210365,	0.446813334,	0.442300419,	0.439261232,	0.437075606,	0.435428389,	0.434142518,	0.433110878,	0.432264874,	0.431558547,	0.430959948,	0.430446181,	0.43000041,	0.423982198},
/*0.9*/ {	0.463105012,	0.419005519,	0.402795234,	0.394404204,	0.389279262,	0.385825432,	0.383340353,	0.381466737,	0.380003702,	0.37882965,	0.377866674,	0.377062558,	0.376380994,	0.375795952,	0.375288287,	0.368429758},
/*1.0*/ {	0.422649731,	0.373900966,	0.355917684,	0.346593507,	0.340893132,	0.337049058,	0.334281943,	0.332194985,	0.330564931,	0.329256577,	0.328183262,	0.327286881,	0.326527022,	0.325874707,	0.325308615,	0.317656057},
/*1.1*/ {	0.386039871,	0.33308365,	0.313496149,	0.303327753,	0.297106822,	0.292909739,	0.289887509,	0.287607577,	0.285826455,	0.284396628,	0.283223514,	0.282243684,	0.281413012,	0.280699852,	0.280080918,	0.271710264},
/*1.2*/ {	0.353003361,	0.296351393,	0.275367163,	0.264467105,	0.257796301,	0.25329473,	0.250052761,	0.24760679,	0.245695796,	0.244161608,	0.242902803,	0.241851353,	0.240959931,	0.24019459,	0.239530351,	0.230545311},
/*1.3*/ {	0.323247031,	0.263451597,	0.241305175,	0.229803625,	0.222765817,	0.218017171,	0.214597593,	0.212017821,	0.210002419,	0.208384496,	0.207057044,	0.205948298,	0.20500833,	0.204201333,	0.203500959,	0.194028863},
/*1.4*/ {	0.296473529,	0.234100627,	0.211041407,	0.199079375,	0.191765352,	0.186833007,	0.183282582,	0.18060494,	0.178513603,	0.176835065,	0.175458115,	0.174308192,	0.173333435,	0.17249666,	0.171770509,	0.161956359},
/*1.5*/ {	0.272393125,	0.207999999,	0.184280735,	0.172003292,	0.164507327,	0.159457504,	0.155825318,	0.153087652,	0.150950452,	0.149235771,	0.147829628,	0.146655646,	0.145660727,	0.144806818,	0.144065929,	0.134065273},
/*1.6*/ {	0.250731350,	0.184849143,	0.160716017,	0.148266103,	0.140681753,	0.135580508,	0.131915698,	0.129155996,	0.127003187,	0.125277026,	0.123862182,	0.122681437,	0.121681154,	0.12082291,	0.120078468,	0.110049787},
/*1.7*/ {	0.231233426,	0.16435494,	0.140039654,	0.127552866,	0.119969345,	0.114879862,	0.111229564,	0.108484338,	0.106345039,	0.104631167,	0.103227397,	0.102056594,	0.101065244,	0.100215045,	0.099477869,	0.089575149},
/*1.8*/ {	0.213666349,	0.146238381,	0.121952421,	0.109553007,	0.102052243,	0.097032677,	0.093440308,	0.09074323,	0.088644326,	0.0869647,	0.085590265,	0.084444847,	0.083475655,	0.082644954,	0.081925066,	0.072291073},
/*1.9*/ {	0.197819371,	0.130238853,	0.106169825,	0.093967896,	0.086622456,	0.081724282,	0.078228274,	0.075609136,	0.07357439,	0.071948422,	0.070619485,	0.069513103,	0.06857776,	0.067776681,	0.067082921,	0.057843783},
/*2.0*/ {	0.183503419,	0.116116523,	0.092426311,	0.080516238,	0.073388034,	0.068655013,	0.06528795,	0.062771963,	0.060821465,	0.059265534,	0.0579957,	0.056939847,	0.056048184,	0.055285237,	0.054625044,	0.045886166},
/*2.1*/ {	0.170549869,	0.103653286,	0.080477687,	0.068937523,	0.062077244,	0.057544938,	0.054333145,	0.05194057,	0.050090405,	0.048617587,	0.047417696,	0.046421501,	0.045581313,	0.044863222,	0.044242469,	0.036086141},
/*2.2*/ {	0.158808976,	0.09265267,	0.070102186,	0.058993908,	0.052441067,	0.048136813,	0.045100295,	0.0428464,	0.041108586,	0.039728588,	0.038606645,	0.037676816,	0.036893805,	0.036225484,	0.035648439,	0.02813294},
/*2.3*/ {	0.148148148,	0.082939037,	0.061100466,	0.050470832,	0.044254313,	0.040197573,	0.037350274,	0.035245504,	0.033628145,	0.032347423,	0.031308684,	0.030449584,	0.029727428,	0.029112015,	0.028581387,	0.021741542},
/*2.4*/ {	0.138450210,	0.074356327,	0.053294877,	0.043176728,	0.037315646,	0.03351865,	0.030868928,	0.028919289,	0.027426868,	0.026248874,	0.025296065,	0.02450989,	0.02385039,	0.023289382,	0.022806436,	0.016655295},
/*2.5*/ {	0.129611720,	0.066766545,	0.046528232,	0.036942038,	0.031446844,	0.027915399,	0.025466664,	0.023674225,	0.02230802,	0.021233545,	0.020367147,	0.019654175,	0.019057473,	0.018550923,	0.018115649,	0.012647048},
/*2.6*/ {	0.121541408,	0.060048132,	0.040662276,	0.031617812,	0.026491497,	0.023225906,	0.020977334,	0.019340809,	0.018099372,	0.017126948,	0.016345538,	0.015704422,	0.015169257,	0.014715992,	0.014327301,	0.009518979},
/*2.7*/ {	0.114158735,	0.054094322,	0.035576005,	0.027074035,	0.022313365,	0.019309369,	0.01725665,	0.015772004,	0.014651664,	0.013777987,	0.013078602,	0.012506683,	0.012030664,	0.011628527,	0.011284466,	0.007101452},
/*2.8*/ {	0.107392602,	0.048811551,	0.031163948,	0.023197841,	0.018794548,	0.016044248,	0.014180322,	0.012841367,	0.011836724,	0.011057072,	0.010435565,	0.009929181,	0.009509056,	0.009155144,	0.008853109,	0.005251121},
/*2.9*/ {	0.101180195,	0.04411795,	0.027334475,	0.019891704,	0.015833599,	0.013326315,	0.011642052,	0.010441004,	0.009545395,	0.008854022,	0.008305399,	0.007860177,	0.00749209,	0.007182979,	0.00691991,	0.003848566},
/*3.0*/ {	0.095465966,	0.039941968,	0.024008197,	0.017071681,	0.013343655,	0.011066696,	0.009551513,	0.008479499,	0.007685412,	0.007075899,	0.00659462,	0.006205737,	0.005885454,	0.005617399,	0.005389964,	0.002795652},
/*3.1*/ {	0.090200730,	0.036221111,	0.021116474,	0.014665765,	0.011250657,	0.009189996,	0.007832392,	0.00687988,	0.006179319,	0.005644877,	0.005225117,	0.004887523,	0.00461063,	0.004379741,	0.004184485,	0.002012802},
/*3.2*/ {	0.085340879,	0.032900811,	0.018600059,	0.012612349,	0.009491696,	0.007632539,	0.006420541,	0.005577706,	0.00496249,	0.004496216,	0.004132078,	0.003840686,	0.003602748,	0.003405128,	0.003238602,	0.001436316},
/*3.3*/ {	0.080847694,	0.02993342,	0.016407876,	0.010858852,	0.008013498,	0.00634075,	0.005262286,	0.004519303,	0.003981307,	0.003576383,	0.003262074,	0.003011901,	0.002808591,	0.00264045,	0.002499307,	0.001015849},
/*3.4*/ {	0.076686741,	0.027277325,	0.014495928,	0.009360468,	0.006771072,	0.005269711,	0.004312891,	0.003660166,	0.003191509,	0.002841358,	0.002571313,	0.002357594,	0.00218479,	0.002042527,	0.001923596,	0.000712095},
/*3.5*/ {	0.072827350,	0.024896163,	0.012826338,	0.008079082,	0.005726505,	0.004381869,	0.003535208,	0.002963548,	0.002556727,	0.002255123,	0.002024099,	0.001842364,	0.001696212,	0.001576472,	0.001476807,	0.00049474},
/*3.6*/ {	0.069242158,	0.022758139,	0.011366508,	0.006982298,	0.004847908,	0.003645909,	0.002898482,	0.002399213,	0.002047199,	0.001788342,	0.00159148,	0.001437604,	0.00131456,	0.001214268,	0.001131178,	0.000340681},
/*3.7*/ {	0.065906710,	0.020835429,	0.010088379,	0.006042608,	0.004108497,	0.003035771,	0.002377321,	0.001942366,	0.001638659,	0.001417219,	0.001250076,	0.001120303,	0.001017156,	0.000933537,	0.0008646,	0.000232516},
/*3.8*/ {	0.062799115,	0.019103662,	0.0089678,	0.005236662,	0.003485807,	0.002529811,	0.001950809,	0.001572732,	0.00131139,	0.001122524,	0.000981087,	0.000872043,	0.000785917,	0.000716495,	0.000659558,	0.000157288},
/*3.9*/ {	0.059899742,	0.017541469,	0.007983973,	0.004544653,	0.002961008,	0.002110076,	0.001601755,	0.001273772,	0.001049417,	0.000888771,	0.000769452,	0.000678134,	0.000606485,	0.000549077,	0.00050225,	0.000105458},
/*4.0*/ {	0.057190958,	0.01613009,	0.007118978,	0.003949773,	0.002518333,	0.001761696,	0.001316049,	0.001032025,	0.000839829,	0.000703523,	0.000603144,	0.000526908,	0.000467505,	0.000420207,	0.000381846,	7.00829E-05},
/*4.1*/ {	0.054656899,	0.01485304,	0.006357367,	0.003437761,	0.002144578,	0.001472364,	0.001082133,	0.000836555,	0.000672221,	0.000556824,	0.000472593,	0.000409129,	0.000360033,	0.000321196,	0.000289886,	4.61633E-05},
/*4.2*/ {	0.052283267,	0.01369581,	0.005685809,	0.002996514,	0.001828696,	0.0012319,	0.000890543,	0.000678495,	0.000538219,	0.000440718,	0.0003702,	0.000317505,	0.000277045,	0.000245257,	0.000219788,	3.01398E-05},
/*4.3*/ {	0.050057154,	0.012645619,	0.005092795,	0.002615755,	0.00156144,	0.001031894,	0.000733544,	0.000550661,	0.000431097,	0.000348865,	0.000289949,	0.000246301,	0.000213045,	0.000187102,	0.000166451,	1.95051E-05},
/*4.4*/ {	0.047966891,	0.011691187,	0.004568373,	0.002286755,	0.00133507,	0.000865392,	0.000604814,	0.000447241,	0.000345464,	0.000276218,	0.000227089,	0.000191011,	0.000163743,	0.000142627,	0.000125931,	1.25121E-05},
/*4.5*/ {	0.046001908,	0.01082255,	0.004103934,	0.002002092,	0.001143105,	0.000726653,	0.000499192,	0.00036354,	0.000276999,	0.000218771,	0.000177872,	0.000148109,	0.0001258,	0.000108655,	9.51936E-05,	7.95602E-06},
/*4.6*/ {	0.04415262,	0.010030893,	0.003692019,	0.001755453,	0.00098012,	0.000610931,	0.000412464,	0.000295764,	0.000222249,	0.000173345,	0.000139347,	0.000114837,	9.66225E-05,	8.27332E-05,	7.1906E-05,	5.01477E-06},
/*4.7*/ {	0.042410318,	0.009308405,	0.003326162,	0.001541461,	0.000841566,	0.000514306,	0.00034119,	0.00024085,	0.00017845,	0.000137421,	0.000109197,	8.9045E-05,	7.41998E-05,	6.2971E-05,	5.42826E-05,	3.13334E-06},
/*4.8*/ {	0.04076708,	0.008648157,	0.003000746,	0.001355536,	0.000723631,	0.000433537,	0.000282565,	0.000196327,	0.000143398,	0.000109007,	8.56031E-05,	6.90566E-05,	5.69774E-05,	4.79163E-05,	4.09589E-05,	1.94077E-06},
/*4.9*/ {	0.039215686,	0.008043992,	0.002710889,	0.00119377,	0.000623116,	0.000365944,	0.000234296,	0.000160202,	0.00011533,	8.65249E-05,	6.71378E-05,	5.35687E-05,	4.37543E-05,	3.64549E-05,	3.08942E-05,	1.19168E-06},
/*5.0*/ {	0.037749551,	0.007490434,	0.002452342,	0.001052826,	0.000537334,	0.000309311,	0.000194515,	0.000130868,	9.28414E-05,	6.87303E-05,	5.26841E-05,	4.15686E-05,	3.36048E-05,	2.77334E-05,	2.32967E-05,	7.25404E-07},
/*5.1*/ {	0.036362657,	0.006982603,	0.002221401,	0.00092985,	0.000464027,	0.000261803,	0.000161694,	0.000107026,	7.48109E-05,	5.4639E-05,	4.13675E-05,	3.22704E-05,	2.58157E-05,	2.10993E-05,	1.75649E-05,	4.37767E-07},
/*5.2*/ {	0.035049495,	0.006516146,	0.002014836,	0.000822402,	0.000401297,	0.0002219,	0.000134586,	8.76303E-05,	6.03437E-05,	4.34741E-05,	3.2504E-05,	2.50647E-05,	1.98383E-05,	1.60543E-05,	1.32427E-05,	2.61916E-07},
/*5.3*/ {	0.033805022,	0.006087174,	0.001829821,	0.000728389,	0.000347543,	0.000188342,	0.00011217,	7.18361E-05,	4.87263E-05,	3.46222E-05,	2.55587E-05,	1.94792E-05,	1.5251E-05,	1.22184E-05,	9.98452E-06,	1.55363E-07},
/*5.4*/ {	0.032624609,	0.005692207,	0.001663887,	0.000646017,	0.00030142,	0.000160083,	9.36119E-05,	5.89613E-05,	3.9389E-05,	2.75993E-05,	2.01138E-05,	1.51482E-05,	1.17301E-05,	9.30179E-06,	7.52897E-06,	9.13727E-08},
/*5.5*/ {	0.031504003,	0.005328128,	0.001514868,	0.000573744,	0.000261788,	0.000136256,	7.823E-05,	4.84549E-05,	3.18775E-05,	2.20232E-05,	1.58425E-05,	1.17885E-05,	9.02699E-06,	7.08415E-06,	5.67857E-06,	5.32819E-08},
/*5.6*/ {	0.030439295,	0.004992143,	0.001380867,	0.000510246,	0.000227688,	0.000116139,	6.54646E-05,	3.98718E-05,	2.58288E-05,	1.75922E-05,	1.24896E-05,	9.18098E-06,	6.95107E-06,	5.39769E-06,	4.28424E-06,	3.08071E-08},
/*5.7*/ {	0.029426882,	0.00468174,	0.001260215,	0.00045438,	0.000198308,	9.91312E-05,	5.48575E-05,	3.28517E-05,	2.0953E-05,	1.4068E-05,	9.85587E-06,	7.15614E-06,	5.35618E-06,	4.11489E-06,	3.23349E-06,	1.76622E-08},
/*5.8*/ {	0.028463445,	0.00439466,	0.001151444,	0.000405163,	0.000172958,	8.47331E-05,	4.60323E-05,	2.71033E-05,	1.70186E-05,	1.12625E-05,	7.78534E-06,	5.58276E-06,	4.13028E-06,	3.13883E-06,	2.44154E-06,	1.0041E-08},
/*5.9*/ {	0.02754592,	0.00412887,	0.001053264,	0.000361745,	0.000151057,	7.25278E-05,	3.86804E-05,	2.23906E-05,	1.38403E-05,	9.02694E-06,	6.15622E-06,	4.35933E-06,	3.18749E-06,	2.39586E-06,	1.84451E-06,	5.66054E-09},
/*6.0*/ {	0.026671473,	0.003882537,	0.000964535,	0.000323393,	0.000132109,	6.21674E-05,	3.25478E-05,	1.85221E-05,	1.127E-05,	7.2437E-06,	4.87327E-06,	3.40731E-06,	2.46197E-06,	1.83006E-06,	1.39428E-06,	3.16452E-09},
};

inline double student(const float T, const int freedom)
{ if (T>6) return 0.0;
  if (T<=0) return 1.0;
  return students[int(floor(T*10+0.5))][(freedom>30) ? 15 : (freedom-1)/2];
}
