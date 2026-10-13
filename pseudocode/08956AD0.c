/* Entry 0x08956AD0 | file offset 0x00153AA8 | FUN_08956ad0 | bytes 404 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dbbe4. Boundary still requires runtime validation. */

void FUN_08956ad0(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = *param_4;
  if ((iVar3 != 0) && ((*(ushort *)(*(int *)(param_2 + 0x8c) + 2) & 2) == 0)) {
    fVar6 = 0.0;
    fVar7 = 1.0;
    if (*(float *)(param_3 + 0x2c) <= 0.0) {
      fVar8 = 0.0;
    }
    else if (0.0 <= *(float *)(param_3 + 0x3c)) {
      fVar8 = -1.0;
    }
    else {
      fVar8 = *(float *)(param_3 + 0x2c) / -*(float *)(param_3 + 0x3c);
    }
    *(float *)(iVar3 + 4) = fVar8;
    uVar2 = *(ushort *)(param_3 + 0xf2);
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(float *)(iVar3 + 8) = (float)uVar2;
    param_4[2] = *(int *)(param_3 + 0x2c);
    if (*(char *)(param_3 + 0x110) == '\0') {
      *(undefined4 *)(iVar3 + 0x10) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    else {
      uVar4 = (uint)*(byte *)(param_3 + 0x112);
      uVar5 = (uint)*(ushort *)(param_3 + 0xf2);
      if (*(byte *)(param_3 + 0x111) + uVar4 < uVar5) {
        *(float *)(iVar3 + 0xc) = (float)(int)(uVar5 - uVar4);
        if (*(byte *)(param_3 + 0x112) != 0) {
          fVar6 = 1.0 / (float)*(byte *)(param_3 + 0x112);
        }
        *(float *)(iVar3 + 0x14) = fVar6;
        if (*(byte *)(param_3 + 0x111) != 0) {
          fVar7 = 1.0 / (float)*(byte *)(param_3 + 0x111);
        }
        *(float *)(iVar3 + 0x10) = fVar7;
      }
      else if (uVar4 < uVar5) {
        *(float *)(iVar3 + 0xc) = (float)(int)(uVar5 - uVar4);
        *(float *)(iVar3 + 0x10) = 1.0 / (float)(int)(uVar5 - uVar4);
        if (*(byte *)(param_3 + 0x112) != 0) {
          fVar6 = 1.0 / (float)*(byte *)(param_3 + 0x112);
        }
        *(float *)(iVar3 + 0x14) = fVar6;
      }
      else {
        *(undefined4 *)(iVar3 + 0x10) = 0;
        bVar1 = *(byte *)(param_3 + 0x112);
        *(undefined4 *)(iVar3 + 0xc) = 0;
        *(float *)(iVar3 + 0x14) = 1.0 / (float)bVar1;
      }
    }
  }
  return;
}

