/* Entry 0x0885C648 | file offset 0x00059620 | FUN_0885c648 | bytes 132 */

int FUN_0885c648(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  FUN_0885c620();
  piVar1 = (int *)(param_1 + 0x14);
  while( true ) {
    if (piVar1 == (int *)*(int *)(param_1 + 4)) {
      return 0;
    }
    uVar2 = (uint)*(byte *)(piVar1 + 3);
    if (param_2 == (int)piVar1 + (uVar2 + 0xf & ~(uVar2 - 1))) break;
    piVar1 = (int *)*piVar1;
  }
  return piVar1[2] - (uVar2 + 0xf & ~(uVar2 - 1));
}

