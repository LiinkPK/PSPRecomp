/* Entry 0x0898F978 | file offset 0x0018C950 | FUN_0898f978 | bytes 80 */

undefined4 * FUN_0898f978(undefined4 *param_1,int param_2)

{
  char cVar1;
  
  *param_1 = &DAT_089dd338;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(bool *)(param_1 + 0x31) = *(char *)(param_2 + 0xc1) != '\0';
  cVar1 = *(char *)(param_2 + 0xc2);
  param_1[0x2d] = 0;
  *(bool *)((int)param_1 + 0xc5) = cVar1 != '\0';
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  return param_1;
}

