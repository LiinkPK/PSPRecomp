/* Entry 0x0885A8B4 | file offset 0x0005788C | FUN_0885a8b4 | bytes 904 */

void FUN_0885a8b4(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_50 [16];
  
  if (((param_1[3] != 0) && (param_1[1] != 0)) && (*param_1 != 0)) {
    iVar5 = param_1[2];
    FUN_089a0bbc(6);
    FUN_0899d2f8(*param_1);
    FUN_089a12a4(0,2,10,0,0xffffffff);
    puVar1 = (undefined4 *)FUN_0885cd44(param_1[3] * 0x60);
    iVar4 = 0;
    if (0 < param_1[3]) {
      do {
        iVar3 = iVar5 * 0x30;
        iVar5 = iVar5 + 1;
        iVar3 = param_1[1] + iVar3;
        fVar7 = *(float *)(iVar3 + 0x10);
        if (0x27 < iVar5) {
          iVar5 = 0;
        }
        if (0.0 < fVar7) {
          fVar8 = *(float *)(iVar3 + 0x14);
          if ((fVar7 / fVar8) * 128.0 < 2.1474836e+09) {
            iVar2 = (int)((fVar7 / fVar8) * 128.0);
          }
          else {
            iVar2 = (int)((fVar7 / fVar8) * 128.0 - 2.1474836e+09) + -0x80000000;
          }
          fVar7 = *(float *)(iVar3 + 0x18);
          uVar6 = iVar2 << 0x18 | 0xffffff;
          fVar8 = -fVar7;
          FUN_089a383c(fVar8,0,fVar8,0,auStack_50);
          FUN_088684fc(*(undefined4 *)(iVar3 + 0x20),auStack_50,auStack_50);
          FUN_089a38a8(&local_60,iVar3,auStack_50);
          puVar1[3] = local_60;
          puVar1[4] = local_5c;
          *puVar1 = 0;
          puVar1[5] = local_58;
          puVar1[1] = 0;
          puVar1[2] = uVar6;
          FUN_089a383c(fVar7,0,fVar8,0,auStack_50);
          FUN_088684fc(*(undefined4 *)(iVar3 + 0x20),auStack_50,auStack_50);
          FUN_089a38a8(&local_60,iVar3,auStack_50);
          puVar1[9] = local_60;
          puVar1[10] = local_5c;
          puVar1[6] = 0x3f800000;
          puVar1[0xb] = local_58;
          puVar1[7] = 0;
          puVar1[8] = uVar6;
          FUN_089a383c(fVar8,0,fVar7,0,auStack_50);
          FUN_088684fc(*(undefined4 *)(iVar3 + 0x20),auStack_50,auStack_50);
          FUN_089a38a8(&local_60,iVar3,auStack_50);
          puVar1[0xf] = local_60;
          puVar1[0x10] = local_5c;
          puVar1[0xc] = 0;
          puVar1[0x11] = local_58;
          puVar1[0xd] = 0x3f800000;
          puVar1[0xe] = uVar6;
          FUN_089a383c(fVar7,0,fVar7,0,auStack_50);
          FUN_088684fc(*(undefined4 *)(iVar3 + 0x20),auStack_50,auStack_50);
          FUN_089a38a8(&local_60,iVar3,auStack_50);
          puVar1[0x15] = local_60;
          puVar1[0x16] = local_5c;
          puVar1[0x12] = 0x3f800000;
          puVar1[0x17] = local_58;
          puVar1[0x13] = 0x3f800000;
          puVar1[0x14] = uVar6;
          FUN_089a0520(4,0x19f,4,0,puVar1);
          puVar1 = puVar1 + 0x18;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1[3]);
    }
    FUN_089a0bbc(0);
  }
  return;
}

