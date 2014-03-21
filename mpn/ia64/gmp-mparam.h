/* Generated by tuneup.c, 2014-03-21, gcc 4.6 */

#define MUL_KARATSUBA_THRESHOLD          52
#define MUL_TOOM3_THRESHOLD             210
#define MUL_TOOM4_THRESHOLD             567
#define MUL_TOOM8H_THRESHOLD            567

#define SQR_BASECASE_THRESHOLD           30
#define SQR_KARATSUBA_THRESHOLD         127
#define SQR_TOOM3_THRESHOLD             238
#define SQR_TOOM4_THRESHOLD             996
#define SQR_TOOM8_THRESHOLD             996

#define POWM_THRESHOLD                  984

#define DIVREM_1_NORM_THRESHOLD           0  /* preinv always */
#define DIVREM_1_UNNORM_THRESHOLD         0  /* always */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  1  /* preinv always */
#define DIVEXACT_1_THRESHOLD              0  /* always (native) */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always */
#define MOD_1_1_THRESHOLD                 6
#define MOD_1_2_THRESHOLD                 8
#define MOD_1_3_THRESHOLD                11
#define DIVREM_HENSEL_QR_1_THRESHOLD      6
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD      3
#define DIVREM_EUCLID_HENSEL_THRESHOLD     22

#define MUL_FFT_FULL_THRESHOLD         4064

#define SQR_FFT_FULL_THRESHOLD         3040

#define MULLOW_BASECASE_THRESHOLD        25
#define MULLOW_DC_THRESHOLD              26
#define MULLOW_MUL_THRESHOLD           5402

#define MULHIGH_BASECASE_THRESHOLD       41
#define MULHIGH_DC_THRESHOLD             41
#define MULHIGH_MUL_THRESHOLD          4525

#define MULMOD_2EXPM1_THRESHOLD          44

#define SB_DIVAPPR_Q_SMALL_THRESHOLD    146
#define SB_DIV_QR_SMALL_THRESHOLD        41
#define DC_DIV_QR_THRESHOLD              30
#define INV_DIV_QR_THRESHOLD           2747
#define INV_DIVAPPR_Q_N_THRESHOLD        30
#define DC_DIV_Q_THRESHOLD               41
#define INV_DIV_Q_THRESHOLD             573
#define DC_DIVAPPR_Q_THRESHOLD          183
#define INV_DIVAPPR_Q_THRESHOLD        4569
#define DC_BDIV_QR_THRESHOLD             92
#define DC_BDIV_Q_THRESHOLD             104

#define ROOTREM_THRESHOLD                 6

#define MATRIX22_STRASSEN_THRESHOLD      22
#define HGCD_THRESHOLD                  106
#define HGCD_APPR_THRESHOLD              59
#define HGCD_REDUCE_THRESHOLD          6852
#define GCD_DC_THRESHOLD                201
#define GCDEXT_DC_THRESHOLD             606
#define JACOBI_BASE_METHOD                2

#define GET_STR_DC_THRESHOLD             14
#define GET_STR_PRECOMPUTE_THRESHOLD     22
#define SET_STR_DC_THRESHOLD           1204
#define SET_STR_PRECOMPUTE_THRESHOLD   3464

#define FAC_DSC_THRESHOLD               760
#define FAC_ODD_THRESHOLD                23

/* fft_tuning -- autogenerated by tune-fft */

#define FFT_TAB \
   { { 4, 4 }, { 4, 3 }, { 3, 3 }, { 3, 2 }, { 2, 1 } }

#define MULMOD_TAB \
   { 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 3, 3, 2, 2, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1 }

#define FFT_N_NUM 43

#define FFT_MULMOD_2EXPP1_CUTOFF 128

/* Tuneup never completed due to unusual tuning */
