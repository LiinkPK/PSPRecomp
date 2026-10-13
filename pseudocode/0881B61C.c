/* Entry 0x0881B61C | file offset 0x000185F4 | FUN_0881b61c | bytes 604 */

undefined4 FUN_0881b61c(undefined1 *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  FUN_0881b558();
  DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0xc) = DAT_09af84d0 >> 0x10 & 0x7fff;
  pcVar1 = DAT_089d4910;
  if (*DAT_089d4910 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_0881eaf0(DAT_089d4910);
    if (iVar2 == 0) {
      uVar3 = 0xfffffffe;
    }
    else {
      uVar3 = FUN_08899300();
      iVar2 = FUN_088988b4(uVar3);
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          FUN_088981b4(uVar3,iVar6,1,1);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
      }
      iVar2 = 0;
      while (iVar2 = FUN_0881e610(pcVar1,iVar2), iVar2 != 0) {
        puVar4 = (undefined4 *)FUN_08818848(0x50);
        puVar5 = (undefined4 *)0x0;
        if (puVar4 != (undefined4 *)0x0) {
          FUN_08818744(puVar4);
          puVar5 = puVar4;
        }
        if (puVar5 == (undefined4 *)0x0) {
          return 0xfffffffd;
        }
        uVar3 = FUN_0881e780(pcVar1,iVar2);
        iVar6 = FUN_08818880(puVar5,iVar2,uVar3);
        if (iVar6 != 0) {
          FUN_08818778(puVar5,3);
          return 0xfffffffc;
        }
        if (*(undefined4 **)(param_1 + 0x114) == (undefined4 *)0x0) {
          *(undefined4 **)(param_1 + 0x114) = puVar5;
          *(undefined4 **)(param_1 + 0x110) = puVar5;
          *puVar5 = 0;
        }
        else {
          **(undefined4 **)(param_1 + 0x114) = puVar5;
          *puVar5 = 0;
          *(undefined4 **)(param_1 + 0x114) = puVar5;
        }
      }
      iVar2 = FUN_0881d140(param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_0881d2d0(param_1);
        if (iVar2 == 0) {
          iVar2 = FUN_08816820(param_1 + 0x14);
          if (iVar2 == 0) {
            iVar2 = FUN_0881aa10(param_1 + 0x34);
            if (iVar2 == 0) {
              iVar2 = FUN_08819c60(param_1 + 0x5c);
              if (iVar2 == 0) {
                *param_1 = 1;
                iVar2 = 0;
                while (iVar2 = FUN_0881cb80(iVar2), iVar2 != 0) {
                  FUN_08818bf4(iVar2);
                }
                uVar3 = 0;
              }
              else {
                uVar3 = 0xfffffff6;
              }
            }
            else {
              uVar3 = 0xfffffff7;
            }
          }
          else {
            uVar3 = 0xfffffff8;
          }
        }
        else {
          uVar3 = 0xfffffffa;
        }
      }
      else {
        uVar3 = 0xfffffffb;
      }
    }
  }
  return uVar3;
}

