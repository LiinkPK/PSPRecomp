/* Entry 0x08929148 | file offset 0x00126120 | FUN_08929148 | bytes 156 */

int FUN_08929148(void)

{
  int iVar1;
  int iVar2;
  int local_30 [9];
  
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  iVar1 = FUN_089292c0(local_30,8,0,0);
  iVar2 = sceKernelGetSystemTimeLow();
  local_30[8] = iVar2 * 0x343fd + 0x269ec3;
  return local_30[(int)(local_30[8] >> 0x10 & 0x7fffU) % iVar1];
}

