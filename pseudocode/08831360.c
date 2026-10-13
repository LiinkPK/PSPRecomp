/* Entry 0x08831360 | file offset 0x0002E338 | FUN_08831360 | bytes 808 */

void FUN_08831360(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = FUN_08838074();
  uVar2 = *(uint *)(param_1 + 0x380);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x380) = uVar2 & 0xffff7fff;
    uVar2 = uVar2 & 0xfffd7fff;
    *(uint *)(param_1 + 0x380) = uVar2;
  }
  if ((uVar2 & 0x10000) != 0) {
    uVar2 = uVar2 & 0xfffeffff;
    *(uint *)(param_1 + 0x380) = uVar2;
  }
  if ((uVar2 & 0x40000) != 0) {
    *(uint *)(param_1 + 0x380) = uVar2 & 0xfffbffff;
  }
  FUN_088474c8(param_1 + 0x3e4,param_1);
  iVar1 = FUN_08837948(param_1);
  if (iVar1 == 0) {
    FUN_08934114(*(undefined4 *)(param_1 + 0x3a4),param_1);
  }
  if (*(int *)(param_1 + 0x39c) != 0) {
    fVar5 = *(float *)(param_1 + 0x9c);
    fVar6 = *(float *)(param_1 + 800);
    if (fVar5 != fVar6) {
      fVar3 = (float)FUN_08838300(param_1);
      fVar4 = (float)FUN_0884e494(*(undefined4 *)(param_1 + 0x39c));
      fVar6 = fVar6 - fVar5;
      fVar3 = fVar4 * *(float *)(param_1 + 0x3d0) * fVar3;
      if ((fVar6 <= -3.1415927) || (3.1415927 <= fVar6)) {
        if (0.0 < fVar6) {
          fVar6 = (float)FUN_089941c0(fVar6 + 3.1415927,0x40c90fdb);
          fVar6 = fVar6 - 3.1415927;
        }
        else {
          fVar6 = (float)FUN_089941c0(3.1415927 - fVar6,0x40c90fdb);
          fVar6 = 3.1415927 - fVar6;
        }
      }
      if (fVar6 < -fVar3) {
        fVar5 = fVar5 + -fVar3;
      }
      else if (fVar3 < fVar6) {
        fVar5 = fVar5 + fVar3;
      }
      else {
        fVar5 = fVar5 + fVar6;
      }
      if ((fVar5 <= -3.1415927) || (3.1415927 <= fVar5)) {
        if (0.0 < fVar5) {
          fVar5 = (float)FUN_089941c0(fVar5 + 3.1415927,0x40c90fdb);
          fVar5 = fVar5 - 3.1415927;
        }
        else {
          fVar5 = (float)FUN_089941c0(3.1415927 - fVar5,0x40c90fdb);
          fVar5 = 3.1415927 - fVar5;
        }
      }
      FUN_08835b3c(fVar5,param_1);
    }
  }
  if ((*(uint *)(param_1 + 0x380) & 4) != 0) {
    *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) & 0xfffffffb;
  }
  if (((*(uint *)(param_1 + 900) & 0x20) != 0) && (iVar1 = FUN_08838160(param_1), iVar1 == 0)) {
    *(uint *)(param_1 + 900) = *(uint *)(param_1 + 900) & 0xffffffdf;
  }
  if (*(int *)(param_1 + 0x52c) != 0) {
    FUN_08842c30(*(int *)(param_1 + 0x52c),param_1);
  }
  if (*(int *)(param_1 + 0x310) != 0) {
    FUN_0883f050(*(int *)(param_1 + 0x310),param_1);
  }
  if ((*(int *)(param_1 + 0x530) != 0) &&
     ((*(char *)(*(int *)(param_1 + 0x530) + 0x1c) != '\0' ||
      ((*(byte *)(param_1 + 0x197) & 2) == 0)))) {
    FUN_088745a4();
    *(undefined4 *)(param_1 + 0x530) = 0;
  }
  return;
}

