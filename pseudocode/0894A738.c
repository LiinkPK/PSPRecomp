/* Entry 0x0894A738 | file offset 0x00147710 | FUN_0894a738 | bytes 116 */

void FUN_0894a738(int param_1,int param_2)

{
  short sVar1;
  
  if (((uint)*(ushort *)(param_1 + 0x24) & 1 << (**(uint **)(param_2 + 0x1d0) >> 0x1c)) == 0) {
    sVar1 = *(short *)(param_2 + 10);
  }
  else {
    sVar1 = 1;
  }
  if (sVar1 == 0) {
    FUN_0894a7ac(param_1,param_2,8,1);
  }
  return;
}

