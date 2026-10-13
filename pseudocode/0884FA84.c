/* Entry 0x0884FA84 | file offset 0x0004CA5C | FUN_0884fa84 | bytes 908 */

void FUN_0884fa84(int *param_1,int param_2,undefined4 param_3,undefined2 param_4,undefined1 param_5,
                 undefined2 param_6,undefined2 param_7,char param_8,undefined4 uStackX_0,
                 int iStackX_4)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  *param_1 = param_2;
  iVar4 = FUN_08850a40(param_3);
  param_1[1] = iVar4;
  if (iVar4 != 0) {
    if ((*(ushort *)(iVar4 + 6) & 0x20) != 0) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (*(short *)(iVar4 + 8) < 0) {
      iVar6 = *param_1;
      cVar1 = *(char *)(iVar6 + 0x204);
      if (cVar1 == '\0') {
        iVar4 = FUN_08850a64(**(undefined1 **)(*(int *)(iVar6 + 0x200) + 0x5a4),
                             (*(byte *)(*(int *)(*(int *)(iVar6 + 0x200) + 0x2f8) + 8) & 8) != 0);
      }
      else {
        bVar3 = false;
        if (cVar1 < '\x03') {
          if ('\0' < cVar1) {
            if (cVar1 < '\x02') {
              bVar3 = (*(byte *)(iVar4 + 5) & 1) != 0;
            }
            else {
              bVar3 = (*(byte *)(iVar4 + 5) & 2) != 0;
            }
          }
        }
        else if (cVar1 < '\x04') {
          bVar3 = (*(byte *)(iVar4 + 5) & 4) != 0;
        }
        else if ((cVar1 < '\x05') && ((*(byte *)(iVar4 + 5) & 8) != 0)) {
          bVar3 = true;
        }
        if (bVar3) {
          cVar1 = *(char *)(iVar6 + 0x205);
        }
        else {
          cVar1 = *(char *)(iVar6 + 0x206);
        }
        iVar4 = (int)cVar1;
      }
      iVar4 = FUN_08850a40(iVar4);
      param_1[1] = iVar4;
      *(undefined2 *)(param_1 + 4) = param_4;
    }
    else {
      *(undefined2 *)(param_1 + 4) = param_4;
    }
    iVar6 = *(int *)(param_2 + 0x200);
    iVar7 = (int)*(short *)(iVar4 + 8);
    if ((*(byte *)(*(int *)(iVar6 + 0x2f8) + 8) & 1) == 0) {
      if ((*(byte *)(*(int *)(iVar6 + 0x2f8) + 8) & 8) != 0) {
        iVar7 = (int)*(short *)(iVar4 + 0x2c);
      }
    }
    else {
      if ((*(byte *)(*(int *)(iVar6 + 0x2f8) + 8) & 8) == 0) {
        sVar2 = *(short *)(iVar4 + 0x2a);
      }
      else {
        sVar2 = *(short *)(iVar4 + 0x2e);
      }
      iVar7 = (int)sVar2;
    }
    iVar6 = FUN_08831320(0x620);
    iVar4 = 0;
    if (iVar6 != 0) {
      uVar5 = FUN_088470b8(iVar7);
      FUN_08850be0(iVar6,uVar5,uStackX_0);
      iVar4 = iVar6;
    }
    param_1[2] = iVar4;
    FUN_08851058(iVar4,*(undefined4 *)(*param_1 + 0x200),(int)(short)param_1[4],param_5);
    iVar4 = param_1[1];
    if (0 < *(short *)(iVar4 + 0x1c)) {
      FUN_0882fa10(0,(float)iStackX_4,param_1[2] + 0x130,(int)*(short *)(iVar4 + 0x1c),0);
      iVar4 = param_1[1];
    }
    if ((-1 < *(short *)(iVar4 + 0x22)) && (param_8 == '\0')) {
      FUN_088a9de8(*(undefined4 *)(*(int *)(param_1[2] + 0x390) + 0x5c),
                   (int)*(short *)(iVar4 + 0x22),param_1[2] + 0x4c8,0,0);
      iVar4 = param_1[1];
    }
    if ((*(ushort *)(iVar4 + 6) & 0x100) != 0) {
      *(undefined1 *)(param_1[2] + 0x614) = 1;
    }
    *(undefined2 *)((int)param_1 + 0x16) = param_7;
    *(undefined2 *)(param_1 + 5) = param_6;
    if (0 < (short)param_1[5]) {
      FUN_08834df4(0,param_1[2]);
      FUN_08834d60((float)(int)(short)param_1[5],param_1[2]);
    }
    FUN_0884edd0(param_1);
  }
  return;
}

