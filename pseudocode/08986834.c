/* Entry 0x08986834 | file offset 0x0018380C | FUN_08986834 | bytes 416 */

undefined4 FUN_08986834(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = *(undefined4 *)(param_2 + 0xb0);
  uVar5 = *(undefined4 *)
           (*(int *)(param_2 + 0x8c) +
            (uint)*(ushort *)
                   (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                   (*(int *)(*(int *)(param_2 + 0x90) + 4) + *(int *)(param_1 + 0xbc)) * 2) + 0x60);
  iVar3 = *(int *)(param_1 + 0x34) * 2;
  iVar1 = FUN_08974a3c(uVar4,*(undefined4 *)(param_1 + 0x24));
  if (iVar1 != 0) {
    uVar2 = FUN_08974a3c(*(undefined4 *)(param_2 + 0xb0),*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    uVar2 = FUN_08974a3c(uVar4,iVar3);
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    uVar2 = FUN_08974a3c(uVar4,iVar3);
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    uVar4 = FUN_08974a3c(uVar4,iVar3);
    *(undefined4 *)(param_1 + 0x48) = uVar4;
    if (((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_1 + 0x40) != 0)) &&
       (*(int *)(param_1 + 0x48) != 0)) {
      FUN_08935524(*(int *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x30),iVar3);
      FUN_08935524(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x28),iVar3);
      FUN_08935524(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x38),iVar3);
      iVar3 = FUN_0896a114(uVar5);
      if (iVar3 == 0) {
        FUN_08987bbc(param_1,param_2);
      }
      else {
        FUN_08987848(param_1,param_2,param_3);
      }
      FUN_08987e60(param_1,param_2);
      if (*(char *)(param_1 + 0xc0) != '\0') {
        FUN_089883e4(param_1,param_2);
      }
    }
  }
  return 0;
}

