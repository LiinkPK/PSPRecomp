/* Entry 0x08811AC0 | file offset 0x0000EA98 | FUN_08811ac0 | bytes 1076 */

void FUN_08811ac0(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  float fVar8;
  
  if (param_1[1] == 0) {
    return;
  }
  uVar4 = param_1[6];
  psVar7 = (short *)0x0;
  uVar5 = uVar4 & 1;
  if (-1 < (char)param_1[3]) {
    psVar7 = (short *)(param_1[1] + 0x1c + (char)param_1[3] * 0x14);
  }
  if (uVar5 != 0) goto LAB_08811cb0;
  cVar1 = *(char *)((int)param_1 + 0xe);
  bVar2 = false;
  if (cVar1 < '\x02') {
    if (cVar1 < '\x01') {
LAB_08811c18:
      iVar3 = param_1[1];
      fVar8 = *(float *)(iVar3 + 8);
    }
    else {
      iVar3 = func_0x08b30e10(*param_1,1);
      if ((iVar3 != 0) || (iVar3 = func_0x08b30f9c(*param_1), iVar3 != 0)) {
        bVar2 = true;
      }
      iVar3 = param_1[1];
      uVar4 = param_1[6];
      fVar8 = *(float *)(iVar3 + 8);
    }
  }
  else if (cVar1 < '\x03') {
    iVar3 = func_0x08b309c8(*param_1,1);
    if ((iVar3 != 0) || (iVar3 = func_0x08b30b54(*param_1), iVar3 != 0)) {
      bVar2 = true;
    }
    iVar3 = param_1[1];
    uVar4 = param_1[6];
    fVar8 = *(float *)(iVar3 + 8);
  }
  else {
    if ('\x03' < cVar1) goto LAB_08811c18;
    iVar3 = func_0x08b31108(*param_1);
    if ((iVar3 != 0) || (iVar3 = func_0x08b31244(*param_1), iVar3 != 0)) {
      bVar2 = true;
    }
    iVar3 = param_1[1];
    uVar4 = param_1[6];
    fVar8 = *(float *)(iVar3 + 8);
  }
  if ((0.0 <= fVar8) && (fVar8 <= (float)param_1[2])) {
    bVar2 = false;
  }
  if (!bVar2) {
    uVar4 = uVar4 | 1;
    param_1[6] = uVar4;
  }
  if (((uVar4 & 2) != 0) && ((*(uint *)(*param_1 + 900) & 0x200) != 0)) {
    FUN_088118b8(param_1);
    return;
  }
  if (*(short *)(iVar3 + 2) != *(short *)(*param_1 + 0x180)) {
    FUN_088118b8(param_1);
    return;
  }
  uVar5 = uVar4 & 1;
LAB_08811cb0:
  iVar3 = *param_1;
  if (uVar5 != 0) {
    iVar6 = param_1[1];
    if ((*(float *)(iVar6 + 0xc) <= (float)param_1[2]) &&
       ((*(float *)(iVar3 + 0x1a8) < *(float *)(iVar6 + 0x10) ||
        (*(float *)(iVar6 + 0x14) <= *(float *)(iVar3 + 0x1a8))))) {
      iVar3 = FUN_08838074();
      if (iVar3 == 0) {
        iVar3 = *param_1;
        if (psVar7 == (short *)0x0) {
          iVar6 = (int)*(short *)(param_1[1] + 4);
          if (iVar6 < 0) {
            FUN_0882fa10(0x41000000,0,iVar3 + 0x130,1,0);
            iVar3 = param_1[1];
            if ((*(ushort *)(iVar3 + 6) & 2) != 0) {
              FUN_08811668(0x41000000,param_1,1);
              iVar3 = param_1[1];
            }
          }
          else {
            FUN_0882fa10(*(undefined4 *)(param_1[1] + 0x18),0,iVar3 + 0x130,iVar6,0);
            iVar3 = param_1[1];
            if ((*(ushort *)(iVar3 + 6) & 2) != 0) {
              FUN_08811668(*(undefined4 *)(iVar3 + 0x18),param_1,(int)*(short *)(iVar3 + 4));
              iVar3 = param_1[1];
            }
          }
          *(undefined2 *)(*param_1 + 0x540) = *(undefined2 *)(iVar3 + 4);
        }
        else {
          FUN_0882fa10(*(undefined4 *)(psVar7 + 4),0,iVar3 + 0x130,(int)*psVar7,0);
          *(short *)(*param_1 + 0x540) = *psVar7;
          if ((*(ushort *)(param_1[1] + 6) & 2) != 0) {
            FUN_08811668(*(undefined4 *)(psVar7 + 4),param_1,(int)*psVar7);
          }
        }
        FUN_0882fb90(param_1[5],0,*param_1 + 0x130,param_1[4]);
      }
      FUN_088118b8(param_1);
      return;
    }
    if (*(short *)(iVar6 + 2) != *(short *)(iVar3 + 0x180)) {
      FUN_088118b8(param_1);
      return;
    }
    iVar3 = FUN_08838074();
    if (iVar3 != 0) {
      FUN_088118b8(param_1);
      return;
    }
    iVar3 = *param_1;
  }
  fVar8 = (float)FUN_08838300(iVar3);
  cVar1 = (char)param_1[3];
  param_1[2] = (int)((float)param_1[2] + fVar8);
  if (((int)cVar1 < (int)*(char *)((int)param_1 + 0xd)) &&
     (*(float *)(cVar1 * 0x14 + param_1[1] + 0x34) <= (float)param_1[2])) {
    *(char *)(param_1 + 3) = cVar1 + '\x01';
  }
  return;
}

