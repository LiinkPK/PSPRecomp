/* Entry 0x08998588 | file offset 0x00195560 | FUN_08998588 | bytes 40 */

undefined8 FUN_08998588(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_1 * param_4 + param_2 * param_3 +
                  (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}

