/* Entry 0x08992918 | file offset 0x0018F8F0 | FUN_08992918 | bytes 664 */

void FUN_08992918(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  float fVar6;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 4) != 0) {
      fVar6 = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x24);
      *(float *)(param_1 + 0x20) = fVar6;
      if (fVar6 <= 1.0) {
        if (((uVar1 & 0x40) == 0) || (fVar6 < *(float *)(param_1 + 0x28))) {
          iVar3 = 0;
          if (0 < param_3) {
            iVar5 = param_2 * 4;
            iVar2 = (param_2 * 2 + 1) * 2;
            do {
              psVar4 = (short *)(*(int *)(param_1 + 0x34) + iVar5);
              iVar3 = iVar3 + 1;
              iVar5 = iVar5 + 4;
              *psVar4 = (short)(int)((float)(int)*psVar4 * *(float *)(param_1 + 0x20));
              psVar4 = (short *)(*(int *)(param_1 + 0x34) + iVar2);
              iVar2 = iVar2 + 4;
              *psVar4 = (short)(int)((float)(int)*psVar4 * *(float *)(param_1 + 0x20));
            } while (iVar3 < param_3);
          }
        }
        else {
          *(uint *)(param_1 + 0x2c) = uVar1 & 0xfffffff3;
          *(uint *)(param_1 + 0x2c) = uVar1 & 0xffffffb3;
        }
      }
      else {
        *(uint *)(param_1 + 0x2c) = uVar1 & 0xfffffff3;
        if ((uVar1 & 0x40) != 0) {
          *(uint *)(param_1 + 0x2c) = uVar1 & 0xffffffb3;
        }
      }
    }
  }
  else {
    fVar6 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x20) = fVar6;
    if (0.0 <= fVar6) {
      if (((uVar1 & 0x40) == 0) || (*(float *)(param_1 + 0x28) < fVar6)) {
        iVar3 = 0;
        if (0 < param_3) {
          iVar5 = param_2 * 4;
          iVar2 = (param_2 * 2 + 1) * 2;
          do {
            psVar4 = (short *)(*(int *)(param_1 + 0x34) + iVar5);
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + 4;
            *psVar4 = (short)(int)((float)(int)*psVar4 * *(float *)(param_1 + 0x20));
            psVar4 = (short *)(*(int *)(param_1 + 0x34) + iVar2);
            iVar2 = iVar2 + 4;
            *psVar4 = (short)(int)((float)(int)*psVar4 * *(float *)(param_1 + 0x20));
          } while (iVar3 < param_3);
        }
      }
      else {
        *(uint *)(param_1 + 0x2c) = uVar1 & 0xfffffff3;
        *(uint *)(param_1 + 0x2c) = uVar1 & 0xffffffb3;
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x30) - param_2;
      iVar3 = *(int *)(param_1 + 0x34);
      if (iVar5 < 0) {
        iVar5 = 0x1000 - param_2;
        FUN_08935828(iVar3,0,*(int *)(param_1 + 0x30) << 2);
        iVar3 = *(int *)(param_1 + 0x34);
      }
      FUN_08935828(iVar3 + param_2 * 4,0,iVar5 << 2);
      uVar1 = *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar1 & 0xfffffff3;
      *(uint *)(param_1 + 0x2c) = uVar1 & 0xffffffb3;
    }
  }
  return;
}

