/* Entry 0x0894B48C | file offset 0x00148464 | FUN_0894b48c | bytes 1492 */

undefined4 FUN_0894b48c(float param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar3 = *(int *)(param_3 + 0x1cc);
  *(int *)(param_2 + 0x88) = param_3;
  if ((*(ushort *)(param_3 + 2) & 0x20) != 0) goto LAB_0894b4d8;
  if (((uint)*(ushort *)(param_2 + 0x24) & **(uint **)(param_3 + 0x1d0) >> 0x1c) != 0) {
    return *(undefined4 *)(param_3 + 0x154);
  }
  if ((*(ushort *)(param_3 + 10) & 0xff7f) != 0) {
    return *(undefined4 *)(param_3 + 0x154);
  }
  if ((((*(ushort *)(param_3 + 10) & 0x80) != 0) && ((*(ushort *)(param_3 + 4) & 2) != 0)) &&
     (*(float *)(param_3 + 0x168) < 0.0)) {
    return *(undefined4 *)(param_3 + 0x154);
  }
  if ((*(ushort *)(param_3 + 4) & 2) == 0) {
    fVar8 = *(float *)(param_3 + 0x164);
  }
  else if (*(float *)(param_3 + 0x168) < 0.0) {
    if (10.0 < param_1) {
      param_1 = 1.0;
      fVar8 = *(float *)(param_3 + 0x164);
    }
    else {
      fVar8 = *(float *)(param_3 + 0x164);
    }
  }
  else {
    fVar8 = *(float *)(param_3 + 0x164);
  }
  param_1 = param_1 + fVar8;
  *(undefined4 *)(param_3 + 0x164) = 0;
  *(float *)(param_3 + 0x160) = param_1;
  *(float *)(param_3 + 0x15c) = *(float *)(param_3 + 0x15c) + param_1;
  if (0.0 <= *(float *)(param_3 + 0x168)) {
LAB_0894b654:
    iVar2 = *(int *)(iVar3 + 0xc);
    if (iVar2 < 2) {
      if (-1 < iVar2) {
        if (iVar2 < 1) {
          fVar8 = 30.0;
        }
        else {
          fVar8 = 15.0;
        }
        fVar9 = *(float *)(param_3 + 0x15c) - *(float *)(param_3 + 0x168);
        *(float *)(param_3 + 0x16c) = 1.0 - fVar9 / fVar8;
        if ((fVar8 <= fVar9) || (fVar9 < 0.0)) goto LAB_0894b4d8;
      }
    }
    else if (iVar2 < 3) goto LAB_0894b4d8;
  }
  else if ((((*(ushort *)(param_3 + 4) & 2) != 0) &&
           (fVar8 = (float)*(ushort *)(iVar3 + 8), fVar8 != 0.0)) &&
          (fVar8 <= *(float *)(param_3 + 0x15c))) {
    *(float *)(param_3 + 0x168) = fVar8;
    goto LAB_0894b654;
  }
  iVar2 = 0;
  do {
    iVar7 = *(int *)(param_3 + iVar2 * 4 + 0x1b8);
    while (iVar7 != 0) {
      fVar8 = *(float *)(iVar7 + 0x30) + param_1;
      *(float *)(iVar7 + 0x30) = fVar8;
      if (0.0 <= fVar8) {
        if ((((*(ushort *)(iVar7 + 4) & 2) == 0) || ((*(ushort *)(param_3 + 4) & 2) == 0)) ||
           ((*(ushort *)(param_3 + 2) & 0x10) != 0)) {
LAB_0894b7f4:
          if (((int)fVar8 < (int)(uint)*(ushort *)(iVar7 + 0x34)) ||
             (((*(ushort *)(iVar7 + 4) & 1) != 0 && (*(short *)(iVar7 + 0x20) != 0))))
          goto LAB_0894b848;
          iVar5 = *(int *)(iVar7 + 0x14);
          FUN_0894c938(param_2,param_3,iVar7,0);
          iVar7 = iVar5;
        }
        else {
          if (*(ushort *)(iVar3 + 8) == 0) {
            iVar5 = *(int *)(iVar7 + 0x40);
          }
          else if (*(int *)(iVar3 + 0xc) == 3) {
            if ((float)*(ushort *)(iVar3 + 8) <= *(float *)(param_3 + 0x15c)) goto LAB_0894b7f4;
            iVar5 = *(int *)(iVar7 + 0x40);
          }
          else {
            iVar5 = *(int *)(iVar7 + 0x40);
          }
          if ((float)*(ushort *)(iVar5 + 0xe) <= fVar8) {
            *(ushort *)(iVar7 + 2) = *(ushort *)(iVar7 + 2) | 0x10;
          }
LAB_0894b848:
          iVar7 = *(int *)(iVar7 + 0x14);
        }
      }
      else {
        iVar7 = *(int *)(iVar7 + 0x14);
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  if (0.0 <= *(float *)(param_3 + 0x15c)) {
    if ((float)*(int *)(param_3 + 0x1a8) <= *(float *)(param_3 + 0x15c)) {
      if ((*(ushort *)(param_3 + 4) & 2) == 0) {
        if (((*(ushort *)(param_3 + 4) & 1) != 0) &&
           (*(int *)(param_3 + 0x1b8) != 0 || *(int *)(param_3 + 0x1bc) != 0)) goto LAB_0894ba2c;
      }
      else if ((((*(ushort *)(param_3 + 2) & 0x10) == 0) &&
               ((*(ushort *)(iVar3 + 8) == 0 ||
                (*(float *)(param_3 + 0x15c) < (float)*(ushort *)(iVar3 + 8))))) ||
              (*(int *)(param_3 + 0x1b8) != 0 || *(int *)(param_3 + 0x1bc) != 0)) {
        return *(undefined4 *)(param_3 + 0x154);
      }
LAB_0894b4d8:
      uVar4 = *(undefined4 *)(param_3 + 0x154);
      FUN_089446f0(param_2,param_3,1);
      return uVar4;
    }
    if (-1 < *(short *)(param_3 + 0x1d4)) {
      fVar8 = *(float *)(param_3 + 0x15c);
      iVar2 = (int)*(short *)(param_3 + 0x1d4);
      do {
        if (iVar2 < 0) goto LAB_0894b984;
        psVar6 = *(short **)(*(int *)(iVar3 + 0x1c) + iVar2 * 4);
        if (((int)(uint)*(ushort *)(iVar3 + 0x10) <= iVar2) || (psVar6 == (short *)0x0)) {
          iVar2 = -1;
          goto LAB_0894b984;
        }
        if ((int)fVar8 < (int)*psVar6) goto LAB_0894b984;
        sVar1 = *psVar6;
        iVar7 = 0;
        if (0 < psVar6[1]) {
          do {
            FUN_0894cf98(fVar8 - (float)(int)sVar1,param_2,param_3,0,
                         *(undefined2 *)(*(int *)(psVar6 + 2) + iVar7 * 2),0);
            iVar7 = iVar7 + 1;
          } while (iVar7 < psVar6[1]);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(ushort *)(iVar3 + 0x10));
      iVar2 = -1;
LAB_0894b984:
      *(short *)(param_3 + 0x1d4) = (short)iVar2;
    }
  }
LAB_0894ba2c:
  return *(undefined4 *)(param_3 + 0x154);
}

