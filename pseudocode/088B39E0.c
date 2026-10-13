/* Entry 0x088B39E0 | file offset 0x000B09B8 | FUN_088b39e0 | bytes 320 */

undefined4 FUN_088b39e0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else if (*param_1 == 0) {
    iVar1 = FUN_08869ab4(param_2,PTR_s_assist_bin_089d72f8);
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
          if (*piVar5 == 0x15) {
            piVar4 = piVar5 + 2;
            param_1[1] = piVar5[1];
            param_1[2] = (int)piVar4;
            piVar4 = piVar4 + param_1[1] * 0x1a;
            param_1[3] = *piVar4;
            param_1[4] = (int)(piVar4 + 1);
            param_1[5] = (int)(piVar4 + 1) + param_1[3] * 2;
            if (piVar5 == (int *)0x0) {
              piVar5 = (int *)0x0;
            }
            param_1[6] = (int)piVar5;
            if (piVar5 == (int *)0x0) {
              uVar3 = 0xfffffffa;
            }
            else {
              uVar3 = 0;
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

