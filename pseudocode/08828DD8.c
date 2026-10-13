/* Entry 0x08828DD8 | file offset 0x00025DB0 | FUN_08828dd8 | bytes 180 */

undefined4 FUN_08828dd8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = FUN_08828e8c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_08899300();
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar4 = 0;
      do {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar4);
        if (puVar3[1] != 0) {
          FUN_088981b4(uVar2,*puVar3,0,1);
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 8;
      } while (iVar1 < *(int *)(param_1 + 0xc));
    }
    uVar2 = 0;
  }
  return uVar2;
}

