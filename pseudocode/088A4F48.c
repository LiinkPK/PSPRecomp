/* Entry 0x088A4F48 | file offset 0x000A1F20 | FUN_088a4f48 | bytes 124 */

undefined4 FUN_088a4f48(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_089d6d60 == 0) {
    iVar2 = *(int *)(DAT_089d6d58 + 0x1500) + -1;
    if (*(int *)(DAT_089d6d58 + 0x1500) < 1) {
      uVar1 = 0;
    }
    else {
      *(int *)(DAT_089d6d58 + 0x1500) = iVar2;
      uVar1 = *(undefined4 *)(DAT_089d6d58 + iVar2 * 4 + 0x1400);
    }
  }
  else {
    uVar1 = FUN_0885c6cc(DAT_089d6d60,param_1,0,0,1,0);
  }
  return uVar1;
}

