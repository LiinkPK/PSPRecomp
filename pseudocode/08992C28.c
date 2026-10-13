/* Entry 0x08992C28 | file offset 0x0018FC00 | FUN_08992c28 | bytes 664 */

undefined4 FUN_08992c28(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  undefined4 uVar6;
  int local_20;
  int local_1c;
  undefined1 auStack_18 [4];
  
  uVar6 = 1;
  uVar1 = *(int *)(param_1 + 0x30) - param_2;
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 0x1000;
  }
  do {
    if ((*(uint *)(param_1 + 0x2c) & 1) == 0) {
      uVar2 = *(uint *)(param_1 + 0x2c);
LAB_08992c84:
      if ((uVar2 & 0xc) != 0) {
        iVar3 = *(int *)(param_1 + 4);
        goto LAB_08992c94;
      }
LAB_08992c9c:
      if ((*(uint *)(param_1 + 0x2c) & 0x20) != 0) {
        FUN_08935828(*(undefined4 *)(param_1 + 0x34),0,0x4000);
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      uVar6 = 0;
      break;
    }
    if ((*(uint *)(param_1 + 0x2c) & 2) != 0) {
      uVar2 = *(uint *)(param_1 + 0x2c);
      goto LAB_08992c84;
    }
    iVar3 = *(int *)(param_1 + 4);
LAB_08992c94:
    if (iVar3 < 0) goto LAB_08992c9c;
    if (0x800U - param_3 <= uVar1) break;
    if ((*(uint *)(param_1 + 0x2c) & 0x10) != 0) {
      FUN_08992bb0(param_1);
    }
    iVar3 = sceAtracDecodeData(*(undefined4 *)(param_1 + 4),
                               *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x30) * 4,&local_20,
                               &local_1c,param_1 + 0x38);
    if (iVar3 < 0) {
      sceAtracGetInternalErrorInfo(*(undefined4 *)(param_1 + 4),auStack_18);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      break;
    }
    if (local_1c != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0x20;
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN_08992bb0(param_1);
    }
    uVar1 = *(int *)(param_1 + 0x30) + local_20;
    *(uint *)(param_1 + 0x30) = uVar1;
    if (0xfff < uVar1) {
      if (0x17ff < *(uint *)(param_1 + 0x30)) {
        *(undefined4 *)(param_1 + 0x30) = 0x1000;
      }
      iVar3 = *(int *)(param_1 + 0x30) + -0x1000;
      *(int *)(param_1 + 0x30) = iVar3;
      FUN_08935524(*(int *)(param_1 + 0x34),*(int *)(param_1 + 0x34) + 0x4000,iVar3 * 4);
    }
    uVar1 = *(int *)(param_1 + 0x30) - param_2;
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 + 0x1000;
    }
  } while ((int)uVar1 < param_3);
  if ((*(uint *)(param_1 + 0x2c) & 0xc) != 0) {
    FUN_08992918(param_1,param_2,param_3);
  }
  if (((*(float *)(param_1 + 0x28) < 1.0) && ((*(uint *)(param_1 + 0x2c) & 0x40) == 0)) &&
     (iVar3 = 0, 0 < param_3)) {
    do {
      iVar4 = param_2 + iVar3;
      psVar5 = (short *)(*(int *)(param_1 + 0x34) + iVar4 * 4);
      iVar3 = iVar3 + 1;
      *psVar5 = (short)(int)((float)(int)*psVar5 * *(float *)(param_1 + 0x28));
      psVar5 = (short *)(*(int *)(param_1 + 0x34) + (iVar4 * 2 + 1) * 2);
      *psVar5 = (short)(int)((float)(int)*psVar5 * *(float *)(param_1 + 0x28));
    } while (iVar3 < param_3);
  }
  return uVar6;
}

