/* Entry 0x0898658C | file offset 0x00183564 | FUN_0898658c | bytes 316 */

undefined4 FUN_0898658c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *(undefined4 *)(param_2 + 0xb0);
  uVar4 = *(undefined4 *)
           (*(int *)(param_2 + 0x8c) +
            (uint)*(ushort *)
                   (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                   (*(int *)(*(int *)(param_2 + 0x90) + 4) + *(int *)(param_1 + 0xbc)) * 2) + 0x60);
  iVar2 = *(int *)(param_1 + 0x2c) * 2;
  iVar1 = FUN_08974a3c(uVar3,*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x1c) = iVar1;
    iVar1 = FUN_08974a3c(uVar3,iVar2);
    *(int *)(param_1 + 0x40) = iVar1;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_08935524(iVar1,*(undefined4 *)(param_1 + 0x28),iVar2);
      iVar2 = FUN_0896a114(uVar4);
      if (iVar2 == 0) {
        FUN_08987bbc(param_1,param_2);
      }
      else {
        FUN_08987848(param_1,param_2,param_3);
      }
      FUN_08987e60(param_1,param_2);
      if (*(char *)(param_1 + 0xc0) != '\0') {
        FUN_089883e4(param_1,param_2);
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

