/* Entry 0x088D0370 | file offset 0x000CD348 | FUN_088d0370 | bytes 664 */

void FUN_088d0370(int param_1,undefined1 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0xc4f4);
  while (iVar1 = iVar5, iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0x6c);
    iVar2 = FUN_088dcdf8(iVar1,param_2,0xffffffff);
    if ((iVar2 != 0) && (iVar2 = FUN_088dcd60(iVar1), iVar2 != 0)) {
      if (*(int *)(iVar1 + 0x70) == 0) {
        *(undefined4 *)(param_1 + 0xc4f4) = *(undefined4 *)(iVar1 + 0x6c);
        iVar2 = *(int *)(iVar1 + 0x6c);
        uVar3 = *(undefined4 *)(iVar1 + 0x70);
      }
      else {
        *(undefined4 *)(*(int *)(iVar1 + 0x70) + 0x6c) = *(undefined4 *)(iVar1 + 0x6c);
        iVar2 = *(int *)(iVar1 + 0x6c);
        uVar3 = *(undefined4 *)(iVar1 + 0x70);
      }
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0xc4f8) = uVar3;
      }
      else {
        *(undefined4 *)(iVar2 + 0x70) = uVar3;
      }
      *(undefined4 *)(iVar1 + 0x70) = 0;
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(int *)(param_1 + 0xc4fc) = *(int *)(param_1 + 0xc4fc) + -1;
      if (**(int **)(param_1 + 0xebc0) != 0) {
        for (piVar4 = (int *)(*(int **)(param_1 + 0xebc0))[1]; *piVar4 != 0;
            piVar4 = (int *)piVar4[1]) {
        }
      }
      **(int **)(param_1 + 0xebc4) = iVar1;
      *(undefined4 *)(param_1 + 0xebc4) = *(undefined4 *)(*(int *)(param_1 + 0xebc4) + 4);
    }
  }
  iVar5 = *(int *)(param_1 + 0xebc8);
  while (iVar1 = iVar5, iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0xc);
    iVar2 = FUN_088de1e8(iVar1,param_2,0xffffffff);
    if ((iVar2 != 0) && (iVar2 = FUN_088de1a8(iVar1), iVar2 != 0)) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        *(undefined4 *)(param_1 + 0xebc8) = *(undefined4 *)(iVar1 + 0xc);
        iVar2 = *(int *)(iVar1 + 0xc);
        uVar3 = *(undefined4 *)(iVar1 + 0x10);
      }
      else {
        *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0xc) = *(undefined4 *)(iVar1 + 0xc);
        iVar2 = *(int *)(iVar1 + 0xc);
        uVar3 = *(undefined4 *)(iVar1 + 0x10);
      }
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0xebcc) = uVar3;
      }
      else {
        *(undefined4 *)(iVar2 + 0x10) = uVar3;
      }
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(param_1 + 0xebd0) = *(int *)(param_1 + 0xebd0) + -1;
      if (*(code **)(param_1 + 0x1096c) == (code *)0x0) {
        if (**(int **)(param_1 + 0x1095c) != 0) {
          for (piVar4 = (int *)(*(int **)(param_1 + 0x1095c))[1]; *piVar4 != 0;
              piVar4 = (int *)piVar4[1]) {
          }
        }
        **(int **)(param_1 + 0x10960) = iVar1;
        *(undefined4 *)(param_1 + 0x10960) = *(undefined4 *)(*(int *)(param_1 + 0x10960) + 4);
      }
      else {
        (**(code **)(param_1 + 0x1096c))(iVar1);
      }
    }
  }
  if (param_3 != '\0') {
    FUN_0887d60c(*(undefined4 *)(DAT_089d6998 + 0xf2c0));
  }
  return;
}

