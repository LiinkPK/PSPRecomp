/* Entry 0x08882790 | file offset 0x0007F768 | FUN_08882790 | bytes 300 */

void FUN_08882790(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = iVar2;
    if (iVar3 == 0) {
      iVar2 = *(int *)(param_1 + 4);
    }
    else {
      iVar2 = *(int *)(iVar3 + 0x34);
    }
  } while ((iVar2 != 0) && (*(int *)(iVar2 + 0x2c) <= *(int *)(param_2 + 0x2c)));
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x14) == iVar2)) {
    *(int *)(param_1 + 0x14) = param_2;
  }
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      *(int *)(param_1 + 8) = param_2;
      *(int *)(param_1 + 4) = param_2;
      *(undefined4 *)(param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 0x38) = 0;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    else {
      *(int *)(*(int *)(param_1 + 4) + 0x38) = param_2;
      *(undefined4 *)(param_2 + 0x38) = 0;
      *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 0xc);
      *(int *)(param_1 + 4) = param_2;
    }
    *(int *)(param_1 + 0xc) = iVar2 + 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar3 == iVar2) {
      if (iVar2 == 0) {
        *(int *)(param_1 + 8) = param_2;
        *(int *)(param_1 + 4) = param_2;
        *(undefined4 *)(param_2 + 0x34) = 0;
        *(undefined4 *)(param_2 + 0x38) = 0;
        iVar2 = *(int *)(param_1 + 0xc);
      }
      else {
        *(int *)(iVar2 + 0x34) = param_2;
        uVar1 = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(param_2 + 0x34) = 0;
        *(undefined4 *)(param_2 + 0x38) = uVar1;
        iVar2 = *(int *)(param_1 + 0xc);
        *(int *)(param_1 + 8) = param_2;
      }
      *(int *)(param_1 + 0xc) = iVar2 + 1;
    }
    else {
      *(int *)(param_2 + 0x38) = iVar3;
      iVar2 = *(int *)(iVar3 + 0x34);
      *(int *)(param_2 + 0x34) = iVar2;
      *(int *)(iVar2 + 0x38) = param_2;
      *(int *)(iVar3 + 0x34) = param_2;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
  }
  return;
}

