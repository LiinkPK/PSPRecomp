/* Entry 0x088CC914 | file offset 0x000C98EC | FUN_088cc914 | bytes 248 */

void FUN_088cc914(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((iVar1 != 0) && (iVar2 != 0)) && (iVar2 != 0)) {
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xffff7fff;
    if (*(int *)(iVar2 + 0x54) == 0) {
      *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar2 + 0x4c);
      uVar4 = *(undefined4 *)(iVar2 + 0x54);
      iVar3 = *(int *)(iVar2 + 0x4c);
    }
    else {
      *(undefined4 *)(*(int *)(iVar2 + 0x54) + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
      uVar4 = *(undefined4 *)(iVar2 + 0x54);
      iVar3 = *(int *)(iVar2 + 0x4c);
    }
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x34) = uVar4;
    }
    else {
      *(undefined4 *)(iVar3 + 0x54) = uVar4;
    }
    *(undefined4 *)(iVar2 + 0x54) = 0;
    *(undefined4 *)(iVar2 + 0x4c) = 0;
    *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + -1;
    iVar2 = *(int *)(param_1 + 0xc);
  }
  if (iVar2 != 0) {
    FUN_0887ba5c(iVar2);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_088da060(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_088dab44();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_088cc904(param_1);
  return;
}

