/* Entry 0x088922C8 | file offset 0x0008F2A0 | FUN_088922c8 | bytes 336 */

void FUN_088922c8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_30 [16];
  
  if (*(char *)(param_1 + 0x6d0) != '\0') {
    fVar6 = *(float *)(param_1 + 0x700);
    fVar5 = *(float *)(param_1 + 0x704) + *(float *)(DAT_089d69e0 + 0x18);
    *(float *)(param_1 + 0x704) = fVar5;
    if (fVar6 <= fVar5) {
      *(float *)(param_1 + 0x704) = fVar6;
      *(undefined1 *)(param_1 + 0x6d0) = 0;
    }
    uVar4 = FUN_089a4724(*(float *)(param_1 + 0x704) / fVar6,0);
    uVar4 = FUN_089a474c(uVar4,0x3f800000);
    FUN_089a4a80(uVar4,auStack_30,param_1 + 0x6f0,param_1 + 0x6e0);
    uVar4 = FUN_089a48cc(auStack_30);
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    FUN_089ad2d0(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0xc),uVar4);
    if (*(char *)(param_1 + 0x610) != '\0') {
      iVar1 = FUN_08895420(param_1 + 0x4e0);
      iVar2 = FUN_08895428(param_1 + 0x4e0);
      if (iVar1 != 0) {
        uVar4 = FUN_089a48cc(auStack_30);
        *(undefined4 *)(iVar2 + 0x44) = uVar4;
        FUN_089ad2d0(*(undefined4 *)(iVar1 + 0xc),uVar4);
      }
    }
    iVar1 = 0;
    param_1 = param_1 + 0x140;
    do {
      iVar2 = FUN_08895420(param_1);
      iVar3 = FUN_08895428(param_1);
      if (iVar2 != 0) {
        uVar4 = FUN_089a48cc(auStack_30);
        *(undefined4 *)(iVar3 + 0x44) = uVar4;
        FUN_089ad2d0(*(undefined4 *)(iVar2 + 0xc),uVar4);
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 0x130;
    } while (iVar1 < 3);
  }
  return;
}

