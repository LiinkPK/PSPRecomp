/* Entry 0x0894A674 | file offset 0x0014764C | FUN_0894a674 | bytes 196 */

void FUN_0894a674(int param_1,int param_2)

{
  short sVar1;
  
  if (((uint)*(ushort *)(param_1 + 0x24) & 1 << (**(uint **)(param_2 + 0x1d0) >> 0x1c)) == 0) {
    sVar1 = *(short *)(param_2 + 10);
  }
  else {
    sVar1 = 1;
  }
  if (sVar1 == 0) {
    FUN_08944f7c(param_1,param_2);
    *(undefined1 *)(param_1 + 0x94) = 7;
    FUN_0894a7ac(param_1,param_2,7,1);
    FUN_0894a2ac(param_1,param_2,1);
    *(undefined1 *)(param_1 + 0x94) = 8;
    FUN_0894a7ac(param_1,param_2,2,1);
  }
  return;
}

