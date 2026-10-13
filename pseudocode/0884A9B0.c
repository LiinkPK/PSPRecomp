/* Entry 0x0884A9B0 | file offset 0x00047988 | FUN_0884a9b0 | bytes 240 */

void FUN_0884a9b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  uVar1 = FUN_08899300();
  fVar5 = *(float *)(param_1 + 0x120) - DAT_089d5eac;
  *(float *)(param_1 + 0x120) = fVar5;
  if ((fVar5 <= 0.0) || (iVar2 = FUN_0889877c(uVar1,(int)*(short *)(param_1 + 0x12e)), iVar2 == 0))
  {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  else {
    uVar3 = FUN_088931dc(DAT_089d6ac8,(int)*(short *)(param_1 + 0x12e));
    uVar4 = uVar3;
    if ((*(float *)(param_1 + 0x120) < 120.0) &&
       (uVar4 = (int)((*(float *)(param_1 + 0x120) / 120.0) * 255.0) & 0xff, (int)uVar3 < (int)uVar4
       )) {
      uVar4 = uVar3;
    }
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    else if (0xff < (int)uVar4) {
      uVar4 = 0xff;
    }
    *(uint *)(param_1 + 0x124) = uVar4;
  }
  return;
}

