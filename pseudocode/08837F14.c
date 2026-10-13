/* Entry 0x08837F14 | file offset 0x00034EEC | FUN_08837f14 | bytes 88 */

void FUN_08837f14(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x49c);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = FUN_08934944(param_2,iVar2 + 8,*(undefined4 *)(iVar2 + 4),0x44,&LAB_08830fac);
  }
  if (iVar1 == 0) {
    FUN_0880be84(param_2);
  }
  return;
}

