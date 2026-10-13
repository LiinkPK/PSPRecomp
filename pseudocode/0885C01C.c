/* Entry 0x0885C01C | file offset 0x00058FF4 | FUN_0885c01c | bytes 744 */

undefined4 FUN_0885c01c(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_120 [256];
  int local_20;
  
  if (param_2 == 0) {
    uVar4 = 0xffffffff;
  }
  else if (*param_1 == '\x01') {
    uVar4 = 0;
  }
  else {
    iVar1 = FUN_08862c40(PTR_s_dlc_aerith_txt_089d4e10,1);
    if (iVar1 < 1) {
      uVar4 = 0xfffffffe;
    }
    else {
      iVar2 = FUN_0885c6cc(param_2,iVar1,0,0,1,0);
      if (iVar2 == 0) {
        uVar4 = 0xfffffffd;
      }
      else {
        iVar3 = FUN_08862854(PTR_s_dlc_aerith_txt_089d4e10,iVar2,iVar1,1);
        if (iVar3 == iVar1) {
          FUN_08862338(auStack_120);
          uVar4 = FUN_088623a0();
          local_20 = FUN_08862cdc(auStack_120,uVar4);
          if ((local_20 < 1) || (local_20 < iVar1)) {
            FUN_0885c538(param_2,iVar2,0);
            uVar4 = 0xfffffffb;
          }
          else {
            iVar3 = FUN_0885c6cc(param_2,local_20,0,0,1,0);
            if (iVar3 == 0) {
              FUN_0885c538(param_2,iVar2,0);
              uVar4 = 0xfffffffa;
            }
            else {
              iVar5 = FUN_08862910(auStack_120,iVar3,local_20,uVar4);
              if (iVar5 == iVar1) {
                iVar5 = 0;
                uVar6 = 0xff7;
                uVar7 = 0x22;
                uVar8 = 0x163;
                if (0 < iVar1) {
                  do {
                    if ((uint)*(byte *)(iVar2 + iVar5) !=
                        (((uint)*(byte *)(iVar3 + iVar5) << (8 - (uVar8 & 7) & 0x1f) |
                         (uint)(*(byte *)(iVar3 + iVar5) >> (uVar8 & 7))) - uVar7 & 0xff ^
                        uVar6 & 0xff)) {
                      FUN_0885c538(param_2,iVar2,0);
                      FUN_0885c538(param_2,iVar3,0);
                      return 0xfffffff8;
                    }
                    iVar5 = iVar5 + 1;
                    uVar6 = uVar6 * 0x15a4e35 + 1 >> 0x10 & 0x7fff;
                    uVar7 = uVar7 * 0x343fd + 0x269ec3 >> 0x10 & 0x7fff;
                    uVar8 = uVar8 * 0x15a4e35 + 1 >> 0x10 & 0x7fff;
                  } while (iVar5 < iVar1);
                }
                FUN_0885c538(param_2,iVar2,0);
                FUN_0885c538(param_2,iVar3,0);
                *param_1 = '\x01';
                uVar4 = 0;
              }
              else {
                FUN_0885c538(param_2,iVar2,0);
                FUN_0885c538(param_2,iVar3,0);
                uVar4 = 0xfffffff9;
              }
            }
          }
        }
        else {
          FUN_0885c538(param_2,iVar2,0);
          uVar4 = 0xfffffffc;
        }
      }
    }
  }
  return uVar4;
}

