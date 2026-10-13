/* Entry 0x088C6D40 | file offset 0x000C3D18 | FUN_088c6d40 | bytes 416 */

undefined4 FUN_088c6d40(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else if (*param_1 == 0) {
    iVar1 = FUN_08869ab4(param_2,PTR_s_ptcommand_bin_089d7738);
    if (iVar1 == 0) {
      uVar3 = 0xfffffffe;
    }
    else {
      iVar6 = *(int *)(iVar1 + 8);
      if (iVar6 < 1) {
        uVar3 = 0xfffffffd;
      }
      else {
        iVar2 = FUN_088820d8(iVar6);
        *param_1 = iVar2;
        if (iVar2 == 0) {
          uVar3 = 0xfffffffc;
        }
        else {
          FUN_08935524(iVar2,*(undefined4 *)(iVar1 + 4),iVar6);
          piVar5 = (int *)*param_1;
          if (*piVar5 == 0x10) {
            piVar4 = piVar5 + 2;
            param_1[1] = piVar5[1];
            param_1[2] = (int)piVar4;
            param_1[3] = piVar4[param_1[1] * 0x16];
            param_1[4] = (int)(piVar4 + param_1[1] * 0x16 + 1);
            if (piVar5 == (int *)0x0) {
              piVar5 = (int *)0x0;
            }
            param_1[5] = (int)piVar5;
            if (piVar5 == (int *)0x0) {
              uVar3 = 0xfffffffa;
            }
            else {
              iVar1 = FUN_08869ab4(param_3,"party_command.bin");
              if (iVar1 == 0) {
                uVar3 = 0xfffffff9;
              }
              else {
                uVar7 = *(undefined4 *)(iVar1 + 4);
                uVar8 = *(undefined4 *)(iVar1 + 8);
                uVar3 = FUN_088821c0();
                iVar1 = FUN_0887ac70(param_1 + 6,uVar7,uVar8,uVar3);
                if (iVar1 == 0) {
                  uVar3 = 0xfffffff8;
                }
                else {
                  uVar3 = 0;
                }
              }
            }
          }
          else {
            uVar3 = 0xfffffffb;
          }
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

