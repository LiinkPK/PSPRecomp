/* Entry 0x089918C0 | file offset 0x0018E898 | FUN_089918c0 | bytes 1184 */

int FUN_089918c0(float param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float local_60;
  float local_5c;
  int local_58;
  uint local_54;
  undefined4 local_50;
  
  iVar6 = -1;
  iVar7 = 0;
  uVar8 = 0xffffffff;
  uVar2 = 0;
  iVar1 = DAT_089da420;
  while (((*(char *)(iVar1 + 0x38) == '\0' || (iVar4 = *(int *)(iVar1 + 0x3c), param_2 < iVar4)) ||
         (iVar4 + *(int *)(iVar1 + 0x40) <= param_2))) {
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x10;
    if (0x13 < uVar2) {
LAB_08991980:
      if ((iVar7 == 0) || (iVar6 < 0)) {
        iVar1 = -1;
      }
      else {
        puVar5 = (uint *)(iVar7 + 0x20 + iVar6 * 0x20);
        local_58 = param_3;
        iVar1 = FUN_0899128c((char)puVar5[6]);
        if (iVar1 < 0) {
          iVar1 = -1;
        }
        else {
          uVar2 = *puVar5;
          if ((uVar2 & 0x200000) == 0) {
            if ((uVar2 & 0x10000000) != 0) {
              uVar2 = FUN_0899136c();
              puVar5 = puVar5 + ((((uVar2 & 0x7fff) * puVar5[2] >> 0xf) + puVar5[1]) - iVar6) * 8;
              uVar2 = *puVar5;
            }
            uVar3 = puVar5[1];
            if ((uVar2 & 0x100000) != 0) {
              puVar5 = puVar5 + (uVar3 - iVar6) * 8;
              uVar2 = *puVar5;
              uVar3 = puVar5[1];
            }
            uVar2 = (uint)((uVar2 & 0x10000) != 0);
            FUN_089a5194(iVar1,iVar7 + uVar3,puVar5[2],uVar2);
            fVar9 = (float)(ushort)puVar5[3];
            uVar3 = (uint)*(byte *)((int)puVar5 + 0x19);
            if (uVar3 != 0) {
              fVar10 = fVar9 * 2.0 - fVar9;
              local_54 = uVar2;
              uVar2 = FUN_0899136c();
              iVar6 = ((uVar2 & 0x7fff) * (uVar3 * 2 + 1) >> 0xf) - uVar3;
              if (iVar6 < 0) {
                fVar10 = fVar9 - fVar9 * 0.5;
              }
              fVar9 = (float)(ushort)puVar5[3] + fVar10 * 0.00390625 * (float)iVar6;
              uVar2 = local_54;
            }
            FUN_089a5144(iVar1,(int)((fVar9 / 44100.0) * 4096.0));
            FUN_089a51f0(iVar1,*(undefined2 *)((int)puVar5 + 0x12),(short)puVar5[5]);
            fVar9 = (float)*(ushort *)((int)puVar5 + 0xe);
            if (*(byte *)((int)puVar5 + 0x1a) != 0) {
              fVar10 = (float)*(byte *)((int)puVar5 + 0x1a) * 0.5;
              fVar11 = fVar10 + fVar9;
              if (100.0 < fVar11) {
                fVar9 = fVar9 - (fVar11 - 100.0);
                fVar11 = fVar10 + fVar9;
              }
              uVar3 = FUN_0899136c();
              iVar6 = ((uVar3 & 0x7fff) * (int)((fVar11 - (fVar9 - fVar10)) + 1.0) >> 0xf) +
                      (int)(fVar9 - fVar10);
              fVar9 = (float)iVar6;
              if (iVar6 < 0) {
                fVar9 = fVar9 + 4.2949673e+09;
              }
            }
            iVar6 = local_58;
            local_5c = 0.0;
            local_60 = param_1;
            local_50 = param_5;
            FUN_089912c8(&local_60,&local_5c);
            fVar9 = fVar9 / 100.0;
            fVar10 = (float)iVar6;
            iVar4 = (int)(fVar10 * local_60 * fVar9);
            iVar12 = (int)(fVar10 * local_5c * fVar9);
            iVar6 = (int)(fVar10 * ((float)(ushort)puVar5[4] / 100.0) * fVar9);
            FUN_089a50e0(iVar1,iVar4,iVar12,iVar6,iVar6);
            sceKernelWaitSema(*(undefined4 *)(DAT_089da420 + 0x2c),1,0);
            iVar6 = DAT_089da420;
            iVar7 = DAT_089da420 + iVar1 * 0x3c;
            *(undefined4 *)(iVar7 + 0x178) = 1;
            *(int *)(iVar7 + 0x180) = iVar4;
            *(int *)(iVar7 + 0x184) = iVar12;
            *(int *)(iVar7 + 0x174) = param_2;
            *(undefined4 *)(iVar7 + 0x17c) = 0;
            *(uint *)(iVar7 + 0x194) = (uint)*(ushort *)((int)puVar5 + 0xe);
            uVar3 = puVar5[4];
            *(uint *)(iVar7 + 0x19c) = uVar8;
            *(uint *)(iVar7 + 0x198) = (uint)(ushort)uVar3;
            *(undefined4 *)(iVar7 + 0x1a0) = param_4;
            *(undefined4 *)(iVar7 + 0x1a4) = local_50;
            *(bool *)(iVar7 + 0x1a8) = uVar2 == 1;
            *(float *)(iVar7 + 0x1ac) = (float)(ushort)puVar5[3];
            sceKernelSignalSema(*(undefined4 *)(iVar6 + 0x2c),1);
          }
          else {
            iVar1 = 0x100;
          }
        }
      }
      return iVar1;
    }
  }
  iVar7 = *(int *)(iVar1 + 0x34);
  iVar6 = param_2 - iVar4;
  uVar8 = uVar2;
  goto LAB_08991980;
}

