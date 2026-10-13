/* Entry 0x0894A5B0 | file offset 0x00147588 | FUN_0894a5b0 | bytes 196 */

void FUN_0894a5b0(int param_1,int param_2)

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
    *(undefined1 *)(param_1 + 0x94) = 3;
    FUN_0894a7ac(param_1,param_2,7,0);
    FUN_0894a2ac(param_1,param_2,0);
    *(undefined1 *)(param_1 + 0x94) = 4;
    FUN_0894a7ac(param_1,param_2,2,0);
  }
  return;
}

