/* Entry 0x08949E2C | file offset 0x00146E04 | FUN_08949e2c | bytes 612 */

void FUN_08949e2c(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  
  DAT_09b6f478 = param_1;
  if ((*(ushort *)(param_3 + 2) & 8) == 0) {
    if (((uint)*(ushort *)(param_1 + 0x24) & 1 << (**(uint **)(param_2 + 0x1d0) >> 0x1c)) == 0) {
      sVar3 = *(short *)(param_2 + 10);
    }
    else {
      sVar3 = 1;
    }
    if ((sVar3 == 0) && (*(short *)(param_2 + 0xe) == 0)) {
      fVar10 = *(float *)(param_3 + 0x30);
      *(int *)(param_1 + 0x88) = param_2;
      iVar2 = FUN_08944f7c(param_1,param_2);
      if (iVar2 != 0) {
        FUN_0896fbc0();
      }
      if (*(char *)(param_2 + 1) == '\x01') {
        FUN_089a0be4((int)*(float *)(param_2 + 0x194),(int)*(float *)(param_2 + 0x198));
        FUN_089a03dc(7);
        iVar2 = *(int *)(param_3 + 0x40);
      }
      else if (*(short *)(param_2 + 0x1e0) == 0) {
        FUN_089a03dc(7);
        iVar2 = *(int *)(param_3 + 0x40);
      }
      else {
        FUN_089a0384(7);
        iVar2 = *(int *)(param_3 + 0x40);
      }
      puVar8 = *(ushort **)(iVar2 + 0x2c);
      *(int *)(param_1 + 0x8c) = param_3;
      iVar7 = 0;
      if (*(char *)(iVar2 + 0x15) != '\0') {
        do {
          iVar4 = (uint)*puVar8 * 4;
          puVar5 = *(ushort **)(*(int *)(iVar2 + 0x1c) + iVar4);
          uVar1 = *puVar5;
          if (param_4 == 0) {
            if (((&DAT_089d99e0)[uVar1] & 1) != 0) {
              *(ushort **)(param_1 + 0x90) = puVar5;
              goto LAB_08949fd8;
            }
          }
          else if (((&DAT_089d99e0)[uVar1] & 1) == 0) {
            *(ushort **)(param_1 + 0x90) = puVar5;
LAB_08949fd8:
            iVar6 = *(int *)(*(int *)(param_3 + 0x4c) + iVar4);
            fVar9 = fVar10;
            if (iVar6 != 0) {
              fVar9 = fVar10 - (float)(int)*(short *)(iVar6 + 4);
            }
            iVar6 = **(int **)(&DAT_089d95d0 + (uint)uVar1 * 4);
            (**(code **)(iVar6 + 0x24))
                      (fVar9,(int)*(int **)(&DAT_089d95d0 + (uint)uVar1 * 4) +
                             (int)*(short *)(iVar6 + 0x20),param_1,
                       *(undefined4 *)(*(int *)(param_3 + 0x48) + iVar4),
                       *(int *)(param_3 + 0x44) + (uint)puVar5[1]);
          }
          iVar7 = iVar7 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar7 < (int)(uint)*(byte *)(iVar2 + 0x15));
      }
    }
  }
  return;
}

