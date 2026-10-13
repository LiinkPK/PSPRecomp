/* Entry 0x08827854 | file offset 0x0002482C | FUN_08827854 | bytes 412 */

int FUN_08827854(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  FUN_0883975c(param_1,4,param_2);
  *(undefined **)(param_1 + 0x544) = &DAT_089c76a8;
  *(undefined4 *)(param_1 + 0x550) = param_3;
  *(undefined4 *)(param_1 + 0x594) = 0;
  *(undefined4 *)(param_1 + 0x598) = 0;
  iVar2 = 0;
  iVar4 = param_1;
  do {
    *(undefined2 *)(iVar4 + 0x554) = 0xffff;
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 2;
  } while (iVar2 < 0x20);
  iVar4 = FUN_0886cd40(*(undefined4 *)(*(int *)(param_1 + 0x550) + 0x394));
  iVar2 = FUN_0886cd40(*(undefined4 *)(param_1 + 0x394));
  iVar5 = 0;
  if (0 < iVar4) {
    iVar7 = 0;
    do {
      iVar6 = 0;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          iVar1 = FUN_08935970(*(undefined4 *)
                                (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x550) + 0x390) +
                                                  0x28) + 0x14) + iVar7),
                               *(undefined4 *)
                                (*(int *)(*(int *)(*(int *)(param_1 + 0x390) + 0x28) + 0x14) + iVar8
                                ));
          if (iVar1 == 0) {
            *(short *)(param_1 + iVar6 * 2 + 0x554) = (short)iVar5;
            break;
          }
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar6 < iVar2);
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar5 < iVar4);
  }
  FUN_08827594(param_1);
  FUN_0882fa10(0,0,param_1 + 0x130,1,0);
  iVar4 = DAT_089d4958;
  piVar3 = (int *)(DAT_089d4958 + 0x2c);
  if (*(int *)(DAT_089d4958 + 0x30) == 0) {
    *(int *)(DAT_089d4958 + 0x30) = param_1;
    *piVar3 = param_1;
    *(undefined4 *)(param_1 + 0x59c) = 0;
  }
  else {
    *(int *)(*(int *)(DAT_089d4958 + 0x30) + 0x59c) = param_1;
    *(undefined4 *)(param_1 + 0x59c) = 0;
    *(int *)(iVar4 + 0x30) = param_1;
  }
  return param_1;
}

