#include "crlibm.h"
#include "crlibm_private.h"

/*File generated by maple/coef_sine.mw*/
#define DEGREE 21

#ifdef WORDS_BIGENDIAN
db_number const pio2hi = {{0x3FF92200,0x00000000}} /* +1.5708007812e+00 */ ;
db_number const pio2lo = {{0xBED2AEEF,0x4B9EE59E}} /* -4.4544551034e-06 */ ;
db_number const invpio2 = {{0x3FE45F30,0x6DC9C883}} /* +6.3661977237e-01 */ ;
db_number const PolySin[10] =
{
{{0xBFC55555,0x55555555}} /* -1.6666666667e-01 */ ,
{{0x3F811111,0x11111111}} /* +8.3333333333e-03 */ ,
{{0xBF2A01A0,0x1A01A01A}} /* -1.9841269841e-04 */ ,
{{0x3EC71DE3,0xA556C734}} /* +2.7557319224e-06 */ ,
{{0xBE5AE645,0x67F544E4}} /* -2.5052108385e-08 */ ,
{{0x3DE61246,0x13A86D09}} /* +1.6059043837e-10 */ ,
{{0xBD6AE7F3,0xE733B81F}} /* -7.6471637318e-13 */ ,
{{0x3CE952C7,0x7030AD4A}} /* +2.8114572543e-15 */ ,
{{0xBC62F49B,0x46814157}} /* -8.2206352466e-18 */ ,
{{0x3BD71B8E,0xF6DCF572}} /* +1.9572941063e-20 */
};

db_number const PolyCos[10] =
{
{{0xBFE00000,0x00000000}} /* -5.0000000000e-01 */ ,
{{0x3FA55555,0x55555555}} /* +4.1666666667e-02 */ ,
{{0xBF56C16C,0x16C16C17}} /* -1.3888888889e-03 */ ,
{{0x3EFA01A0,0x1A01A01A}} /* +2.4801587302e-05 */ ,
{{0xBE927E4F,0xB7789F5C}} /* -2.7557319224e-07 */ ,
{{0x3E21EED8,0xEFF8D898}} /* +2.0876756988e-09 */ ,
{{0xBDA93974,0xA8C07C9D}} /* -1.1470745598e-11 */ ,
{{0x3D2AE7F3,0xE733B81F}} /* +4.7794773324e-14 */ ,
{{0xBCA68278,0x63B97D97}} /* -1.5619206969e-16 */ ,
{{0x3C1E542B,0xA4020225}} /* +4.1103176233e-19 */ ,

};

#else
db_number const pio2hi = {{0x00000000,0x3FF92200}} /* +1.5708007812e+00 */ ;
db_number const pio2lo = {{0x4B9EE59E,0xBED2AEEF}} /* -4.4544551034e-06 */ ;
db_number const invpio2 = {{0x6DC9C883,0x3FE45F30}} /* +6.3661977237e-01 */ ;
db_number const PolySin[10] =
{
{{0x55555555,0xBFC55555}} /* -1.6666666667e-01 */ ,
{{0x11111111,0x3F811111}} /* +8.3333333333e-03 */ ,
{{0x1A01A01A,0xBF2A01A0}} /* -1.9841269841e-04 */ ,
{{0xA556C734,0x3EC71DE3}} /* +2.7557319224e-06 */ ,
{{0x67F544E4,0xBE5AE645}} /* -2.5052108385e-08 */ ,
{{0x13A86D09,0x3DE61246}} /* +1.6059043837e-10 */ ,
{{0xE733B81F,0xBD6AE7F3}} /* -7.6471637318e-13 */ ,
{{0x7030AD4A,0x3CE952C7}} /* +2.8114572543e-15 */ ,
{{0x46814157,0xBC62F49B}} /* -8.2206352466e-18 */ ,
{{0xF6DCF572,0x3BD71B8E}} /* +1.9572941063e-20 */
};

db_number const PolyCos[10] =
{
{{0x00000000,0xBFE00000}} /* -5.0000000000e-01 */ ,
{{0x55555555,0x3FA55555}} /* +4.1666666667e-02 */ ,
{{0x16C16C17,0xBF56C16C}} /* -1.3888888889e-03 */ ,
{{0x1A01A01A,0x3EFA01A0}} /* +2.4801587302e-05 */ ,
{{0xB7789F5C,0xBE927E4F}} /* -2.7557319224e-07 */ ,
{{0xEFF8D898,0x3E21EED8}} /* +2.0876756988e-09 */ ,
{{0xA8C07C9D,0xBDA93974}} /* -1.1470745598e-11 */ ,
{{0xE733B81F,0x3D2AE7F3}} /* +4.7794773324e-14 */ ,
{{0x63B97D97,0xBCA68278}} /* -1.5619206969e-16 */ ,
{{0xA4020225,0x3C1E542B}} /* +4.1103176233e-19 */ ,

};

#endif /* WORDS_BIGENDIAN */


