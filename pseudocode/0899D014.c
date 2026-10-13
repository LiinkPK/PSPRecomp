/* Entry 0x0899D014 | file offset 0x00199FEC | FUN_0899d014 | bytes 588 */

undefined4 FUN_0899d014(int param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar5 = *(uint *)(param_1 + 8);
    uVar1 = 1;
    if (uVar5 != 0) {
      puVar4 = (uint *)*param_2;
      uVar1 = 0;
      if (puVar4 + 0xb <= param_3) {
        if ((uVar5 & 2) != 0) {
          if ((uVar5 & 1) == 0) {
            *puVar4 = 0xc8000000;
            *param_2 = puVar4 + 1;
          }
          else {
            fVar6 = *(float *)(param_1 + 0x40);
            *param_2 = puVar4 + 1;
            uVar7 = (uint)(fVar6 * 16.0);
            if (0x7f < (int)uVar7) {
              uVar7 = 0x7f;
            }
            if ((int)uVar7 < -0x80) {
              uVar7 = 0xffffff80;
            }
            *puVar4 = (uVar7 & 0xff) << 0x10 | 0xc8000001;
          }
        }
        if ((uVar5 & 4) != 0) {
          puVar4 = (uint *)(param_1 + 0x20);
          if ((*(uint *)(param_1 + 4) & 0x20) == 0) {
            puVar4 = &DAT_089d13d0;
          }
          uVar9 = puVar4[1];
          uVar8 = puVar4[3];
          uVar7 = puVar4[2];
          puVar2 = (uint *)*param_2;
          *puVar2 = *puVar4 >> 8 | 0x4a000000;
          puVar2[1] = uVar9 >> 8 | 0x4b000000;
          puVar2[2] = uVar7 >> 8 | 0x48000000;
          puVar2[3] = uVar8 >> 8 | 0x49000000;
          *param_2 = puVar2 + 4;
        }
        if ((uVar5 & 0x100) != 0) {
          iVar3 = *(int *)(param_1 + 0x70) * 0x10;
          uVar7 = *(uint *)(&DAT_089d13ec + iVar3);
          puVar4 = (uint *)*param_2;
          *puVar4 = *(int *)(&DAT_089d13e0 + iVar3) << 8 | *(int *)(&DAT_089d13e8 + iVar3) << 4 |
                    *(uint *)(&DAT_089d13e4 + iVar3) | 0xdf000000;
          puVar4[1] = 0xe0ffffff;
          puVar4[2] = uVar7 & 0xffffff | 0xe1000000;
          *param_2 = puVar4 + 3;
        }
        if ((uVar5 & 0x200) != 0) {
          puVar4 = (uint *)*param_2;
          *puVar4 = *(int *)(param_1 + 0x78) << 8 | *(uint *)(param_1 + 0x74) | 0xc9000000;
          *param_2 = puVar4 + 1;
        }
        if ((uVar5 & 0x400) != 0) {
          puVar4 = (uint *)*param_2;
          *puVar4 = *(int *)(param_1 + 0x7c) << 8 | *(uint *)(param_1 + 0x80) | 0xc6000000;
          *param_2 = puVar4 + 1;
        }
        if ((uVar5 & 0x800) == 0) {
          uVar1 = 1;
        }
        else {
          puVar4 = (uint *)*param_2;
          *puVar4 = *(int *)(param_1 + 0x88) << 8 | *(uint *)(param_1 + 0x84) | 0xc7000000;
          *param_2 = puVar4 + 1;
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}

