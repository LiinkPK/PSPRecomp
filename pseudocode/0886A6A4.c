/* Entry 0x0886A6A4 | file offset 0x0006767C | FUN_0886a6a4 | bytes 528 */

void FUN_0886a6a4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (((*(int *)(param_1 + 0x88) == 0) && (uVar2 = *(uint *)(param_1 + 0x90), (uVar2 & 0x40) == 0))
     && (*(uint *)(param_1 + 0x90) = uVar2 | 0x40, (uVar2 & 0x20) == 0)) {
    if ((uVar2 & 0x10) == 0) {
      if (((uVar2 & 4) == 0) ||
         (iVar1 = FUN_089b0720(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),4), iVar1 != 0)) {
        if (((*(uint *)(param_1 + 0x90) & 8) == 0) ||
           (iVar1 = FUN_089b0720(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),8), iVar1 != 0)) {
          *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x20;
        }
        else {
          FUN_089b0bac(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8));
        }
      }
      else {
        FUN_089b0bac(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8));
      }
    }
    else if (*(char *)(DAT_089d5ec0 + 0x2ccf) == '\0') {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
      if ((uVar2 & 4) != 0) {
        iVar1 = FUN_089b0720(uVar3,4);
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
        if (iVar1 == 0) {
          FUN_089b0bac(uVar3);
          return;
        }
      }
      iVar1 = FUN_089b0720(uVar3,1);
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
      if (iVar1 == 0) {
        FUN_089b0bac(uVar3);
      }
      else {
        if ((*(uint *)(param_1 + 0x90) & 8) != 0) {
          iVar1 = FUN_089b0720(uVar3,8);
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
          if (iVar1 == 0) {
            FUN_089b0bac(uVar3);
            return;
          }
        }
        iVar1 = FUN_089b0720(uVar3,2);
        if (iVar1 == 0) {
          FUN_089b0bac(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8));
        }
        else {
          *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x20;
        }
      }
    }
  }
  return;
}

