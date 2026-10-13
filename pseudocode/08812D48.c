/* Entry 0x08812D48 | file offset 0x0000FD20 | FUN_08812d48 | bytes 424 */

uint FUN_08812d48(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_20 [12];
  
  iVar2 = *param_1;
  if (iVar2 < 2) {
    if (-1 < iVar2) {
      iVar3 = *param_2;
      if (iVar2 < 1) {
        if (iVar3 < 2) {
          if (-1 < iVar3) {
            if (0 < iVar3) {
              uVar1 = FUN_088121b0(param_1,param_2);
              return uVar1;
            }
LAB_08812e70:
            uVar1 = FUN_08812054(param_1,param_2);
            return uVar1;
          }
        }
        else if (iVar3 == 3) goto LAB_08812e70;
      }
      else if (iVar3 < 2) {
        if (-1 < iVar3) {
          if (0 < iVar3) {
            uVar1 = FUN_08812300(param_1,param_2);
            return uVar1;
          }
LAB_08812ec4:
          uVar1 = FUN_088121b0(param_2,param_1);
          return uVar1;
        }
      }
      else if (iVar3 == 3) goto LAB_08812ec4;
    }
  }
  else if (iVar2 == 3) {
    iVar2 = *param_2;
    if (iVar2 < 2) {
      if (-1 < iVar2) {
        if (iVar2 < 1) {
          uVar1 = FUN_08812054(param_1,param_2);
          return uVar1;
        }
        uVar1 = FUN_088121b0(param_1,param_2);
        return uVar1;
      }
    }
    else if (iVar2 == 3) {
      FUN_089a3528(auStack_20,param_2 + 4,param_1 + 4);
      fVar4 = (float)FUN_089a3718(auStack_20,auStack_20);
      return (uint)(fVar4 < ((float)param_1[1] + (float)param_2[1]) *
                            ((float)param_1[1] + (float)param_2[1]));
    }
  }
  return 0;
}

