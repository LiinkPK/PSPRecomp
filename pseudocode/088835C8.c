/* Entry 0x088835C8 | file offset 0x000805A0 | FUN_088835c8 | bytes 548 */

undefined4 FUN_088835c8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (DAT_089d69df == '\0') {
    if (DAT_089d69dc == '\0') {
      uVar4 = 0;
    }
    else {
      iVar2 = FUN_08883d0c(&DAT_09b49130,param_1);
      if (iVar2 == 0) {
        if ((DAT_089d69d4 == 0) || (iVar2 = FUN_0893585c(DAT_089d69d4,param_1), iVar2 != 0)) {
          iVar3 = FUN_08883c88(&DAT_09b49128,param_1);
          iVar2 = DAT_09b49128;
          if (iVar3 != 0) {
            if ((DAT_09b49128 != 0) && (DAT_09b4912c != 0)) {
              iVar5 = *(int *)(iVar3 + 0x6c);
              if (iVar3 == DAT_09b49128) {
                iVar2 = 0;
                DAT_09b49128 = iVar5;
              }
              else {
                iVar1 = *(int *)(DAT_09b49128 + 0x6c);
                if (*(int *)(DAT_09b49128 + 0x6c) == iVar3) {
                  *(int *)(DAT_09b49128 + 0x6c) = iVar5;
                }
                else {
                  do {
                    iVar2 = iVar1;
                    iVar1 = *(int *)(iVar2 + 0x6c);
                  } while (*(int *)(iVar2 + 0x6c) != iVar3);
                  *(int *)(iVar2 + 0x6c) = iVar5;
                }
              }
              if (iVar3 == DAT_09b4912c) {
                DAT_09b4912c = iVar2;
              }
              *(undefined4 *)(iVar3 + 0x6c) = 0;
            }
            FUN_08882f68(iVar3,3);
          }
          iVar3 = FUN_0888318c(0x74);
          iVar2 = 0;
          if (iVar3 != 0) {
            FUN_08882f28(iVar3,param_1);
            iVar2 = iVar3;
          }
          if (iVar2 == 0) {
            uVar4 = 0;
          }
          else {
            iVar3 = FUN_0885c6cc(DAT_089d69cc,param_3,0,0,0,0);
            *(int *)(iVar2 + 0x50) = iVar3;
            if (iVar3 == 0) {
              FUN_08882f68(iVar2,3);
              uVar4 = 0;
            }
            else {
              if (param_2 != 0) {
                FUN_08935524(iVar3,param_2,param_3);
              }
              *(undefined4 *)(iVar2 + 0x54) = param_3;
              if (DAT_09b49134 == 0) {
                DAT_09b49130 = iVar2;
                DAT_09b49134 = iVar2;
                *(undefined4 *)(iVar2 + 0x70) = 0;
              }
              else {
                *(int *)(DAT_09b49134 + 0x70) = iVar2;
                *(undefined4 *)(iVar2 + 0x70) = 0;
                DAT_09b49134 = iVar2;
              }
              uVar4 = 1;
            }
          }
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 1;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

