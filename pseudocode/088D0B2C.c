/* Entry 0x088D0B2C | file offset 0x000CDB04 | FUN_088d0b2c | bytes 824 */

void FUN_088d0b2c(int param_1,undefined1 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0xc4f4);
  while (iVar2 = iVar6, iVar2 != 0) {
    iVar6 = *(int *)(iVar2 + 0x6c);
    iVar3 = FUN_088dcdf8(iVar2,param_2,0xffffffff);
    if (iVar3 != 0) {
      sVar1 = *(short *)(iVar2 + 100);
      uVar4 = FUN_088dce34(iVar2);
      iVar3 = *(int *)(param_1 + 0x24);
      while (iVar3 != 0) {
        iVar7 = *(int *)(iVar3 + 0x24);
        FUN_088db21c(iVar3,iVar2,uVar4,(int)sVar1);
        iVar3 = iVar7;
      }
      iVar3 = *(int *)(param_1 + 0x30);
      while (iVar3 != 0) {
        iVar7 = *(int *)(iVar3 + 0x24);
        FUN_088db21c(iVar3,iVar2,uVar4,(int)sVar1);
        iVar3 = iVar7;
      }
      if (*(int *)(iVar2 + 0x70) == 0) {
        *(undefined4 *)(param_1 + 0xc4f4) = *(undefined4 *)(iVar2 + 0x6c);
        iVar3 = *(int *)(iVar2 + 0x6c);
        uVar4 = *(undefined4 *)(iVar2 + 0x70);
      }
      else {
        *(undefined4 *)(*(int *)(iVar2 + 0x70) + 0x6c) = *(undefined4 *)(iVar2 + 0x6c);
        iVar3 = *(int *)(iVar2 + 0x6c);
        uVar4 = *(undefined4 *)(iVar2 + 0x70);
      }
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xc4f8) = uVar4;
      }
      else {
        *(undefined4 *)(iVar3 + 0x70) = uVar4;
      }
      *(undefined4 *)(iVar2 + 0x70) = 0;
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(int *)(param_1 + 0xc4fc) = *(int *)(param_1 + 0xc4fc) + -1;
      if (**(int **)(param_1 + 0xebc0) != 0) {
        for (piVar5 = (int *)(*(int **)(param_1 + 0xebc0))[1]; *piVar5 != 0;
            piVar5 = (int *)piVar5[1]) {
        }
      }
      **(int **)(param_1 + 0xebc4) = iVar2;
      *(undefined4 *)(param_1 + 0xebc4) = *(undefined4 *)(*(int *)(param_1 + 0xebc4) + 4);
    }
  }
  iVar6 = *(int *)(param_1 + 0xebc8);
  while (iVar2 = iVar6, iVar2 != 0) {
    iVar6 = *(int *)(iVar2 + 0xc);
    iVar3 = FUN_088de1e8(iVar2,param_2,0xffffffff);
    if (iVar3 != 0) {
      sVar1 = *(short *)(iVar2 + 4);
      uVar4 = FUN_088de224(iVar2);
      iVar3 = *(int *)(param_1 + 0x24);
      while (iVar3 != 0) {
        iVar7 = *(int *)(iVar3 + 0x24);
        FUN_088db254(iVar3,iVar2,uVar4,(int)sVar1);
        iVar3 = iVar7;
      }
      iVar3 = *(int *)(param_1 + 0x30);
      while (iVar3 != 0) {
        iVar7 = *(int *)(iVar3 + 0x24);
        FUN_088db254(iVar3,iVar2,uVar4,(int)sVar1);
        iVar3 = iVar7;
      }
      if (*(int *)(iVar2 + 0x10) == 0) {
        *(undefined4 *)(param_1 + 0xebc8) = *(undefined4 *)(iVar2 + 0xc);
        iVar3 = *(int *)(iVar2 + 0xc);
        uVar4 = *(undefined4 *)(iVar2 + 0x10);
      }
      else {
        *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0xc) = *(undefined4 *)(iVar2 + 0xc);
        iVar3 = *(int *)(iVar2 + 0xc);
        uVar4 = *(undefined4 *)(iVar2 + 0x10);
      }
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xebcc) = uVar4;
      }
      else {
        *(undefined4 *)(iVar3 + 0x10) = uVar4;
      }
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(int *)(param_1 + 0xebd0) = *(int *)(param_1 + 0xebd0) + -1;
      if (*(code **)(param_1 + 0x1096c) == (code *)0x0) {
        if (**(int **)(param_1 + 0x1095c) != 0) {
          for (piVar5 = (int *)(*(int **)(param_1 + 0x1095c))[1]; *piVar5 != 0;
              piVar5 = (int *)piVar5[1]) {
          }
        }
        **(int **)(param_1 + 0x10960) = iVar2;
        *(undefined4 *)(param_1 + 0x10960) = *(undefined4 *)(*(int *)(param_1 + 0x10960) + 4);
      }
      else {
        (**(code **)(param_1 + 0x1096c))(iVar2);
      }
    }
  }
  return;
}

