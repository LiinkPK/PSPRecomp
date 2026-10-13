/* Entry 0x088A62A8 | file offset 0x000A3280 | FUN_088a62a8 | bytes 292 */

void FUN_088a62a8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = (float)param_1[0x4b];
  fVar7 = DAT_089d5eac;
  if (0.0 <= (float)param_1[0x4a]) {
    fVar7 = (float)param_1[0x4a];
  }
  iVar5 = *param_1;
  while (iVar1 = iVar5, iVar1 != 0) {
    if (iVar1 == 0) {
      iVar5 = *param_1;
    }
    else {
      iVar5 = *(int *)(iVar1 + 0x40);
    }
    FUN_088a4460(fVar6 * fVar7,iVar1);
    if ((*(uint *)(iVar1 + 0x18) & 2) != 0) {
      iVar2 = *param_1;
      if ((iVar2 != 0) && (iVar4 = param_1[1], iVar4 != 0)) {
        iVar3 = *(int *)(iVar1 + 0x40);
        if (iVar1 == iVar2) {
          *param_1 = iVar3;
          iVar2 = 0;
        }
        else {
          iVar4 = *(int *)(iVar2 + 0x40);
          if (*(int *)(iVar2 + 0x40) == iVar1) {
            *(int *)(iVar2 + 0x40) = iVar3;
          }
          else {
            do {
              iVar2 = iVar4;
              iVar4 = *(int *)(iVar2 + 0x40);
            } while (*(int *)(iVar2 + 0x40) != iVar1);
            *(int *)(iVar2 + 0x40) = iVar3;
          }
          iVar4 = param_1[1];
        }
        if (iVar1 == iVar4) {
          param_1[1] = iVar2;
        }
        *(undefined4 *)(iVar1 + 0x40) = 0;
      }
      FUN_088a43ec(iVar1,3);
    }
  }
  return;
}

