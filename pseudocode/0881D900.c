/* Entry 0x0881D900 | file offset 0x0001A8D8 | FUN_0881d900 | bytes 692 */

void FUN_0881d900(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  undefined1 auStack_50 [16];
  int local_40;
  int local_3c;
  
  iVar2 = *(int *)(param_1 + 0x70);
  if ((iVar2 == 0) ||
     (iVar2 = (**(code **)(*(int *)(iVar2 + 0x544) + 0x144))
                        (iVar2 + *(short *)(*(int *)(iVar2 + 0x544) + 0x140)), iVar2 == 0)) {
    iVar2 = FUN_08842164();
    *(int *)(param_1 + 0x70) = iVar2;
    if (iVar2 == 0) {
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 0x70);
  uVar4 = *(int *)(param_1 + 0x74) + 1;
  uVar3 = uVar4 & 1;
  if ((int)uVar4 < 0) {
    uVar3 = -uVar3;
  }
  *(uint *)(param_1 + 0x74) = uVar3;
  if (uVar3 == 0) {
    FUN_089a3868(param_1 + 0x80,iVar2 + 0x100);
  }
  else {
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x544) + 0x134))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x544) + 0x130));
    if (iVar2 == 0) {
      return;
    }
    FUN_089a3868(param_1 + 0x80,iVar2 + 0x100);
  }
  iVar5 = param_1 + 0x80;
  iVar2 = param_1 + 0xc0;
  local_3c = param_1 + 0xf0;
  local_40 = param_1 + 0xa0;
  uVar1 = FUN_0885ea90(DAT_089d5ec0 + 0x720);
  FUN_089a3868(iVar2,uVar1);
  if (*(int *)(param_1 + 0x74) == 1) {
    FUN_089a38fc(auStack_50,iVar2,iVar5);
    fVar6 = (float)FUN_089a3bf8(auStack_50);
    if (10.0 < fVar6) {
      FUN_089a3bc8(auStack_50,auStack_50);
      FUN_089a3a64(0x41200000,iVar2,auStack_50);
      FUN_089a38c4(iVar2,iVar2,iVar5);
    }
  }
  fVar6 = (float)FUN_0887357c(DAT_089d5ec0 + 0x7e0);
  fVar6 = fVar6 * 1.7;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  *(float *)(param_1 + 0x90) = fVar6;
  *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xc0) - fVar6;
  *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xc4) - fVar6;
  *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 200) - fVar6;
  *(float *)(param_1 + 0xb0) = *(float *)(param_1 + 0xc0) + fVar6;
  *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xc4) + fVar6;
  *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 200) + fVar6;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  FUN_089a3ad4(param_1 + 0xd0,iVar5,iVar2);
  FUN_089a3ab8(param_1 + 0xe0,iVar5,iVar2);
  FUN_089a3ad4(local_3c,param_1 + 0xd0,local_40);
  FUN_089a3ab8(param_1 + 0x100,param_1 + 0xe0,param_1 + 0xb0);
  return;
}

