/* Entry 0x088E9474 | file offset 0x000E644C | FUN_088e9474 | bytes 140 */

void FUN_088e9474(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_088d7684(param_1 + 0x1874);
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 4);
    uVar2 = FUN_088d7684(param_1 + 0x1874);
    FUN_088825d4(uVar3,uVar2);
  }
  iVar1 = FUN_088ce724(param_1 + 0x1af0);
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 4);
    uVar2 = FUN_088ce724(param_1 + 0x1af0);
    FUN_088825d4(uVar3,uVar2);
  }
  return;
}

