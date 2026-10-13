/* Entry 0x08823410 | file offset 0x000203E8 | FUN_08823410 | bytes 592 */

void FUN_08823410(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar5 = 0;
  if (0 < (int)(((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80)) {
    iVar4 = 0;
    do {
      if (((*(byte *)(*(int *)(param_1 + 0x28) + iVar5 * 0x110 + iVar4 * 0x10 + 299) & 1) == 0) &&
         ((*(byte *)(*(int *)(param_1 + 0x28) + iVar5 * 0x130 + 299) & 2) != 0)) {
        iVar4 = 0;
        bVar1 = false;
        if ((*(byte *)(*(int *)(param_1 + 0x28) + iVar5 * 0x130 + 0x12a) & 0x3f) != 0) {
          do {
            iVar3 = (int)*(short *)(*(int *)(param_1 + 0x2c) +
                                    (((int)*(char *)(*(int *)(param_1 + 0x28) + iVar5 * 0x130 +
                                                    0x129) & 0x7fU) + iVar4) * 0x80 + 0x7c);
            if (iVar3 != -1) {
              uVar2 = FUN_08899300();
              iVar3 = FUN_0889877c(uVar2,iVar3);
              if (iVar3 != 1) {
                bVar1 = true;
                break;
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)((int)*(char *)(*(int *)(param_1 + 0x28) + iVar5 * 0x130 + 0x12a) &
                                0x3fU));
        }
        if (bVar1) {
          FUN_08823394(param_1);
          iVar4 = iVar5 * 0x130;
          iVar3 = *(int *)(param_1 + 0x28) + iVar4;
          *(byte *)(iVar3 + 299) = *(byte *)(iVar3 + 299) & 0xfd;
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          local_24 = 0x3f800000;
          FUN_089a3868(*(int *)(param_1 + 0x28) + iVar4 + 0xa0,&local_30);
          *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar4 + 0x11c) = 0;
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar5 * 2;
    } while (iVar5 < (int)(((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80));
  }
  return;
}

