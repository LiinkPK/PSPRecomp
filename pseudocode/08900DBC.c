/* Entry 0x08900DBC | file offset 0x000FDD94 | FUN_08900dbc | bytes 164 */

undefined4 FUN_08900dbc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 auStack_50 [16];
  int local_10;
  
  iVar1 = FUN_089019e8(auStack_50,0x10,*param_1,param_1[1],((int)param_1[6] / 10) * 10);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = sceKernelGetSystemTimeLow();
    local_10 = iVar2 * 0x343fd + 0x269ec3;
    uVar3 = auStack_50[(int)(local_10 >> 0x10 & 0x7fffU) % iVar1];
  }
  return uVar3;
}

