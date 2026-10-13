/* Entry 0x0899E998 | file offset 0x0019B970 | FUN_0899e998 | bytes 84 */

bool FUN_0899e998(int *param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((param_1 != (int *)0x0) && (0x1e < param_2 - 1U)) && (*param_1 == 0x2e47494d)) &&
     (param_1[1] == 0x312e3030)) {
    bVar1 = param_1[2] == 0x505350;
  }
  return bVar1;
}

