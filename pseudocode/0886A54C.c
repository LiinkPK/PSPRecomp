/* Entry 0x0886A54C | file offset 0x00067524 | FUN_0886a54c | bytes 344 */

void FUN_0886a54c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if (('\x01' < *(char *)(param_1 + 0x8c)) && (-1 < *(char *)(param_1 + 0x8d))) {
    FUN_0886a948(param_1);
    piVar3 = *(int **)(param_1 + 0x84);
    iVar6 = 0;
    iVar7 = piVar3[1];
    iVar4 = 0;
    if (0 < iVar7) {
      do {
        FUN_0886a9b0(param_1,iVar6,(int)*(short *)(*piVar3 + iVar4 + 0x50),0xffffffff);
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 0x60;
        piVar3 = *(int **)(param_1 + 0x84);
      } while (iVar6 < iVar7);
    }
    uVar5 = *(undefined4 *)(param_1 + *(char *)(param_1 + 0x8d) * 0x10 + 0xc);
    uVar1 = FUN_089b0d2c(piVar3[2]);
    uVar2 = FUN_089b0f44(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),uVar1);
    uVar2 = FUN_089b1870(uVar2);
    FUN_089b18fc(0,uVar5,uVar1);
    uVar1 = FUN_089b0f44(uVar5,uVar1);
    FUN_089b0d1c(uVar2,uVar1);
    FUN_089b296c(0,uVar5);
    FUN_089b2c14(uVar5);
    *(int *)(param_1 + 0x84) = param_1 + *(char *)(param_1 + 0x8d) * 0x10 + 4;
    *(undefined1 *)(param_1 + 0x8d) = 0xff;
  }
  return;
}

