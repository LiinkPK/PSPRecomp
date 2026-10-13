/* Entry 0x088593B4 | file offset 0x0005638C | FUN_088593b4 | bytes 512 */

void FUN_088593b4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_30 [16];
  
  FUN_08838dcc(param_2,auStack_30,0x13);
  iVar1 = FUN_08866e04(auStack_30,auStack_30);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x2a4);
    if (iVar1 < 10) {
      *(int *)(param_1 + 0x2a4) = iVar1 + 1;
      iVar1 = param_1 + ((*(int *)(param_1 + 0x2a0) + iVar1) % 10) * 0x40;
      piVar4 = (int *)(iVar1 + 0x20);
      iVar3 = iVar1 + 0x30;
      iVar1 = iVar1 + 0x40;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x2a0);
      *(int *)(param_1 + 0x2a0) = iVar1 + 1;
      iVar1 = param_1 + iVar1 * 0x40;
      piVar4 = (int *)(iVar1 + 0x20);
      iVar3 = iVar1 + 0x30;
      iVar1 = iVar1 + 0x40;
      if (9 < *(int *)(param_1 + 0x2a0)) {
        *(undefined4 *)(param_1 + 0x2a0) = 0;
      }
    }
    *piVar4 = param_3;
    iVar2 = FUN_0899c1c0(*(undefined4 *)(param_1 + param_3 * 4));
    piVar4[1] = (uint)*(ushort *)(iVar2 + 8);
    FUN_089a3868(iVar3,auStack_30);
    fVar5 = (float)piVar4[5];
    piVar4[5] = (int)(fVar5 - 80.0);
    if (fVar5 - 80.0 < 15.0) {
      piVar4[5] = 0x41700000;
    }
    fVar5 = (float)(piVar4[1] / 2);
    fVar6 = (float)(0x1e0 - piVar4[1] / 2);
    if ((float)piVar4[4] < fVar5) {
      piVar4[4] = (int)fVar5;
    }
    if (fVar6 < (float)piVar4[4]) {
      piVar4[4] = (int)fVar6;
    }
    FUN_089a3890(iVar1);
    piVar4[0xc] = 0xffffff;
    *(undefined1 *)(piVar4 + 2) = 1;
    piVar4[0xd] = 0;
    piVar4[8] = -0x3db80000;
  }
  return;
}

