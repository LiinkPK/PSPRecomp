/* Entry 0x0884C0BC | file offset 0x00049094 | FUN_0884c0bc | bytes 672 */

void FUN_0884c0bc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_50 [16];
  float local_40;
  
  iVar1 = 0;
  iVar2 = 0;
  while (iVar1 = FUN_08841f84(iVar1), iVar1 != 0) {
    FUN_0884b7a0(iVar1 + 0x76c);
  }
  while (iVar2 = FUN_08842068(iVar2), iVar2 != 0) {
    FUN_0884b7a0(iVar2 + 0x5d8);
  }
  iVar1 = *(int *)(param_1 + 0x2584);
  iVar2 = *(int *)(param_1 + 0x2580);
  iVar3 = 0;
  if (0 < iVar2) {
    fVar6 = 0.0;
    do {
      iVar2 = param_1 + iVar1 * 0x40;
      if ((fVar6 < *(float *)(param_1 + iVar1 * 0x40 + 0x34)) &&
         (fVar5 = *(float *)(iVar2 + 0x34) - DAT_089d5eac, *(float *)(iVar2 + 0x34) = fVar5,
         fVar6 <= fVar5)) {
        fVar5 = DAT_089d5eac / 60.0;
        local_40 = fVar6;
        FUN_089a3868(iVar2 + 0x20,iVar2);
        iVar4 = iVar2 + 0x10;
        FUN_089a3a44(fVar5,auStack_50,iVar4);
        FUN_089a38a8(iVar2,iVar2,auStack_50);
        *(float *)(iVar2 + 4) = *(float *)(iVar2 + 4) - fVar5 * 4.9 * fVar5;
        *(float *)(iVar2 + 0x14) =
             *(float *)(iVar2 + 0x14) - *(float *)(*(int *)(iVar2 + 0x3c) + 0x38) * 9.8 * fVar5;
        FUN_089a3a44((*(float *)(*(int *)(iVar2 + 0x3c) + 0x3c) -
                     *(float *)(*(int *)(iVar2 + 0x3c) + 0x40)) * fVar5 * 30.0 + 1.0,iVar4,iVar4);
        fVar6 = local_40;
      }
      iVar1 = iVar1 + 1;
      if (0x95 < iVar1) {
        iVar1 = 0;
      }
      iVar2 = *(int *)(param_1 + 0x2580);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
    iVar1 = *(int *)(param_1 + 0x2584);
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (0.0 < *(float *)(param_1 + iVar1 * 0x40 + 0x34)) break;
      FUN_0884c4a8(DAT_089d4d80,param_1 + iVar1 * 0x40);
      iVar1 = iVar1 + 1;
      *(int *)(param_1 + 0x2580) = *(int *)(param_1 + 0x2580) + -1;
      if (0x95 < iVar1) {
        iVar1 = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  *(int *)(param_1 + 0x2584) = iVar1;
  return;
}

