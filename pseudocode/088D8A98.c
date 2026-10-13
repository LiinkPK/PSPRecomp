/* Entry 0x088D8A98 | file offset 0x000D5A70 | FUN_088d8a98 | bytes 192 */

void FUN_088d8a98(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0887a4c4(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 != 0) && (iVar1 != 0)) && (iVar1 != 0)) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffff7fff;
    if (*(int *)(iVar1 + 0x54) == 0) {
      *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar1 + 0x4c);
      uVar4 = *(undefined4 *)(iVar1 + 0x54);
      iVar3 = *(int *)(iVar1 + 0x4c);
    }
    else {
      *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
      uVar4 = *(undefined4 *)(iVar1 + 0x54);
      iVar3 = *(int *)(iVar1 + 0x4c);
    }
    if (iVar3 == 0) {
      *(undefined4 *)(iVar2 + 0x34) = uVar4;
    }
    else {
      *(undefined4 *)(iVar3 + 0x54) = uVar4;
    }
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + -1;
  }
  FUN_0887a354(param_1 + 8);
  return;
}

